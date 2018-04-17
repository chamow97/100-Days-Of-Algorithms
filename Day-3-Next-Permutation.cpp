//template by chamow
#include<bits/stdc++.h>
/*-------------------------------------------------------- */
using namespace std;

/*-------------------------------------------------------- */

#define rep(i,val,n) for(ll i=val;i<n;i++)
#define per(j,val,n) for(ll j=val;j>=n;j--)
#define pb push_back
#define pi 3.14157
#define mp make_pair
#define MODULO 1000000007
#define INF 100000
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vecit vector<ll> :: iterator
#define vecpit vector< pair<ll, ll> > :: iterator
#define f first
#define s second


/*-------------------------------------------------------- */

typedef long long ll;
typedef vector<bool> boolean;
typedef vector<ll> vec;
typedef vector< pair<ll, ll> > vecpair;


/*-------------------------------------------------------- */

int main()
{
	fastread;
	string sequence;
	cin >> sequence;
	string temp = sequence;
	next_permutation(temp.begin(), temp.end());
	cout << "\n Next Permutation using Built in function: " << temp << '\n';
	cout << "\n Next Permutation using Custom function: ";
	int pos = -1;
	per(j,sequence.length()-2,0)
	{
		if(sequence[j] < sequence[j+1])
		{
			pos = j;
			break;
		}
	}
	if(pos == -1)
	{
		reverse(sequence.begin(), sequence.end());
		cout << sequence << '\n';
	}
	else
	{
		char pivot = sequence[pos];
		int nextPos = -1;
		int minimum = INF;
		rep(i,pos+1, sequence.length())
		{
			if(sequence[i] > pivot)
			{
				if(minimum > sequence[i])
				{
					minimum = sequence[i];
					nextPos = i;
				}
			}
		}
		swap(sequence[pos], sequence[nextPos]);
		reverse(sequence.begin()+pos+1, sequence.end());
		cout << sequence << '\n';
	}
	return 0;
}
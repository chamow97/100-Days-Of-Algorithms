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
#define INF 1000000000000000
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
	int value;
	cin >> value;
	vec binary;
	int temp = value;
	while(temp)
	{
		binary.pb(temp % 2);
		temp /= 2;
	}
	cout << "Binary Value: ";
	reverse(binary.begin(), binary.end());
	for(auto i : binary)
	{
		cout << i;
	}
	cout << '\n';
	cout << "Number of Set bits: ";
	int numberOfSet = 0;
	while(value)
	{
		value &= (value - 1);
		numberOfSet++;
	}
	cout << numberOfSet << '\n';
	return 0;
}
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
	const ll maxn = 1e7;
	vector<bool> prime(maxn, true);
	int n, count = 0;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		if(prime[i])
		{
			++count;
			for(int j = i * 2; j <= n; j += i)
			{
				prime[j] = false;
			}
		}
	}
	cout << count;
	return 0;
}
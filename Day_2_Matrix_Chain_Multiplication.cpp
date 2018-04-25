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
#define INF 100000000
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

int findCost(int arr[], int n)
{
	int dp[n+10][n+10];
	rep(i,0,n+10)
	{
		rep(j,0,n+10)
		{
			dp[i][j] = 0;
		}
	}
	int currCost = 0;
	rep(l,2,n)
	{
		rep(i,0,n-l)
		{
			int j = i + l;
			dp[i][j] = INF;
			rep(k,i+1,j)
			{
				currCost = dp[i][k] + dp[k][j] + (arr[i] * arr[j] * arr[k]);
				dp[i][j] = min(dp[i][j], currCost);
			}
		}
	}
	return dp[0][n-1];
}

/*-------------------------------------------------------- */

int main()
{
	fastread;
	int arr[] = {10, 20, 30, 40};
	int cost = findCost(arr, 4);
	cout << cost;
	return 0;
}
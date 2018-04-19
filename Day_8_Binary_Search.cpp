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

int answer = -1;

void binarySearch(int low, int high, int key, vector<int> &arr)
{
	if(low > high)
	{
		return;
	}
	int mid = (low + high)/2;
	if(arr[mid] > key)
	{
		binarySearch(low, mid - 1, key, arr);
	}
	else if(arr[mid] == key)
	{
		answer = mid;
		return;
	}
	else
	{
		binarySearch(mid + 1, high, key, arr);
	}
}

int main()
{
	fastread;
	int n, key;
	cin >> n;
	vector<int> arr(n);
	rep(i,0,n)
	{
		cin >> arr[i];
	}
	cin >> key;
	binarySearch(0, n-1, key, arr);
	cout << answer;
	return 0;
}
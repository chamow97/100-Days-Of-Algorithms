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

int evaluate(string type, int firstVal, int secondVal)
{
	if(type == "+")
	{
		return secondVal + firstVal;
	}
	else if(type == "-")
	{
		return secondVal - firstVal;
	}
	else if(type == "*")
	{
		return secondVal * firstVal;
	}
	else if(type == "/")
	{
		return secondVal / firstVal;
	}
	else
	{
		return 1;
	}
}


/*-------------------------------------------------------- */

int main()
{
	fastread;
	stack<string> storageStack;
	vector<string> expression = {"1", "2", "+", "4", "3", "-", "+", "10", "5", "/", "*"};
	rep(i,0,expression.size())
	{
		storageStack.push(expression[i]);
		if(expression[i] == "+" || expression[i] == "-" || expression[i] == "/" || expression[i] == "*")
		{
			storageStack.pop();
			int firstVal = stoi(storageStack.top());
			storageStack.pop();
			int secondVal = stoi(storageStack.top());
			storageStack.pop();
			int result = evaluate(expression[i], firstVal, secondVal);
			storageStack.push(to_string(result));
		}
	}
	cout << storageStack.top() << '\n';
	return 0;
}
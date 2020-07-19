#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vpii vector<pii>
#define F first
#define S second

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int a[100001];
void solve()
{ 
ll n,x;
cin>>n>>x;

for(int i=0;i<n;i++)    cin>>a[i];
cout<<"\n";
sort(a,a+n);


vector<int> v;
int c=1;
for(int i=1;i<n;i++)
{
	if(a[i]<= (2*a[i-1]))
	{
		c++;
	}
	else
	{
		v.pb(c);
		c=1;
	}
}
v.pb(c);
for(auto t: v)
cout<<t<<" ";

}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test=1;
   cin>>test;
   while(test--)
    {
	  solve();
	
    }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int h[27];
void solve()
{  

memset(h,0,sizeof(h));
ll n,q;
cin>>n>>q;

string s;
cin>>s;


for(ll i=0;i<n;i++)
{   
   int x=s[i]-'a'+1;
   h[x]++;
}

for(int i=0;i<q;i++)
{
	int a;
	cin>>a;
	int sum=0;
	for(int i=1;i<27;i++)
	{
		if(h[i]>a)
		{
			sum+=(h[i]-a);
		}
	}
	cout<<sum<<"\n";
}
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
  ll test;
   cin>>test;
   while(test--)
     solve();
  return 0;
}

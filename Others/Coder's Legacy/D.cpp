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

int ans[10000001];

void solve()
{ 
string s;
cin>>s;

int n=s.length();

int q;
cin>>q;

stack<int> stk;

for(int i=n-1;i>=0;i--)
{
if(s[i]=='(')
{
	if(stk.empty())
	ans[i]=0;
   else
   {
	int x=stk.top();
	stk.pop();
	
	ans[i]=x-i+1;
   }
}
else
{
	stk.push(i);
	
	if (i==n-1 || (i< (n-1) && ans[i+1]==0)) 
	 ans[i]=0;
	else
	 ans[i]=ans[i+1]+1;
}
}
 int x;
for(int j=0;j<q;j++)
{
	cin>>x;
	
   if(ans[x-1]==0)
   cout<<-1<<"\n";
   else
   cout<< (x+ans[x-1]-1)<<"\n";
}


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
	  cout<<"\n";
    }
  return 0;
}

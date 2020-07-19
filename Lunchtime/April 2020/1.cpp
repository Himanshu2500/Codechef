#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  ll n,s;
   cin>>n>>s;
   ll arr[n];
   ll w[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   for(int i=0;i<n;i++)
   cin>>w[i];
   
   ll def =INT_MAX,att=INT_MAX;
   
   for(int i=0;i<n;i++)
   {
   	if(w[i]==0)
   	def=min(arr[i],def);
   	if(w[i]==1)
   	att=min(arr[i],att);
   }
   
   if((def+att+s)<=100)
   cout<<"yes"<<"\n";
   else
   cout<<"no"<<"\n";
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   while(test--)
    solve();
  return 0;
}

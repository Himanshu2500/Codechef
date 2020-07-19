#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{   int n,q;
    cin>>n>>q;
    
    long long ans=0;
    int a=0,b;
    
    for(int i=0;i<2*q;i++)
    {   cin>>b;
    	ans+=abs(b-a);
    	a=b;
	}
    
    cout<<ans<<"\n";
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

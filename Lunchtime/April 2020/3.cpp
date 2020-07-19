#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const ll mod=998244353;

int power[100005];

void calpower()
{
   power[0]=1;
  for(int i=1;i<100005;i++)
  power[i]=(2*power[i-1])%mod;
  
}

void solve()
{ 
    int n;
   cin>>n;
  
  int arr[n];
  unordered_map<ll,ll> m;
  
  
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	m[arr[i]]++;
  }
  
  long long ans=0,sum=0,prod=1;
  ll newm;
  
  for(int i=1;i<=n+1;i++)
  {
  	sum=(sum+m[i])%mod;
  	
  	newm=(i*prod)%mod;
  	
	newm=(newm*power[n-sum])%mod;
  	
  	ans=(ans+newm)%mod;
  	
  	prod = (prod*(power[m[i]]-1))%mod;
  	
  	
  }
  cout<<ans<<"\n";
}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   
   calpower();
   while(test--)
    solve();
  return 0;
}

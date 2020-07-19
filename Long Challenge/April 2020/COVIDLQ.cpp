#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int arr[100001];

void solve()
{  int n;
   cin>>n;
   
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   sort(arr,arr+n);
   
   int i=0;
   long long ans=0;
   for(int j=n-1;j>=0;j--)
   { 
      if((arr[j]-i)<1)
	  break;
	  ans+=arr[j]-i;
	  ans=ans%M;
	  i++;	
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


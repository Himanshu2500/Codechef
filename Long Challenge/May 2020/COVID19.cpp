#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;


void solve()
{  
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int mindis=INT_MAX;
int maxdis=1;

for(int i=1;i<n;i++)
{ 
  int sum=1;
  
  while((arr[i]-arr[i-1])<=2 && i<n)
  {
  	sum++;
  	i++;
  }
  

  mindis=min(mindis,sum);
  maxdis=max(maxdis,sum);
}
if((arr[n-1]-arr[n-2])>2)
mindis=1;

cout<<mindis<<" "<<maxdis<<"\n";
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

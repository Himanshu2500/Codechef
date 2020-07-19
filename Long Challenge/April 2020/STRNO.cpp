#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;


void solve()
{  int n;
   cin>>n;
   
   cout<<n/2<<"\n";
if(n%2==0)
cout<<"2 1 2"<<"\n";
else
cout<<"3 1 2 "<<n<<"\n";

for( int i=3;i<n;i=i+2)
{
	cout<<"2 "<<i<<" "<<i+1<<"\n";
}
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


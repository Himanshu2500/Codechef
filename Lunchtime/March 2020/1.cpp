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
		int n,m;
		cin>>n>>m;
		
		int sum=n+m;
		int a,b,c,d;
		
		b=n%10;
		a=n/10;
		d=m%10;
		c=m/10;
		
		int arr[4];
		
	   arr[0]=c*10+b+a*10+d;
	   if(a!=0)
	   arr[1]=d*10+b+c*10+a;
	   if(c!=0)
	   arr[2]=a*10+c+b*10+d;
	   arr[3]=a*10+d+c*10+b;
	   
	   for(int i=0;i<4;i++)
	   if(arr[i]>sum)
	   sum=arr[i];
	   
    cout<<sum<<"\n";
}

int main() 
{    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   while(test--)
     solve();

  return 0;
} 


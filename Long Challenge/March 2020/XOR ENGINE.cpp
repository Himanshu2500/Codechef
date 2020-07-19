#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define rrep(i,b,a) for(int i=b-1;i>=a;i--)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

int countSetBits(int n) 
{ 
     
    if (n == 0) 
        return 0; 
    else
        return 1 + countSetBits(n & (n - 1)); 
} 

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 
int test;
cin>>test;
while(test--)
{
	int n,q;
	cin>>n>>q;
	
	int a[100000];
	rep(i,0,n)
	cin>>a[i];
	
	int b[100000];
	rep(i,0,q)
	cin>>b[i];
	
	int even=0;
	rep(i,0,n)
	{
		if((countSetBits(a[i]))%2==0)
		even++;	
	}
	
	rep(i,0,q)
	{
		if(countSetBits(b[i])%2==0)
		cout<<even<<" "<<n-even<<"\n";
		else
		cout<<n-even<<" "<<even<<"\n";
	}
}
return 0;
}

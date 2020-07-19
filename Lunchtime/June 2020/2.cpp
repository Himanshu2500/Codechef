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


void solve()
{ 

int n;
cin>>n;

double chef=0.00000,chefu=0.00000;

int g,a,b;

double cal;
for(int i=0;i<n;i++)
{
	cin>>g>>a>>b;
	
	cal=(g*a*b)/(1.00000*(a+b));
	
	chef+=cal/(1.00000*a);
	chefu+=cal/(1.00000*b);;
}  
  
  printf("%.6f %.6f\n", chef, chefu); 
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
    }
  return 0;
}

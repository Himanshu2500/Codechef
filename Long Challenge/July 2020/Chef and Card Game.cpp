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

int sumdigit(int a){
	
	int p=0;
	
	while(a)
	{
		p+= a%10;
		
		a/=10;
	}
	
	return p;
}
void solve()
{ 
int n;
cin>>n;
int a,b;
int x=0,y=0;

for(int i=0;i<n;i++)
{
	cin>>a>>b;
	
	a=sumdigit(a);
	b=sumdigit(b);
	
	if(a>b)
	x++;
	else
	if(a<b)
	y++;
	else
	{
		x++;
		y++;
	}
}

if(x>y)
cout<<"0 "<<x;
else
if(x<y)
cout<<"1 "<<y;
else
cout<<"2 "<<x;
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

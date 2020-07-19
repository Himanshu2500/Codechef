#include<bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for(int i=a;i<(b);i++)
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

char a[8][8];

void solve()
{ 
int n;
cin>>n;


for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
a[i][j]='X';

for(int i=0;i<8;i++)
{
if(n==0)
break;
for(int j=0;j<8;j++)
{
a[i][j]='.';
n--;

if(n==0)
break;
}
}

a[0][0]='O';

for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
cout<<a[i][j];
cout<<"\n";
}

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

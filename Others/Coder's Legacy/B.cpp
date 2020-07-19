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

int a[200001];
void solve()
{ 

int n;
cin>>n;

for(int i=0;i<n;i++)
cin>>a[i];

int query;
cin>>query;

sort(a,a+n);


int x,y,xy;
while(query--)
{
	cin>>x>>y;
    
     xy=x+y;
	
	if (binary_search(a, a + n,xy)) 
        cout << "-1\n"; 
    else
        cout <<( upper_bound(a, a+n, xy) - a ) <<"\n";
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
    }
  return 0;
}

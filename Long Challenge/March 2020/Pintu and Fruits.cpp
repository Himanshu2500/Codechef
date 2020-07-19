#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define rrep(i,b,a) for(int i=b-1;i>=a;i--)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

int main()
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int test;
cin>>test;
while(test--)
{	int n,m;
    cin>>n>>m;
    
    int fruits[51];
    rep(i,0,n)
    cin>>fruits[i];
    
    int baskets[51];
    rep(i,0,n)
    cin>>baskets[i];
    
    int type[51];
    memset(type,-1,sizeof(type));
    
    rep(i,0,n)
    {
     type[fruits[i]]=0;
	}
	rep(i,0,n)
    type[fruits[i]]+=baskets[i];
    
    int res=INT_MAX;
    rep(i,1,m+1)
    {  
    	if(type[i]>=0)
    	res=min(res,type[i]);
	}
    cout<<res<<endl;
}
return 0;
}




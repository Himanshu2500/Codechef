#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  string s1,s2;
   cin>>s1;
   cin>>s2;
   
   int start=0;
   int end=0;
   int c=0;
   int l=0;
   
   int k=0;
   for(int i=0;i<s1.size();i++)
   {
   	if(s1[i]!=s2[i])
   	 {   l++;
   	     k++;
   	 	if(c==0)
   	 	{
			start=i;
			c++;
	    }
   	 	i++;
   	 	while(s1[i]!=s2[i])
   	 	{   l++;
   	 		i++;
			}
   	 	i--;
   	 	end=i;
		}
   }
   vector<int> v;
   for(int i=start+1;i<end;i++)
   {
   	if(s1[i]==s2[i])
	{
		int c=1;
		i++;
		while(s1[i]==s2[i])
		{
			c=c+1;
			i++;
		}
		v.push_back(c);
		i--;
	}
   }

sort(v.begin(),v.end());

int ans=l*k;

for(auto x:v)
{
	k--;
	l=l+x;
	
	ans=min(ans,l*k);
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

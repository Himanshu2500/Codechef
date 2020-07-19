#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

void solve()
{  int n,k;
cin>>n>>k;

int arr[n];
int brr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
brr[i]=arr[i];
}

sort(brr,brr+n);

for(int i=0;i<n;i++)
{
int j=i%k;
bool flag=false;
for( ;j<n;j=j+k)
{
	if(arr[i]==brr[j])
	{
		flag=true;
		break;
	}
}
if(flag==false)
{
cout<<"no"<<"\n";
return;
}
}

cout<<"yes"<<"\n";
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

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

bool check(int arr[],int start,int end)
{   long long int sum=1;

	for(int i=start;i<=end;i++)
	{
		sum=sum*arr[i];
		if(sum%4==0)
		return true;
	}
	if(sum%2==1)
	return true;
return false;		
}

int recur(int arr[],int start,int end)
{  int count=0;
	if(start==end)
	  {
	  	if(arr[start]%2!=0 || arr[start]%4==0)
	  	count++;
	  }
	if(check(arr,start,end))
	{
		count++;
	}
	
	else
	{
		count+=recur(arr,start-1,end);
		count+=recur(arr,start+1,end);
	}
	return count;
}

int arr[100001];
void solve()
{  
int n;
cin>>n;

for(int i=0;i<n;i++)
cin>>arr[i];

int i=0,j=n-1;

long long subseq=recur(arr,0,n-1);

cout<<subseq<<"\n";

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


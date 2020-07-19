#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int arr[513][513];
int a[513];
int b[513];


int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
    int n,f;
    cin>>n>>f;
    
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
    	cin>>arr[i][j];
	}
	
	int k;
	cin>>k;
	ll msum=0;
	for(int i=0;i<n;i++)
	{   int rsum=0,csum=0;
		for(int j=0;j<n;j++)
		{
			rsum=rsum+arr[i][j];
			csum=csum+arr[j][i];
		}
		a[i]=rsum;
		b[i]=csum;
		msum+=a[i];
	}
 
 while(msum)
 {  ll maxr=INT_MIN,p=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]>maxr)
 		{
 			maxr=a[i];
 			p=i;
		 }	
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	 	if(arr[i][p]<=maxr)
	 	{
	 		arr[i][p]=0;
	 		maxr=maxr-arr[i][p];
		 }
	 }
	 
	 for(int i=0;i<n;i++)
 	{
 		if(b[i]>minr)
 		{
 			minr=b[i];
 			p=i;
		 }	
	 }
	 
 }
  
}





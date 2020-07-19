#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

int arr[2000001];

void solve()
{  
int n,k;

cin>>n>>k;

for(int i=1;i<=n;i++)
cin>>arr[i];

vector<int> p,q,r;
bool flag=true;

while(flag)
{
    for(int i=1;i<=n;i++)
{
	if(arr[i]!=i)
	{
		if(arr[arr[i]]!=i)
		{  
		   p.push_back(i);
		   q.push_back(arr[i]);
		   
		   int temp=arr[arr[i]]; 
		   r.push_back(temp);
			arr[arr[i]]=arr[i];
			arr[i]=arr[temp];
			arr[temp]=temp;
	         i--;		
		}
	}
}

for(int i=1;i<=n;i++)
{
	if(arr[i]!=i)
	{
		if(arr[arr[i]]==i)
		{
           int j=1;
		   
		   while((arr[i+j]==(i+j) || arr[i+j]==arr[arr[i]] ) && (i+j)<n)
		   j++;
		   
		   if((i+j)==n)
		   {
		   	cout<<-1<<"\n";
		   	return;
		   }
		   p.push_back(i);
		   q.push_back(arr[i]);
		   r.push_back(i+j);
		   int temp=arr[arr[i]];
			arr[arr[i]]=arr[i];
			arr[i]=arr[i+j];
			arr[i+j]=temp;
	     	
		}
			if(arr[arr[i]]!=i)
		{
		   p.push_back(i);
		   q.push_back(arr[i]);
			int temp=arr[arr[i]]; 
		   r.push_back(temp);
			arr[arr[i]]=arr[i];
			arr[i]=arr[temp];
			arr[temp]=temp;
	     i--;		
		}
		
	}
}


int count=0;
	for(int j=1;j<=n;j++)
	if(arr[j]!=j)
	count++;
	
	if(count<=2)
	flag=false;
}


int count=0;
for(int i=1;i<=n;i++)
{
	if(arr[i]!=i)
	count++;
}
if(count==2)
cout<<-1<<"\n";
else
if(p.size()==0)
cout<<0<<"\n";
else
if(p.size()>k)
cout<<-1<<"\n";
else
{
	cout<<p.size()<<"\n";
	
	for(int i=0;i<p.size();i++)
	cout<<p[i]<<" "<<q[i]<<" "<<r[i]<<"\n";
	
	
}
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

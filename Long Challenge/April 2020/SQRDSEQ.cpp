#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

long long findSubarraySum(ll arr[], ll n, ll sum) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having  
    // particular value of sum. 
    unordered_map<ll, ll> prevSum; 
  
    ll res = 0; 
  
    // Sum of elements so far. 
    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) { 
  
        // Add current element to sum so far. 
        currsum += arr[i]; 
  
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if (currsum == sum)  
            res++;         
  
        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
  
        // Add currsum value to count of  
        // different values of sum. 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
void solve()
{  
ll n;
cin>>n;

ll arr[n];

for(ll i=0;i<n;i++)
cin>>arr[i];

ll seq=n*(n+1)/2;


for(ll i=0;i<n;i++)
{
   if(arr[i]%4==0)
	arr[i]=2;
	else
	if(arr[i]%2==0)
	arr[i]=1;
	else
	arr[i]=0;
}

ll x=findSubarraySum(arr,n,1);
cout<<seq-x<<"\n";

}

int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   ll test;
   cin>>test;
   while(test--)
    solve();
  return 0;
} 


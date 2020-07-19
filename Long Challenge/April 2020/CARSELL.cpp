#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

vi primeFactors(int n)  
{  vi p;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        p.push_back(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            p.push_back(i);  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        p.push_back(n);
		
return p;  
}  
  
void solve()
{  int x,k;
cin>>x>>k;

vi pf=primeFactors(x);

if(pf.size()>=k)
cout<<"1\n";
else
cout<<"0\n";
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


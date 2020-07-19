#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
 
const long long mod = 998244353;
long long power[100005];
 
int main(){
    int t;
    cin >> t;
 
    // precompute 2^ns (upto max value of n = 10^5)
    power[0] = 1;
    for(int i = 1; i < 100005; i++){
        power[i] = (2*power[i-1])%mod;
    }
 
    while(t--){
        int n;
        cin >> n;
        long long input[n];
        unordered_map<long long, long long> count;
 
        //input + update map
        for(int i = 0; i < n; i++){
            cin >> input[i];
            count[input[i]]++;
        }
 
        long long ans = 0, sum = 0, prod =1;
        long long newMex;
        for(int mex = 1; mex <= n+1; mex++){
 
            // running sum = num 1s + num2s +...numXs
            sum = (sum + count[mex])%mod;
 
            newMex = (mex*prod)%mod;
            newMex = (newMex*power[n-sum])%mod;
 
            //update answer
            ans = (ans + newMex)%mod;
 
            // running prod = [2^(num 1s) - 1]*....
            prod = (prod*(power[count[mex]]-1))%mod;
        }
        cout << ans << endl;
 
    }
 
}

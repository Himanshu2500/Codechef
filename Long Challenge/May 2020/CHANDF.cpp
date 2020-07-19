#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

static inline ll popcnt(ll x) {
    x -= ((x >> 1) & 0x55555555);
    x = (((x >> 2) & 0x33333333) + (x & 0x33333333));
    x = (((x >> 4) + x) & 0x0f0f0f0f);
    x += (x >> 8);
    x += (x >> 16);
    return x & 0x0000003f;
}

static inline ll firstset(ll x) {
    x |= (x >> 1);
    x |= (x >> 2);
    x |= (x >> 4);
    x |= (x >> 8);
    x |= (x >> 16);
    return popcnt(x);
}

ll chandf(ll x,ll y,ll z)
{
	ll ans=(x&z)*(y&z);
	return ans;
}
void solve()
{  
ll x,y,l,r;
cin>>x>>y>>l>>r;

    ll z = l, mxz = (x & l) * (y & l);
        
		if (x == 0 || y == 0) {
            cout<<0<<"\n";
            return;
        }
        
		ll temp = chandf(x, y, l), o = x | y;

        for (ll i = firstset(r); i >= 0; --i) {
            temp = 1l << i;
            if ((r & temp) == temp) {
                ll t = temp - 1;
                t = ((r ^ temp) | t) & o;
                if (t >= l && t <= r && mxz < chandf(x, y, t)) {
                    mxz = chandf(x, y, t);
                    z = t;
                } else if (t >= l && t <= r && mxz == chandf(x, y, t)) {
                    z = min(t, z);
                }
            }
        }

        temp = o&r;
        if (temp >= l && temp <= r && mxz < chandf(x, y, temp)) {
            mxz = chandf(x, y, temp);
            z = temp;
        } else if (temp >= l && temp <= r && mxz == chandf(x, y, temp)) {
            z = min(temp, z);
        }

        cout<<z<<"\n";
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





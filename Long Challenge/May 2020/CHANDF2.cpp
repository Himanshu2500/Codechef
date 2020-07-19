
#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) fo(int i=a;i<(b);i++)
#define trav(a,x) fo(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;

static inline uint32_t popcnt(uint32_t x) {
    x -= ((x >> 1) & 0x55555555);
    x = (((x >> 2) & 0x33333333) + (x & 0x33333333));
    x = (((x >> 4) + x) & 0x0f0f0f0f);
    x += (x >> 8);
    x += (x >> 16);
    return x & 0x0000003f;
}

static inline uint32_t firstset(uint32_t x) {
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

 ll z = l, Mxz = (x & l) * (y & l);
        if ((x == 0 || y == 0) && l == 0) {
            cout<<0<<"\n";
            return;
        }
        
        ll temp = chandf(x, y, l), o = x | y;
        
        for(ll i = firstset(r); i >= 0; --i) {
            temp = 1l << i;
            if ((r & temp) == temp) {
                ll t = temp - 1;
                t = ((r ^ temp) | t) & o;
                if (t < l) {
                    for(ll j = firstset(l); j > -1; --j) {
                        ll nextbit = 1l << j, maxt = (1l << 62) - 1;
                        if ((t & nextbit) == (l & nextbit)) {
                            continue;
                        }
                        if (t >= l && t <= r)
                            break;
                        if ((t & nextbit) > (l & nextbit)) {
                            --nextbit;
                            t |= nextbit;
                            maxt ^= nextbit;
                            nextbit = nextbit & r & o;
                            nextbit |= maxt;
                            t &= nextbit;
                            for(ll k = j - 1; k > -1; --k) {
                                ll inin = 1l << k;
                                if ((t & inin) == (r & inin))
                                    continue;
                                if ((t & inin) < (r & inin)) {
                                    inin = 1l << k - 1;
                                    inin--;
                                    t |= (inin & o);
                                    break;
                                }
                            }
                            break;
                        }
                        t = t ^ nextbit;
                    }
                }
                if (t >= l && t <= r && Mxz < chandf(x, y, t)) {
                    Mxz = chandf(x, y, t);
                    z = t;
                } else if (t >= l && t <= r && Mxz == chandf(x, y, t)) {
                    z = min(t, z);
                }
            }
        }

        temp = o & r;
        if (firstset(temp) <= firstset(l) && temp < l) {
            for (ll j = firstset(l); j > -1; --j) {
                ll nextbit = 1l << j, maxt = (1l << 62) - 1;
                if ((temp & nextbit) == (l & nextbit)) {
                    continue;
                }
                if (temp >= l && temp <= r)
                    break;
                if ((temp & nextbit) > (l & nextbit)) {
                    --nextbit;
                    temp |= nextbit;
                    maxt ^= nextbit;
                    nextbit = nextbit & r & o;
                    nextbit |= maxt;
                    temp &= nextbit;
                    for(ll k = j - 1; k > -1; --k) {
                        ll inin = 1l << k;
                        if ((temp & inin) == (r & inin))
                            continue;
                        if ((temp & inin) < (r & inin)) {
                            inin = 1l << k - 1;
                            inin--;
                            temp |= (inin & o);
                            break;
                        }
                    }
                    break;
                }
                temp = temp ^ nextbit;
            }
        }
        if (temp >= l && temp <= r && Mxz < chandf(x, y, temp)) {
            Mxz = chandf(x, y, temp);
            z = temp;
        } else if (temp >= l && temp <= r && Mxz == chandf(x, y, temp)) {
            z = min(temp, z);
        }
        o=x|y;
        if (o >= l && o <= r && Mxz < chandf(x, y, o)) {
            Mxz = chandf(x, y,o);
            z = o;
        } else if (o >= l && o <= r && Mxz == chandf(x, y, o)) {
            z = min(o, z);
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

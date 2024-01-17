#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

ll ext_gcd(ll a, ll b, ll &x, ll &y)
{
  if (b == 0)
  {
    x = 1;
    y = 0;
    return a;
  }

  ll d = ext_gcd(b, a % b, y, x);
  y -= a / b * x;
  return d;
}

ll mod(ll a, ll m)
{
  return (a % m + m) % m;
}

ll mod_inv(ll a, ll m)
{
  ll x, y;
  ll g = ext_gcd(a, m, x, y);
  return mod(x, m / g);
}

int main(){
    ll a,x,m;
    cin>>a>>x>>m;
    ll f[60];
    f[0]=1;
    f[1]=a%m;
    rep(i,58){
        f[i+2]=f[i+1]*f[i+1];
        f[i+2]%=m;
    }
    //rep(i,10)cout<<f[i]<<endl;
    x<<=1;
    ll y=1;
    rep(i,60){
        if(x>>i&1){
            y*=f[i];
            y%=m;
        }
    }
    y--;
    y=y*mod_inv(a-1,m);
    //cout<<mod_inv(a-1,m)<<endl;
    //A-1とMは互いに素は限らない→逆元は存在するとは限らない
    while(y<0){
        y+=m;
    }
    y%=m;
    cout<<y<<endl;
    return 0;
}
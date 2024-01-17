#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    vector<string> s(9);
    rep(i,9)cin>>s[i];
    vector<P> p;
    rep(i,9)rep(j,9){
        if(s[i][j]=='#')p.push_back({i,j});
    }
    int ans=0;
    int n=p.size();
    //cout<<n<<endl;
    if(n<4){
        cout<<0<<endl;
        return 0;
    }else{
        vector<int> v(n,0);
        rep(i,4){
            v[n-1-i]=1;
        }
        do{
            vector<pair<double,double>> ok;
            rep(i,n){
                if(v[i])ok.push_back({(double)p[i].first,(double)p[i].second});
                //cout<<(double)p[i].first<<' '<<(double)p[i].second<<endl;
            }
            sort(ok.begin(),ok.end());
            double x=0,y=0;
            rep(i,4){
                auto [a,b]=ok[i];
                x+=a;y+=b;
            }
            x/=4.0;
            y/=4.0;
            vector<pair<double,double>> q(4);
            q[0]={ok[0].first,ok[0].second};
            rep(i,3){
                auto [a,b]=q[i];
                q[i+1]={y-b+x,a-x+y};
                //cout<<a<<' '<<b<<endl;
            }
            sort(q.begin(),q.end());
            bool flag=true;
            rep(i,4){
                auto [a,b]=ok[i];
                auto [c,d]=q[i];
                if(!((int)a==(int)c&&(int)b==(int)d))flag=false;
            }
            if(flag)ans++;
        }while(next_permutation(v.begin(),v.end()));
        cout<<ans<<endl;
    }
    return 0;
}
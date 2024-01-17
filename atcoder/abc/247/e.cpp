#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    rep(i,n)cin>>a[i];
    int i=0;
    ll ans=0;
    while(i<n){
        vector<int> b;
        while(y<=a[i]&&a[i]<=x&&i<n){
            b.push_back(a[i]);
            i++;
        }
        i++;
        int l=0,r=0,cx=0,cy=0;
        if(b.size()!=0){
            int len=b.size();
            while(l<len){
                while(!(cx>0&&cy>0)&&r<len){
                    if(b[r]==x)cx++;
                    if(b[r]==y)cy++;
                    r++;
                }
                if(cx>0&&cy>0){
                    ans+=len-r+1;
                    //cout<<l<<' '<<r<<endl;;
                }
                if(b[l]==x)cx--;
                if(b[l]==y)cy--;
                l++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<double> x(n),y(n);
    rep(i,n)cin>>x[i]>>y[i];
    int ans=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                double ax=x[i]-x[j],ay=y[i]-y[j],bx=x[k]-x[j],by=y[k]-y[j];
                if(pow(ax*bx+ay*by,2)==(ax*ax+ay*ay)*(bx*bx+by*by))ans++;
            }
        }
    }
    if(ans>0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<double> x(n);
    double m=0,e=0,c=0;
    rep(i,n){
        cin>>x[i];
        m+=abs(x[i]);
        e+=x[i]*x[i];
        c=max(c,abs(x[i]));
    }
    cout<<setprecision(20)<<m<<endl;
    cout<<setprecision(20)<<sqrt(e)<<endl;
    cout<<setprecision(20)<<c<<endl;
    return 0;
}
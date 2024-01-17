#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    double sum=0;
    double a[n];
    rep(i,n){
        cin>>a[i];
        if(i!=0){
            sum+=a[i]-a[i-1];
        }
    }
    printf("%lf\n",sum/(double)(n-1));
    return 0;
}
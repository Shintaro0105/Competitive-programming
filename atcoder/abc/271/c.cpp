#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    vector<bool> vol(n,false);
    int l=0,r=n-1,sold=0;
    rep(i,n){
        cin>>a[i];
        a[i]--;
        if(a[i]>=n){
            sold++;
        }else{
            if(vol[a[i]]){
                sold++;
            }else{
                vol[a[i]]=true;
            }
        }
    }
    while(l<=r){
        while(vol[l])l++;
        if(sold>=2){
            sold-=2;
            vol[l]=true;
            l++;
        }else{
            if(r==0)break;
            while(!vol[r])r--;
            vol[r]=false;
            sold++;

        }
    }
    cout<<l<<endl;
    return 0;
}
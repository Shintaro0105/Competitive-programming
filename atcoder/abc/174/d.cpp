#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;cin>>n;
    string c;cin>>c;
    int l=0,r=n-1;
    int cnt=0;
    while(r-l>=1){
        while(r>=0&&c[r]=='W')r--;
        while(l<n&&c[l]=='R')l++;
        if(r-l<1)break;
        swap(c[l],c[r]);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
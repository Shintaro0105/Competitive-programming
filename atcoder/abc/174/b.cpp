#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    double d;cin>>d;
    int cnt=0;
    for(int i=0;i<n;i++){
        double x,y;cin>>x>>y;
        if(x*x+y*y<=d*d)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
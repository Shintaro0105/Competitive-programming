#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

bool comp(int i, int j) {
    return i > j;
}

int main(){
    int n;cin>>n;
    vector<int> p(n);
    rep(i,n)cin>>p[i];
    int i=0;
    do {
        if(i==1)break;
        i++;
    }while(next_permutation(p.begin(),p.end(),comp));
    rep(i,n-1)cout<<p[i]<<' ';
    cout<<p[n-1]<<endl;
    return 0;
}
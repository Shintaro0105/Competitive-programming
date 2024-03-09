#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(){
    vector<int> a;
    string line;
    bool flag=true;
    while(flag){
        int b;cin>>b;
        a.push_back(b);
        if(b==0)flag=false;
    }
    rep(i,a.size()){
        cout << a[a.size()-1-i] << endl;
    }
}
#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n;cin>>n;
    int x[n], y[n];
    map<int, vector<int>> a;
    string S;
    rep(i,n){
        cin>>x[i]>>y[i];
        a[y[i]].push_back(i);
    }
    cin>>S;
    bool ans=false;
    for(auto v:a){
        if(ans)break;
        /* pair<int,char> b[n];
        int k=0; */
        ll right_min=10e9+1,left_max=-1;
        for(auto X:v.second){
            /* b[k]=make_pair(x[X],S[X]);
            k++; */
            if(S[X]=='R'){
                if(x[X]<right_min){
                    right_min=x[X];
                }
            }else if(S[X]=='L'){
                if(x[X]>left_max){
                    left_max=x[X];
                }
            }
        }
        if(right_min<left_max){
            //cout<<left_max-right_min<<endl;
            ans=true;
        }
        /* sort(b,b+k);
        bool res=false;
        for(auto c:b){
            if(c.second=='R'){
                res=true;
            }
            if(c.second=='L'&&res){
                ans=true;
                break;
            }
        } */
    }
    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
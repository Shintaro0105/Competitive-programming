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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int ans;
    if(c*d==b){
        cout<<-1<<endl;
    }else{
        ans=a/(c*d-b);
        if(ans<0){
            cout<<-1<<endl;
        }else{
            if(a%(c*d-b)==0){
                cout<<ans<<endl;
            }else if(ans){
                cout<<ans+1<<endl;
            }
            
        }
    }
}
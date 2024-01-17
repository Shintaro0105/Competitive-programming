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
    int v, a, b, c;cin>>v>>a>>b>>c;
    while(1){
        v-=a;
        if(v<0){
            cout<<"F"<<endl;
            break;
        }
        v-=b;
        if(v<0){
            cout<<"M"<<endl;
            break;
        }
        v-=c;
        if(v<0){
            cout<<"T"<<endl;
            break;
        }
    }
    return 0;
}
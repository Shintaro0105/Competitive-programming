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
    if(1<=n&&n<=125){
        cout <<"4"<<endl;
    }
    else if(126<=n&&n<=211){
        cout <<"6"<<endl;
    }else {
        cout <<"8"<<endl;
    }
}
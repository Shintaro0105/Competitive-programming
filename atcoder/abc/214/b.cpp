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
    int s, t;
    cin>>s>>t;
    int res=0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100-i;j++){
            for(int k=0;k<=100-i-j;k++){
                if(i+j+k<=s&&i*j*k<=t){
                    res++;
                }
            }
        }
    }
    cout<<res<<endl;
}
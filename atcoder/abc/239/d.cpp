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

    vector<int> v(201);
    fill( v.begin(), v.end(), 0);
    v[0]=1;
    v[1]=1;
    for(int i=0;i<=200;i++){
        for(int j=2;j < sqrt(i+1);j++){
            if(i%j==0){
                v[i]=1;
                break;
            }
        }
    }
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int x=0;
    for(int i=a;i<=b;i++){
        for(int j=c;j<=d;j++){
            if(v[i+j]==0){
                break;
            }
            if(j==d){
                x=1;
            }
        }

    }
    if(x){
        printf("Takahashi\n");
    }else{
        printf("Aoki\n");
    }

    
}
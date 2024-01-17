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
using namespace std;
using ll = long long int;


int main(){
    int M;
    ll K;
    
    cin >> M >> K;
    if(K>=pow(2,M)){
        printf("-1\n");
    }else{
        if(M==1){
            if(K==0)printf("0 0 1 1\n");
            else printf("-1\n");
        }else{

            for(ll i=0;i<pow(2,M);i++){
                if(i!=K)printf("%lld ",i);
            }
            printf("%lld ",K);
            for(ll i=pow(2,M)-1;i>=0;i--){
                if(i!=K)printf("%lld ",i);
            }
            printf("%lld\n", K);
        }
    }
}



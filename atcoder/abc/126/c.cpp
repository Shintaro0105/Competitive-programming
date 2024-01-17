#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <bitset>
using namespace std;
using ll = long long int;

int func(int x);
int K;
int main(){
    double N;
    cin >> N >> K;
    double ans=0;
    for(int i = 1;i<=N;i++){
        ans = ans + (1/N)*std::pow(0.5,func(i));
    }
    printf("%.10f\n", ans);
}

int func(int x){
    ll sum=x;
    int count=0;
    while(sum<K){
        sum = sum*2;
        count++;
    }
    return count;
}
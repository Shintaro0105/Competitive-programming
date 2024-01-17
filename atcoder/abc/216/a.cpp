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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    double x;cin>>x;
    int X;
    int Y;
    X=(int)x;
    Y=(x-X)*10;
    if(0<=Y&&Y<=2){
        cout<<X;
        cout<<'-'<<endl;
    }else if(3<=Y&&Y<=6){
        cout<<X<<endl;
    }else{
        cout<<X;
        cout<<'+'<<endl;
    }
    return 0;
}
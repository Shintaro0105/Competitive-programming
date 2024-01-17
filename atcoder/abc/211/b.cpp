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
    int flag[4];
    fill(flag,flag+4,0);
    for(int i=0;i<4;i++){
        string S;cin>>S;
        if(S=="H") flag[0]=1;
        else if(S=="2B") flag[1]=1;
        else if(S=="3B") flag[2]=1;
        else flag[3]=1;
    }
    bool A=true;
    rep(i,4){
        if(flag[i]!=1){
            A=false;
            break;
        }
    }
    if(A)printf("Yes\n");
    else printf("No\n");

}
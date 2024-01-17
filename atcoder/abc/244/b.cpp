#include <iostream>
#include <vector>
#include <set>
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
using P = pair<int,int>;


int main(){
    int n;string s;
    cin >> n >> s;
    int c=0;
    int x=0,y=0;
    rep(i,n){
        if(s[i]=='S'){
            if(c==0){
                x++;
            }else if(c==1){
                y--;
            }else if(c==2){
                x--;
            }else{
                y++;
            }
        }else{
            if(c==3){
                c=0;
            }else{
                c++;
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
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
    int count=0;
    vector<pair<int, int>> ball;
    rep(i,n){
        int a;cin>>a;
        count++;
        if(ball.empty() || ball.back().first != a){
            ball.emplace_back(a,1);
        }else{
            ball.back().second += 1;
            if(ball.back().second == a){
                count -= a;
                ball.pop_back();
            }
        }
        cout<<count<<endl;
    }
}
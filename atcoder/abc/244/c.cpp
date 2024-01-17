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
    int n;
    cin>>n;
    vector<bool> m(2*n+2,true);
    m[0]=false;
    rep(i,2*n+1){
        if(i%2==0){
            int k=1;
            while(1){
                if(m[k]){
                    cout<<k<<endl;
                    m[k]=false;
                    break;
                }else{
                    k++;
                }
            }
        }else{
            int l;cin>>l;
            m[l]=false;
        }
    }
    return 0;
}
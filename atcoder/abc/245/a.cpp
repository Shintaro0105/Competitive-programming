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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c){
        cout<<"Takahashi"<<endl;
    }else if(a==c){
        if(b<=d){
           cout<<"Takahashi"<<endl; 
        }else{
            cout<<"Aoki"<<endl;
        }
    }else{
        cout<<"Aoki"<<endl;
    }
    return 0;
}
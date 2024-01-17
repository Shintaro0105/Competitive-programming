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
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    ll d;
    d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    if(d==4||d==10||d==18||d==20||d==16||d==2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}
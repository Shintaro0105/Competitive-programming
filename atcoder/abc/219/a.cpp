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
    int x;
    cin>>x;
    if(0<=x&&x<40){
        cout<<40-x<<endl;
    }else if(40<=x&&x<70){
        cout<<70-x<<endl;
    }else if(70<=x&&x<90){
        cout<<90-x<<endl;
    }else{
        cout<<"expert"<<endl;
    }
    return 0;
}
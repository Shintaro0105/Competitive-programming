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
    int n,m;cin >> n >> m;
    int a=0,b=100000;
    for(int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        a = max(a,l);
        b = min(b,r);
    }
    if(b-a+1<0)printf("0\n");
    else cout << b-a+1 << endl;
    
}



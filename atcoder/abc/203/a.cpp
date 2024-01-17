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
    int a,b,c;cin>>a>>b>>c;
    if(a==b&&b==c)cout << a << endl;
    else if(a==b)cout << c << endl;
    else if(c==b)cout << a << endl;
    else if(a==c)cout << b << endl;
    else cout << 0<< endl;
}
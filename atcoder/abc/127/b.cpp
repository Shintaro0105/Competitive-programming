#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <bitset>
using namespace std;
using ll = long long int;
vector<int> x(10);
int main(){
    int r,d;cin >> r >> d >> x[0];
    for(int i =0;i<10;i++){
        x[i+1]=r*x[i]-d;
        cout << x[i+1] << endl;
    }
}



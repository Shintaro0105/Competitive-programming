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



int main(){
    int N,K;cin >> N >> K;
    string S;cin >> S;
    S[K-1] = S[K-1] + 32;
    cout << S << endl;
}



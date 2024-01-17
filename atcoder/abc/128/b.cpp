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
#include <utility>
using namespace std;
using ll = long long int;
vector <tuple<string, int, int>> A;

int main(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        string p1; int p2;cin >> p1 >> p2;
        p2=-p2;
        int p3=i+1;
        A.push_back(make_tuple(p1,p2,p3));
    }
    sort(A.begin(), A.end());
    for(int i=0;i<n;i++){
        cout << get<2>(A[i]) << endl;
    }
}
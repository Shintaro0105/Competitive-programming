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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    vector<bool> used(n - m + 1);
    queue<int> q;
    auto check = [&](int i) {
        if (used[i]) return;
        bool ok = true;
        for (int j = 0; j < m; j++) {
            ok &= (s[i + j] == '#' or s[i + j] == t[j]);
        }
        if (ok) {
            used[i] = true;
            q.push(i);
        }
    };
    for (int i = 0; i < n - m + 1; i++) check(i);
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < m; j++) s[i + j] = '#';
        for (int j = max(i - m + 1, 0); j <= min(i + m - 1, n - m); j++) {
            check(j);
        }
    }
    cout << (s == string(n, '#') ? "Yes" : "No") << endl;
    return 0;
}
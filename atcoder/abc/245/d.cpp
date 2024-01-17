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
    int n, m;
	cin >> n >> m;
	vector<int>a(n + 1), b(m + 1), c(n + m + 1);
	for (int i = 0; i <= n; i++)cin >> a[i];
	for (int i = 0; i <= n + m; i++)cin >> c[i];
	for (int i = m; i >= 0; i--) {
		b[i] = c[i + n] / a[n];
		for (int j = 0; j <= n; j++)c[i + j] -= b[i] * a[j];
	}
	for (int i = 0; i < m; i++)cout << b[i] << " ";
	cout << b[m] << endl;
    return 0;
}
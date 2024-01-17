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

int main() {
	int n;
	cin >> n;
	vector d(n, vector(n, 0));
	rep(i, n) {
		for(int j = i + 1; j < n; j++) cin >> d[i][j];
	}
	vector dp(1 << n, 0ll);
	rep(b, (1 << n) - 1) {
		int l = -1;
		rep(i, n) if(!(b >> i & 1)) {
			l = i;
			break;
		}
		rep(i, n) if(!(b >> i & 1)) {
			int nb = b | (1 << l) | (1 << i);
			dp[nb] = max(dp[nb], dp[b] + d[l][i]);
		}
	}
	cout << dp.back() << endl;
}
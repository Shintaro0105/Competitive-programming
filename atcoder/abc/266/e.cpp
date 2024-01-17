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
const int mod=998244353;
const int inf=1e9+1;

int main(){
	int n;
	cin>>n;
	double ans=3.5;
	for(int i=1;i<n;i++){
		double ans2=0;
		for(int d=1;d<=6;d++)ans2+=max(ans,(double)d)/6;
		ans=ans2;
	}
	printf("%.10f\n",ans);
    return 0;
}
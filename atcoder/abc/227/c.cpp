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
    long long n;
	scanf("%lld",&n);
	long long ans=0;
	for(long long a=1;a*a*a<=n;a++){
		for(long long b=a;a*b*b<=n;b++){
			ans+=n/a/b-b+1;
		}
	}
	printf("%lld\n",ans);
    return 0;
}
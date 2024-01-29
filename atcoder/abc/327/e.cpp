#include <bits/stdc++.h>
using namespace std;
int main(void){
	const double c=0.9;
	int n;
	cin>>n;
	vector<double>p(n);
	vector<double>dp(n+1,0);
	double w,ans=-1200.0;
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n;i++){
		dp[i+1]=c*dp[i]+p[i];
		for(int j=i-1;j>=0;j--){
			dp[j+1]=max(c*dp[j]+p[i],dp[j+1]);
		}
	}
	w=0.0;
	for(int i=1;i<=n;i++){
		w=c*w+1.0;
		ans=max(ans,dp[i]/w-1200.0/sqrt((double)i));
	}
	cout<< std::fixed << std::setprecision(10) <<ans<<endl;
	return 0;
}

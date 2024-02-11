#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,ans=0;
	cin>>n;
	vector<int>a(n+2);
	vector<int>m1(n);
	vector<int>m2(n);
	for(int i=0;i<n;i++)cin>>a[i+1];

	m1[0]=min(a[0],a[1]-1);
	for(int i=1;i<n;i++)m1[i]=min(m1[i-1],a[i+1]-i-1);
	m2[n-1]=a[n+1]+n+1;
	for(int i=n-2;i>=0;i--)m2[i]=min(m2[i+1],a[i+2]+i+2);
	for(int i=0;i<n;i++)ans=max(ans,min(m1[i]+i+1,m2[i]-i-1));
	
	cout<<ans<<endl;
	return 0;
}

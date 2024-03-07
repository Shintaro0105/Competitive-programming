#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector t(n,vector<int>(n));
    rep(i,n)rep(j,n)cin>>t[i][j];
    vector<int> p(n-1);
    rep(i,n-1)p[i]=i;
    int ans=0;
    do{
        int sum=t[0][p[0]+1];
        rep(i,n-2){
            sum+=t[p[i]+1][p[i+1]+1];
        }
        sum+=t[p[n-2]+1][0];
        //cout<<sum<<endl;
        if(sum==k)ans++;
    }while(next_permutation(ALL(p)));
    cout<<ans<<endl;
    return 0;
}
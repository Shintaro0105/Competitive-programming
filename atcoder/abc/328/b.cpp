#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<pair<int,int>,int> mp;
    for(int i=1;i<=9;i++){
        mp[make_pair(i,i)]++;
        mp[make_pair(i,i*10+i)]++;
        mp[make_pair(i*10+i,i)]++;
        mp[make_pair(i*10+i,i*10+i)]++;
    }
    int n;cin>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++)cin>>d[i];
    int ans=0;
    for(int m=1;m<=n;m++){
        for(int day=1;day<=d[m-1];day++){
            if(mp.count(make_pair(m,day))){
                ans++;
                //cout<<m<<' '<<day<<endl;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
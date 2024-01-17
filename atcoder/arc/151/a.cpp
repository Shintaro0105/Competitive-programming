#include <iostream>
#include <vector>
#include <queue>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int cnt=0;
    queue<int> s0,s1;
    vector<int> ans(n);
    rep(i,n){
        int a,b;
        a=s[i]-'0';
        b=t[i]-'0';
      	//cout<<a<<' '<<b<<endl;
        if(a^b==1){
            cnt++;
            if(a==1){
                s1.push(i);    
            }else{
                s0.push(i);
            }
        }else{
            ans[i]=0;
        }
    }
    if(cnt%2!=0){
        cout<<-1<<endl;
        return 0;
    }else{
        while(s1.size()>0&&s0.size()>0){
            int a=s1.front(),b=s0.front();
            s1.pop();
          	s0.pop();
            ans[a]=0;
            ans[b]=0;
          	//cout<<a<<endl;
        }
        if(s0.size()>0){
            int l=s0.size();
            rep(i,l/2){
                int a=s0.front();
                s0.pop();
                ans[a]=0;
              	//cout<<a<<endl;
            }
            rep(i,l/2){
                int a=s0.front();
                s0.pop();
                ans[a]=1;
              	//cout<<a<<endl;
            }
        }else if(s1.size()>0){
            int l=s1.size();
            rep(i,l/2){
                int a=s1.front();
                s1.pop();
                ans[a]=0;
            }
            rep(i,l/2){
                int a=s1.front();
                s1.pop();
                ans[a]=1;
            }
        }
    }
    rep(i,n-1)cout<<ans[i];
    cout<<ans[n-1]<<endl;
    return 0;
}
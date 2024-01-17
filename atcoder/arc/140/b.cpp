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
    int n;cin>>n;
    string s;cin>>s;
    vector<int> a;
    rep(i,n){
        if(i+2<n){
            if(s[i]=='A'){
                if(s[i+1]=='R'){
                    if(s[i+2]=='C'){
                        a.push_back(i);
                        i+=2;
                        //cout<<i<<endl;
                    }
                }
            }
        }
    }
    vector<int> p;
    for(int b:a){
        int i=b,j=b+2,cnt=1;
        while(1){
            if(i-1>=0&&j+1<n){
                if(s[i-1]=='A'&&s[j+1]=='C'){
                    cnt++;
                    i--;
                    j++;
                }else {
                    break;
                }
            }else {
                break;
            }
        }
        p.push_back(cnt);

        //cout<<b<<' '<<cnt<<endl;
    }
    int c=0,l=p.size();
    for(int i:p)c+=i;
    int ans=min(2*l,c);
    cout<< ans <<endl;
    return 0;
}
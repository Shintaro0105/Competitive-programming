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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    vector<int> v(9);
    rep(i,9)v[i]=i;
    vector c(3,vector<int>(3));
    rep(i,3)rep(j,3)cin>>c[i][j];
    double sum=0;
    do{
        vector<int> row(3,0),col(3,0),d(2,0);
        vector seen(3,vector<bool>(3,false));
        bool flag=true;
        for(int n:v){
            int i=n/3,j=n%3;
            seen[i][j]=true;
            row[i]++;
            if(row[i]==2){
                bool f=true;
                int l;
                rep(k,3){
                    if(seen[i][k]&&f){
                        l=k;
                        f=false;
                    }else if(seen[i][k]&&!f){
                        if(c[i][l]==c[i][k]){
                            flag=false;
                        }
                    }
                }
                
            }
            col[j]++;
            if(col[j]==2){
                bool f=true;
                int l;
                rep(k,3){
                    if(seen[k][j]&&f){
                        l=k;
                        f=false;
                    }else if(seen[k][j]&&!f){
                        if(c[l][j]==c[k][j]){
                            flag=false;
                        }
                    }
                }
                
            }
            if(i==j){
                d[0]++;
            }
            if(d[0]==2){
                bool f=true;
                int l;
                rep(k,3){
                    if(seen[k][k]&&f){
                        l=k;
                        f=false;
                    }else if(seen[k][k]&&!f){
                        if(c[l][l]==c[k][k]){
                            flag=false;
                        }
                    }
                }
                
            }
            if(i==2-j){
                d[1]++;
            }
            if(d[1]==2){
                bool f=true;
                int l;
                rep(k,3){
                    if(seen[k][2-k]&&f){
                        l=k;
                        f=false;
                    }else if(seen[k][2-k]&&!f){
                        if(c[l][2-l]==c[k][2-k]){
                            flag=false;
                        }
                    }
                }
                
            }
        }
        if(flag)sum++;
    }while(next_permutation(ALL(v)));
    cout << fixed << setprecision(15) << sum/362880.0 << endl;
    return 0;
}
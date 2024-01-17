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

int main(){
    int n;
    cin>>n;
    char s[n][n],t[4][n][n];
    rep(i,n)rep(j,n)cin>>s[i][j];
    rep(i,n)rep(j,n){
        char c;
        cin>>c;
        t[0][i][j]=c;
        t[1][n-1-j][i]=c;
        t[2][n-1-i][n-1-j]=c;
        t[3][j][n-1-i]=c;
    }
    int l,r;
    bool flag=false;
    rep(i,n)rep(j,n){
        if(s[i][j]=='#'&&!flag){
            l=i;
            flag=true;
        }
    }
    flag=false;
    rep(j,n)rep(i,n){
        if(s[i][j]=='#'&&!flag){
            r=j;
            flag=true;
        }
    }
    char a[n][n];
    rep(i,n)rep(j,n){
        if(l+i<n&&r+j<n){
            a[i][j]=s[i+l][j+r];
        }else{
            a[i][j]='.';
        }
    }
    rep(i,n)rep(j,n)s[i][j]=a[i][j];
    bool b=false;
    rep(k,4){
        bool flag=false;
        rep(i,n)rep(j,n){
            if(t[k][i][j]=='#'&&!flag){
                l=i;
                flag=true;
            }
        }
        flag=false;
        rep(j,n)rep(i,n){
            if(t[k][i][j]=='#'&&!flag){
                r=j;
                flag=true;
            }
        }
        char a[n][n];
        rep(i,n)rep(j,n){
            if(l+i<n&&r+j<n){
                a[i][j]=t[k][i+l][j+r];
            }else{
                a[i][j]='.';
            }
        }
        bool c=true;
        rep(i,n)rep(j,n){
            if(s[i][j]==a[i][j]&&c){
                c=true;
            }else{
                c=false;
            }
        }
        if(c)b=true;
    }
    if(b){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    //cout<<l<<' '<<r<<endl;
    /* rep(i,n){
        rep(j,n){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl; */
    /* rep(k,4){
        rep(i,n){
            rep(j,n){
                cout<<t[k][i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    } */

    return 0;
}
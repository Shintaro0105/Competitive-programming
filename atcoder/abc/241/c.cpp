#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
char maze[1000][1000];
int n;

int f(int x,int y){
    bool a=false;
    int p1=2;
    if(y<=n-6){
        rep(i,6){
            if(maze[x][y+i]=='.'){
                p1--;
            }
            if(i==5){
                if(p1>=0){
                    a=true;
                }
            }
        }
    }

    p1=2;
    if(x<=n-6&&y<=n-6){
        rep(i,6){
            if(maze[x+i][y+i]=='.'){
                p1--;
            }
            if(i==5){
                if(p1>=0){
                    a=true;
                }
            }
        }
    }
    p1=2;
    if(x<=n-6&&y<=n-6){
        rep(i,6){
            if(maze[x+i][y+5-i]=='.'){
                p1--;
            }
            if(i==5){
                if(p1>=0){
                    a=true;
                }
            }
        }
    }
    p1=2;
    if(x<=n-6){
        rep(i,6){
            if(maze[x+i][y]=='.'){
                p1--;
            }
            if(i==5){
                if(p1>=0){
                    a=true;
                }
            }
        }
    }
    
    if(a){
        return 1;
    }else{
        return -1;
    }
}

int main(){
    cin>>n;
    
    rep(i,n){
        string S;cin>>S;
        rep(j,n){
            maze[i][j] = S[j];
        }

    }

    bool a=false;
    rep(i,n){
        rep(j,n){
            if(f(i,j)==1){
                a=true;
            }
        }
    }
    if(a){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
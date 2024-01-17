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


int main(){
    int n, m;cin>>n>>m;
    int A[n];
    rep(i,n){
        int a;cin>>a;
        A[i]=a;
    }
    rep(i,m){
        int b;cin>>b;
        int x;
        x = find(A, A+n, b) - A;
        if(x!=n){
            A[x]=0;
            if(i==m-1){
                cout<<"Yes"<<endl;
            }
        }else{
            cout<<"No"<<endl;
            break;

        }
    }
    return 0;
}
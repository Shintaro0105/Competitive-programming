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
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    rep(i,n){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int i=0;
    while(k){
        int b=a[i]/x;
        if(k>=b){
            a[i]-=b*x;
            k-=b;
        }else{
            a[i]-=k*x;
            k=0;
        }
        i++;
        if(i==n){
            break;
        }
    }
    sort(a,a+n);
    /* rep(i,n){
        cout<<a[i]<<' ';
    } */
    if(k!=0){
        for(int i=n-1;i>=0;i--){
            a[i]=0;
            k--;
            if(k==0){
                break;
            }
        }
    }
    
    ll sum=0;
    rep(i,n){
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}
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
    int n;cin>>n;
    vector<int> a;
    int tot=0;
    int k=0;
    rep(i,n){
        int b;
        cin>>b;
        a.push_back(b);
        if(k+1>=a[k]){
            int j;
            if(a[k-a[k]+1]==a[k]&&a[k-1]==a[k]){
                for(j=k;j>=0;j--){
                    if(a[j]!=a[k]){
                        break;
                    }
                }
                if(k-j==a[k]){
                    tot=a[k];

                    rep(l,tot){
                        a.pop_back();
                    }
                    k=k-tot;
                }
            }
            
            
        }
        k++;
        cout<<k<<endl;
        
    }
}
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
using namespace std;
using ll = long long int;

//TLE
/*int main(){
    int A[100000];

    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> A[i];
        
    }

    for(int i=0;i<m;i++){
        int b;
        ll c;
        cin >> b >> c;
        sort(A,A+n);//毎回計算量O(nlog n)
        for(int j=0;j<b;j++){
            if(A[j]<c) A[j]=c;
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans = ans + A[i];
    }
    cout << ans << endl;
}*/

//優先度付きキューで計算量O(log要素数）を実現
int main(){
    priority_queue<pair<int,int>> Q;
    int A[100000],B[100000],C[100000];
    ll ans=0;
    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> A[i];
        Q.push(make_pair(A[i],1));
    }
    for(int i=0;i<m;i++){
        cin >> B[i] >> C[i];
        Q.push(make_pair(C[i],B[i]));
    }
    for(int i=0;i<n;i++){
        auto p = Q.top();
        Q.pop();
        ans+=p.first;
        if(p.second>1){
            p.second--;
            Q.push(p);
        }

    }
    cout << ans << endl;
}

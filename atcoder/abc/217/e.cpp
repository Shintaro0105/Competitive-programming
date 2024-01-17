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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;


int main(){
    int Q;cin>>Q;
    priority_queue<int,vector<int>,greater<int>> pq;
    queue<int> q;
    rep(qi,Q){
        int c;
        cin>>c;
        if(c==1){
            int x;
            cin>>x;
            q.push(x);
        }else if(c==2){
            if(pq.size()){
                cout<<pq.top()<<endl;
                pq.pop();
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }else{
            while(q.size()){
                pq.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}
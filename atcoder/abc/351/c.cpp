#include <iostream>
#include <vector>
#include <stack>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    stack<int> s;
    rep(i,n){
        s.push(a[i]);
        while(s.size()>=2){
            int b=s.top();s.pop();
            int c=s.top();s.pop();
            if(b==c){
                s.push(b+1);
            }else{
                s.push(c);
                s.push(b);
                break;
            }
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
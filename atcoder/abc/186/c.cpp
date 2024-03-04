#include <iostream>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> ans;
    for(int i=1;i<=n;i++){
        int k=i;
        bool flag=true;
        while(k>0){
            if(k%10==7){
                flag=false;
                break;
            }
            k/=10;
        }
        k=i;
        while(k>0){
            if(k%8==7){
                flag=false;
                break;
            }
            k/=8;
        }
        if(flag)ans.insert(i);
    }
    cout<<ans.size()<<endl;
    return 0;
}
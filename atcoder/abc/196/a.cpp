#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=-10000;
    for(int x=a;x<=b;x++){
        for(int y=c;y<=d;y++){
            ans=max(ans,x-y);
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<bool> ok(1000,false);
    for(int i=100;i<=919;i++){
        if(((int)(i/100))*(((int)(i/10))%10)==i%10)ok[i]=true;
    }
    while(1){
        if(ok[n]){
            cout<<n<<endl;
            break;
        }else{
            n++;
        }
    }
    return 0;
}
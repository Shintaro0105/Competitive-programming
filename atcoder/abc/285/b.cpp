#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    for(int i=1;i<n;i++){
        int k=0;
        while(1){
            if(k+i<n){
                if(s[k]!=s[k+i])k++;
                else break;
            }else{
                break;
            }
        }
        cout<<k<<'\n';
    }
    return 0;
}
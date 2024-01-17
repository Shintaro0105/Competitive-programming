#include <iostream>
using namespace std;

int main(){
    int k;cin>>k;
    string s;
    for(int i=0;i<k;i++){
        char c='A'+i;
        s+=c;
    }
    cout<<s<<endl;
    return 0;
}
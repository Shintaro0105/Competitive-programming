#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;
    s+='L';
    while(n!=0){
        s+='o';
        n--;
    }
    s+="ng";
    cout<<s<<endl;
}
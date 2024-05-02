#include <iostream>
using namespace std;

int main() {
    string s;cin>>s;
    string t;
    for(int i=0;i<3;i++){
        t+=s[i];
    }
    int n=0;
    for(int i=3;i<6;i++){
        n*=10;
        n+=s[i]-'0';
    }
    //cout<<t<<' '<<n<<endl;
    if(t=="ABC"&&0<n&&n<=349&&n!=316){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
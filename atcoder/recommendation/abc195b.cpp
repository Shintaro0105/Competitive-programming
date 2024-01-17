#include <iostream>
using namespace std;

int main(){
    double a,b,w;
    cin>>a>>b>>w;
    w*=1000;
    bool ok=false;
    int ma=-1,mi=1e6+1;
    for(int i=1;i<1e6+1;i++){
        double W=w/(double)i;
        if(a<=W&&W<=b){
            ok=true;
            ma=max(ma,i);
            mi=min(mi,i);
        }
    }
    if(ok){
        cout<<mi<<' '<<ma<<endl;;
    }else{
        cout<<"UNSATISFIABLE"<<endl;
    }
}
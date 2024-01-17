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
#include <bitset>
#include <deque>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    bool flaga=true,flagb=true;
    double a,b;
    int c;
    cin>>a>>b>>c;
    if(a<0){
        flaga=false;
        a=abs(a);
    }
    if(b<0){
        flagb=false;
        b=abs(b);
    }
    /* long double A,B;
    if(a==0)A=-1000000000;
    else A = log10(a);
    if(b==0)B=-1000000000;
    else B = log10(b); */
    
    
    long double x=a,y=b;
    if(c%2==0){
        if(x<y)cout<<"<"<<endl;
        else if(x==y)cout<<"="<<endl;
        else cout<<">"<<endl;
    }else{
        if(!flaga)x*=-1;
        if(!flagb)y*=-1;
        if(x<y)cout<<"<"<<endl;
        else if(x==y)cout<<"="<<endl;
        else cout<<">"<<endl;
    }


}
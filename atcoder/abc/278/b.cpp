#include <iostream>
using namespace std;

bool f(int h,int m){
    int a=h/10,b=h%10,c=m/10,d=m%10;
    int x=a*10+c,y=b*10+d;
    if(0<=x&&x<=23&&0<=y&&y<=59){
        return true;
    }else{
        return false;
    }
}

int main(){
    int h,m;cin>>h>>m;
    while(1){
        if(f(h,m)){
            cout<<h<<' '<<m<<endl;
            return 0;
        }else{
            m++;
            if(m==60){
                m=0;
                h++;
                if(h==24){
                    h=0;
                }
            }
        }
    }
    return 0;
}
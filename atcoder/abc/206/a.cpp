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
   int n;cin>>n;
   int v=n*108/100;
   if(v<206){
       cout<<"Yay!"<<endl;
   }else if(v==206){
       cout<<"so-so"<<endl;
   }else{
       cout<<":("<<endl;
   }

}
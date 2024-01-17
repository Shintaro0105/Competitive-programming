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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    string s;int k;
    cin>>s>>k;
    int t=s.size();
    char a[t];
    rep(i,t){
        a[i]=s[i];
    }
    sort(a,a+t);
    int j=0;
    do{
        j++;
        if(j==k)break;
    }while(next_permutation(a,a+t));
    rep(i,t){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
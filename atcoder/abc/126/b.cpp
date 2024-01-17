#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <bitset>
using namespace std;
using ll = long long int;

int main(){
    int S;cin >> S;
    int a,b;
    a = S/100;
    b = S%100;
    if(!(1<=a && a<=12) && (1<=b && b<=12)) printf("YYMM");
    else if(!(1<=b && b<=12) && (1<=a && a<=12)) printf("MMYY");
    else if(1<=b && b<=12 && 1<=a && a<=12) printf("AMBIGUOUS");
    else  printf("NA");
    
}



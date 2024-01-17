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
    int a,b;cin >> a >> b;
    if(a<=5)printf("0\n");
    else if(6<=a&&a<=12)printf("%d\n",b/2);
    else printf("%d\n",b);
}



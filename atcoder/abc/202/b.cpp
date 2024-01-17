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
using namespace std;
using ll = long long int;

int main(){
    string s;cin >> s;
    reverse(s.begin(), s.end());
    for (int i=0;i<s.size();i++){
        if(s[i]=='6')s[i]='9';
        else if(s[i]=='9')s[i]='6';
    }
    cout << s << endl;
}
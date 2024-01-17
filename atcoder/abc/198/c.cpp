#include <iostream>
#include <cmath>
using ll = long long int;
using namespace std;

int main(){
    double r,x,y;
    cin>>r>>x>>y;
    double k = sqrt(pow(x,2)+pow(y,2));
    int ans = ceil(k/r);
    if (ans == 1 && k != r) ans++;
    cout<<ans<<endl;
    return 0;
}
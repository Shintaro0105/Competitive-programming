#include <iostream>
using namespace std;

int main() {
    int x;cin>>x;
    cout<<(int)(x/500)*1000+(int)((x%500)/5)*5<<endl;
}
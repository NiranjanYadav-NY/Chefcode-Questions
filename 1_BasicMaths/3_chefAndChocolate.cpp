#include <iostream>
using namespace std;
int main(){

    int x, y, z;
    cin>>x>>y>>z;

    int m;
    m = (x*5)+(y*10);
    int max_choco;

    max_choco = m/z;
    cout<<max_choco;

    return 0;
}
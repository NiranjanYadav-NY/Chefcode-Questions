#include <iostream>
using namespace std;
int main(){

    int A, B;
    cin>> A>>B;

    int remainder;
    remainder = A%B;

    if(B>A){
        cout<<"error!"<<endl;
    }
    else{
    cout<<remainder<<endl;
    }
    return 0;
}
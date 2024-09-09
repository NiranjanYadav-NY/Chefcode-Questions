#include <iostream>
using namespace std;
int main(){

    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    
    int max;
    max = n1;

    if( n2> n1){
        max = n2;
    }
    
    if( n3>n1 ){
        max = n3;
    }

    cout << "MAXIMUM NUMBER IS : " << max;
    cout<<endl;

    int max_2 = n1;
     if(max != n2 &&   n2 > n1){
         max_2 = n2;
     }

     if (max != n3 && n3 > n2)
    {
        max_2 = n3;
    }
    
    if (max != n2 && n2 > n3){
        max_2 = n2;
    }

    cout<<"SECOND MAX : "<< max_2<<endl;
    return 0;
}
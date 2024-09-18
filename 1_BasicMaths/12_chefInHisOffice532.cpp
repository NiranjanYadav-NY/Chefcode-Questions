#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t ;
    cin>>t;
    
    while(t--){
        
        int x; // working hrs(monday-thursday)
        int y; // friday working hrs (Y<X)
        
        cin>>x>>y;
        
        cout<<(x*4)+y<<endl;
        
    }
    return 0;
}

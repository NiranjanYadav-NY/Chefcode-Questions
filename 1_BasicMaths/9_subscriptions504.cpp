#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n; // no. of friends
        int x; // total costing of tv
        
        cin>>n>>x;
        
        if(n<=6){
            cout<<x<<endl;
        }
        
        else if(n>6 && n%6==0){
            cout<<(n/6) * x;
            cout<<endl;
            
        }
        
        
        else if(n>6 && n%6!=0){
           int money = (n/6)+1;
          cout<<money*x<<endl;
        }
        
    }
    return 0;
}

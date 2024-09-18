#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int x; // schhols
	    int y; // students
	    int z; // passsed exams
	    
	    cin>>x>>y>>z;
	    
	    if((y*x)/2 < z){
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
    return 0;
}

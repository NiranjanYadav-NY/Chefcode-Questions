#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int sum = 0;
	    
	    while(n>0){
	        int l_dig = n%10;
	        n/=10;
	        sum+=l_dig;
	    }
	    cout<<sum<<endl;
	}
    return 0;
}

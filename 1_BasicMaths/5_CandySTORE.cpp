#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        if ( x >= y)
        {
            cout<<y<<endl;
        }
        
        if(y>x)
        {
            int m = y-x;
            cout<<x+(2*m)<<endl;
        }
        
    }
	
    return 0;
}

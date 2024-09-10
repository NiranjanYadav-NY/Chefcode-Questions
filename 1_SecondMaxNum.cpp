#include <bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin>>N;

    while(N--){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int max1;
    int ans;
        if(n1>=n2 && n1>=n3)
        {
            max1=n1;
        }
        else if(n2>=n1 && n2>=n3)
        {
            max1=n2;
        }
        else
        {
            max1=n3;
        }
        
        if(max1==n1)
        {
            ans=max(n2,n3);
        }
        else if(max1==n2)
        {
            ans=max(n1,n3);
        }
        else
        {
            ans=max(n1,n2);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
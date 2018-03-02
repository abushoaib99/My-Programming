#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{
    int t, n, q, s, tp, u;

    cin>>t;
    while(t--){
        s=1000000;
        cin>>n>>q;
        for(int i=0; i<n; i++){
            cin>>tp;
            if(tp<s)
                s=tp;
            ar[i]=s;
        }
        while(q--){
            cin>>u;
            cout<<ar[u-1]<<endl;
        }
    }
}

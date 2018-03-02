#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,c=0,t=0,t1=0,a[100],j;
    cin>>n;
    if(n==2)
    {
        cout<<n-1<<endl<<n<<endl;
    }
    else if(n==3)
    {
        cout<<n-1<<endl;
        cout<<n-2<<" "<<n-1<<endl;
    }
    else
    {
        c=0,j=0;
            for(int i=1;i<n;i++){
             t=t+i;
        if(t>n){
            c--;
            break;
        }
        else{
            j++;;
           t1=t1+i;
            a[c++]=i;
        }
        }
    cout<<c+1<<endl;
    for(int i=0;i<c;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<(n-(t1-j))<<endl;
    }
    return 0;
}


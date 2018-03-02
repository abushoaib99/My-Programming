#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output1.txt","w",stdout);
    int n,m;
    long long v,v1;
    cin>>n;
    vector<long long>h1,h2;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        h1.push_back(v);
    }
    sort(h1.begin(),h1.end());
    cin>>m;
    long long q[m+3];
    for(int i=0;i<m;i++)
    {
        cin>>q[i];
    }
    int c=0;
        for(int j=0;j<n;j++)
        {
            if(h1[0]!=h1[j+1])
            {
                v1=h1[j];
                h2.push_back(v1);
                c++;
                h1[0]=h1[j+1];
            }
        }
    if(c==1)
        cout<<"X"<<" "<<"X"<<endl;
    else if(n==1)
    {
        if(q[0]==h1[0])
        {
            cout<<"X"<<" "<<"X"<<endl;
        }
        else if(q[0]>h1[0])
        {
            cout<<h1[0]<<" "<<"X"<<endl;
        }
        else
        {
            cout<<"X"<<" "<<h1[0]<<endl;
        }
    }
    else
    {
    int j=0,k,high,low,mid,loc;
    low=0;loc=0;high=c-1;
    k=c-1;
    while(low<=high && j!=m)
    {
        if(high==1 && c!=2)
            high=2;
        mid=(low+high)/2;
        if(q[j]==h2[mid] && mid!=0 && q[j]!=h2[mid+1] && q[j]!=h2[mid-1])
        {
            cout<<h2[mid-1]<<" "<<h2[mid+1]<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        else if(q[j]==h2[mid] && q[j]==h2[mid-1] && q[j]==h2[mid+1])
        {
            cout<<"X"<<" "<<"X"<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        else if(q[j]==h2[k])
        {
            cout<<h2[k-1]<<" "<<"X"<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        if(q[j]>h2[k])
        {
            cout<<h2[k]<<" "<<"X"<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        else if(q[j]==h2[loc])
        {
            cout<<"X"<<" "<<h2[loc+1]<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        else if(q[j]<h2[loc])
        {
            cout<<"X"<<" "<<h2[loc]<<endl;
            j++;
            low=0;high=c-1;
            continue;
        }
        else if(q[j]<h2[mid])
        {
            high=mid-1;
            if(q[j]<h2[mid] && q[j]>h2[mid-1])
            {
                cout<<h2[mid-1]<<" "<<h2[mid]<<endl;
                j++;
                low=0;high=c-1;
                continue;
            }
        }
        else
        {
            low=mid+1;
            if(q[j]<h2[mid] && q[j]>h2[mid+1])
            {
                cout<<h2[mid]<<" "<<h2[mid+1];
                j++;
                low=0;high=c-1;
                continue;
            }
        }
    }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int parentArray[5009],arr[5009],maxi=1;
void makeset(int n)
{
    for(int i=0;i<n;++i)
    {
        parentArray[i]=i;
        arr[i]=1;
    }
}

int find_set(int x)
{
    return (x==parentArray[x])? x : find_set(parentArray[x]);
}

void Union(int x,int y)
{
    int X,Y;
    X=find_set(x);
    Y=find_set(y);
    if(X==Y)
        return;
    else
    {
        parentArray[Y]=X;
        arr[X]=arr[X]+arr[Y];
        if(maxi<arr[X])
            maxi=arr[X];
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    map<string,int>m;
    int a,b,x,y;
    string s,s1,s2;
    while(scanf("%d%d",&a,&b)&&(a!=0 || b!=0))
        {
            makeset(a);
            for(int i=0;i<a;++i)
            {
                cin>>s;
                m[s]=i;
            }
            for(int i=0;i<b;++i)
            {
                cin>>s1>>s2;
                x=m[s1];
                y=m[s2];
                Union(x,y);
            }
            printf("%d\n",maxi);
            maxi=1;
            m.clear();
        }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long parentArray[200009],arr[200009];
void makeset(long long n)
{
    for(long long i=0;i<=n*2;++i)
    {
        parentArray[i]=i;
        arr[i]=1;
    }
}

long long find_set(long long x)
{
    return (x==parentArray[x])? x : find_set(parentArray[x]);
}

void Union(long long x,long long y)
{
    long long X,Y;
    X=find_set(x);
    Y=find_set(y);
    if(X!=Y)
    {
        parentArray[Y]=X;
        arr[X]+=arr[Y];
    }
    printf("%lld\n",arr[X]);
}

int main()
{
    long long a,b,x,y;
    string s1,s2;
    cin>>a;
    while(a--)
    {
        cin>>b;
        map<string,long long>m;
        makeset(b);
        for(long long i=0,j=1;i<b;++i)
        {
            cin>>s1>>s2;
            if(!m[s1]) //if(m.find(s1)==m.end()
            {
                m[s1]=j++;
            }
            if(!m[s2])
            {
                m[s2]=j++;
            }
            x=m[s1];
            y=m[s2];
            Union(x,y);
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
vector<string>v1,v2;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    string s;
    for(int i=0; i<a; i++)
    {
        cin>>s;
        v1.push_back(s);
    }
    for(int i=0; i<b; i++)
    {
        cin>>s;
        v2.push_back(s);
    }
    if(a>b)
        printf("YES\n");
    else if(a<b)
        printf("NO\n");
    else
    {
        int x=0;
        for(int i=0; i<a; i++)
        {
            if(binary_search(v2.begin(),v2.end(),v1[i]))
                x++;
        }

        if(!x)
            printf("NO\n");
        else if(x&1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a,b,c,d;
    int e,f,g,h;
    string s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        cin>>s;
        int cn[4];
        istringstream iss(s);
        string s1;
        int j=0;
        while(getline(iss,s1,'.'))
        {
            int sum=0;
            for(int k=s1.size()-1,l=0;k>=0;k--,l++)
            {

                if(s1[k]=='1')
                {
                    sum+=1<<l;
                }
            }
            cn[j++]=sum;
        }

        if(a==cn[0] && b==cn[1] && c==cn[2] && d==cn[3])
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}

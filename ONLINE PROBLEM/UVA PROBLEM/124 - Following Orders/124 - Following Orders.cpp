#include<bits/stdc++.h>
using namespace std;

int can[26],mapp[26][26],used[26];
char str[26];

void p_generate(int idx,int n)
{
    if(idx==n)
    {
        str[idx]='\0';
        puts(str);
        return;
    }
    int i,j;
    for(i=0;i<26;i++)
    {
        if(can[i]==1 && used[i]==0)
        {
            for(j=0;j<26;j++)
                if(mapp[i][j]==1 && used[j]==1)
                    return;
            used[i]=1;
            str[idx]=i+'a';
            p_generate(idx+1,n);
            used[i]=0;
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    stringstream sin;
    string line;
    char ch1,ch2;
    bool flag=false;
    while(getline(cin,line))
    {
        if(flag)
            puts("");
        flag=true;
        memset(can,0,sizeof(can));
        memset(mapp,0,sizeof(mapp));
        memset(used,0,sizeof(used));
        sin.clear();
        sin<<line;
        while(sin>>ch1){
            //cout<<ch1<<' '<<ch1-'a'<<endl;
            can[ch1-'a']=1;
        }
        int n=0;
        for(int i=0;i<26;i++)
            n+=can[i];
        getline(cin,line);
        sin.clear();
        sin<<line;
        while(sin>>ch1>>ch2){
                //cout<<ch1<<" "<<ch2<<endl;
            mapp[ch1-'a'][ch2-'a']=1;
        }
        p_generate(0,n);
    }
    return 0;
}

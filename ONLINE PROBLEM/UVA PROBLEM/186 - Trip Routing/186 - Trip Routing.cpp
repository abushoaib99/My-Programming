#include<bits/stdc++.h>
#define pi pair<int,int>
#define pii pair<string,pi>
#define mp make_pair
#define pb push_back
using namespace std;
vector<pii>v[510];
map<string,int>m;
int n;
string name[510];
int main()
{
    //freopen("input.txt","r",stdin);
    string s,s1,s2,s3,s4;
    string s5[10];
    int w;
    while(getline(cin,s) && s!="\0")
    {
        istringstream iss(s);
        string sub;
        int i=0;
        while(getline(iss,sub,','))
        {
            s5[i]=sub;
            s4=s5[i];
            i++;
        }
        w=atoi(s4.c_str());
        s1=s5[0],s2=s5[1],s3=s5[2];
        int &x=m[s1];
        int &y=m[s2];
        if(!x)
            x=++n;
        if(!y)
            y=++n;
        v[x].pb(mp(s3,mp(w,y)));
        v[y].pb(mp(s3,mp(w,x)));
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        name[it->second]=it->first;

    while(getline(cin,s) && s!="\0")
    {
        puts("\n");
        istringstream iss(s);
        string sub;
        int i=0,j;
        while(getline(iss,sub,','))
        {
            s5[i]=sub;
            i++;
        }
        s1=s5[0],s2=s5[1];
        i=m[s1],j=m[s2];
        int dist[510]={};
        bool inq[510]={};
        int prev[510];
        vector<pii>::iterator path[510];
        memset(dist,63,sizeof dist);
        queue<int>q;
        q.push(j);
        dist[j]=0;
        int u,vv,t;
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            inq[t]=false;
            vector<pii>::iterator it;
            for(it=v[t].begin();it!=v[t].end();it++)
            {
                u=it->second.second;
                vv=it->second.first;
                if(dist[u]>dist[t]+vv)
                {
                    dist[u]=dist[t]+vv;
                    prev[u]=t;
                    path[u]=it;
                    if(!inq[u])
                    {
                        inq[u]=true;
                        q.push(u);
                    }
                }
            }
        }
        puts("From                 To                   Route      Miles");
        puts("-------------------- -------------------- ---------- -----");
        int x=i,m=0;
        while(x!=j)
        {
            printf("%-20s %-20s %-10s %5d\n", name[x].c_str(), name[prev[x]].c_str(), (path[x]->first).c_str(), path[x]->second.first);
            x=prev[x];
        }
        puts("                                                     -----");
        printf("                                          Total       %4d\n", dist[i]);

    }
    return 0;
}

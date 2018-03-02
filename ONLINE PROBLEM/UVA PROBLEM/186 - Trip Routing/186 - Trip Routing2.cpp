#include <stdio.h>
#include <map>
#include <queue>
#include <iostream>
#include <string.h>
using namespace std;
struct E
{
    string route;
    int miles;
    int to;
    E(string a, int b, int c):
        route(a), miles(b), to(c) {}
};

vector<E> g[1005];
int main()
{
    //freopen("input.txt","r",stdin);
    char s[1005];
    map<string, int> R;
    string name[1005];
    int size = 0;
    while(gets(s)) {
        if(s[0] == '\0') break;
        char w1[50], w2[50], w3[50];
        int w1len = 0, w2len = 0, w3len = 0;
        int i, cost;
        for(i = 0; s[i] != ','; i++)
            w1[w1len++] = s[i];
        for(i++; s[i] != ','; i++)
            w2[w2len++] = s[i];
        for(i++; s[i] != ','; i++)
            w3[w3len++] = s[i];
        sscanf(s+i+1, "%d", &cost);
        w1[w1len] = w2[w2len] = w3[w3len] = '\0';

        int &x = R[w1];
        int &y = R[w2];
        if(x == 0)  x = ++size;
        if(y == 0)  y = ++size;
        g[x].push_back(E(w3, cost, y));
        g[y].push_back(E(w3, cost, x));
    }
    map<string,int>::iterator it;
    for(it = R.begin();it != R.end(); it++){
        name[it->second] = it->first;
    }
    while(gets(s))
    {
        puts("\n");//two blank
        char w1[50], w2[50];
        int w1len = 0, w2len = 0;
        int i, j, k;
        for(i = 0; s[i] != ','; i++)
            w1[w1len++] = s[i];
        for(i++; s[i] != ','; i++)
            w2[w2len++] = s[i];
        w1[w1len] = w2[w2len] = '\0';
        int st = R[w1], ed = R[w2];
        int dist[1005] = {}, inq[1005] = {};
        int prev[1005];
        vector<E>::iterator path[1005];
        memset(dist, 63, sizeof(dist));
        queue<int> Q;
        Q.push(ed);
        dist[ed] = 0;
        while(!Q.empty()) {
            int tn = Q.front();
            Q.pop();
            inq[tn] = 0;
            vector<E>::iterator it;
            for(it = g[tn].begin();it != g[tn].end(); it++)
            {
                if(dist[it->to] > dist[tn] + it->miles)
                {
                    dist[it->to] = dist[tn] + it->miles;
                    prev[it->to] = tn;
                    path[it->to] = it;
                    if(inq[it->to] == 0)
                    {
                        inq[it->to] = 1;
                        Q.push(it->to);
                    }
                }
            }
        }
        puts("From                 To                   Route      Miles");
        puts("-------------------- -------------------- ---------- -----");
        int x = st, mm = 0;
        while(x != ed) {
            printf("%-20s %-20s %-10s %5d\n", name[x].c_str(), name[prev[x]].c_str(), (path[x]->route).c_str(), path[x]->miles);
            x = prev[x];
        }
        puts("                                                     -----");
        printf("                                          Total       %4d\n", dist[st]);
    }
    return 0;
}


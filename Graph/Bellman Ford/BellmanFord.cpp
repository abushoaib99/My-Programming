#include <bits/stdc++.h>
#define MAXV 100000
#define INFTY 10000000
using namespace std;

vector< vector<int> > el;
vector<int> tmp(3);
int v, e, source, bestd[MAXV];

int main()
{
    //freopen("input.txt","r",stdin);
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        cin >> tmp[0] >> tmp[1] >> tmp[2];
        el.push_back(tmp);
    }
    for (int i = 0; i < MAXV; i++)
        bestd[i] = INFTY;
    bestd[1] = 0;
    // Bellman-Ford Algorithm
    for (int i = 1; i < v; i++)
        for (int j = 0; j < el.size(); j++)
            bestd[el[j][1]] = min(bestd[el[j][1]],bestd[el[j][0]] + el[j][2]);

    // Negative-cycle detection
    for (int i = 0; i < e; i++)
        if (bestd[el[i][1]] > bestd[el[i][0]] + el[i][2]) {
            cout << "Oh no, a negative cycle!" << endl;
            cout << "NONE" << endl;
            break;
        }
    // bestd[i] now contains the shortest distance from node 0 to i.
    cout<<endl;
    for (int i = 1; i <= v; i++)
        cout << i << " " << bestd[i] << endl;
    return 0;
}


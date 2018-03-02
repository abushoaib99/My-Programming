#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string n[5][5];
    for(int i=0;i<5;i++){
            for(int j=0;j<2;j++){
                cin>>n[i][j];
            }
    }
    for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
               cout<<n[i][j]<<endl;
            }
    }*/

    char s[10];
    gets(s);
    for(int j=0;j<strlen(s);j++)
    {
        if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' )
        cout<<s[j];
    }

}




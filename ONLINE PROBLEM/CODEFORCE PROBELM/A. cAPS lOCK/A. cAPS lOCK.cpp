#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[101];
	bool b=true;
	gets(s);
	for(int i=1;i<strlen(s);i++)
    {
        if(islower(s[i]))
        b=false;
    }
	if(b)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(islower(s[i]))
                s[i]=toupper(s[i]);
			else
			s[i]=tolower(s[i]);
        }
    }
	printf("%s\n",s);
	return 0;
}

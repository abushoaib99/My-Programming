#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
	cin>>s;
	int a=s.find("AB");
	int b=s.find("BA");
	int c=s.find("BA",a+2);
	int d=s.find("AB",b+2);
	if((a!=-1&&c!=-1)||(b!=-1&&d!=-1))
		printf("YES\n");
	else
        printf("NO\n");

	return 0;
}

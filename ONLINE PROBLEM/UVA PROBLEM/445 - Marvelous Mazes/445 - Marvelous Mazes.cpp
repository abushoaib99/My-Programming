#include<bits/stdc++.h>
int main()
{
  char ch;
  int i,sum=0;
  while(scanf("%c",&ch)!=EOF){
  if(isdigit(ch))
     sum+=ch-48;
  else{
     if(ch=='!')
        printf("\n");
     else if(ch=='\n')
        printf("\n");
     else if(ch=='b'){
        for(i=0;i<sum;i++)
         printf(" ");
     }
     else{
        for(i=0;i<sum;i++)
         printf("%c",ch);
     }
     sum=0;
  }
  }
return 0;
}

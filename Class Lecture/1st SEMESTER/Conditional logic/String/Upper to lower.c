#include<stdio.h>
int main()

{
    char line;
    while(scanf("%c",&line)!=EOF){
        if(islower(line))
            printf("%c",toupper(line));
        else
            printf("%c",toupper(line));
    }
    return 0;
}

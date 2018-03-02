#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("File 3.txt","w");
    fputs("I love my country",fp);
    fclose(fp);
    return 0;
}

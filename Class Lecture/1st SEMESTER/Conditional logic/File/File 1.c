#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f;
    f=fopen("File 1.txt","w");//file toiri korbe but kono lekha thakbe na
    fclose(f);
    return 0;

}

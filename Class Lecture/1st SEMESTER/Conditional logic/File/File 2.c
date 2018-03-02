#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("File 2.txt","w");//file toiri korbe
    fprintf(fp,"I live in Bangladesh");//file er vitor ei lekhata thakeb
    fclose(fp);
    return 0;
}

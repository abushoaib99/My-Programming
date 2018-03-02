#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1, *f2;
    char ch;
    f1 = fopen("Source.txt", "r");
    f2 = fopen("Append.txt", "a");
    if (f1 == NULL || f2==NULL)
    {
      puts("File Not Found");
      exit(0);
    }
    putc(' ',f2);
    while((ch=getc(f1))!=EOF)
    {
        putc(ch,f2);
    }
   fclose(f1);
   fclose(f2);
   return 0;
}

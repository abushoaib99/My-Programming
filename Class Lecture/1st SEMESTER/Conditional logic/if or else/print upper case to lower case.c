#include<stdio.h>
int main()

{
    char ch;
    printf("\nEnter Letter: ");
    ch=getchar();
    if(islower(ch)){
        printf("\nUpper case format: %c\n",toupper(ch));
        }
        else{
            printf("\nLower case format: %c\n",tolower(ch));
        }
        return 0;
}

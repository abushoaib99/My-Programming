#include<stdio.h>
int main()

{
    char text1[20],text2[20];
    scanf("%s %s",text1,text2);
    if(strcmp(text1,text2)==0){
        printf("\nThey are equal\n");
    }
    else{
        printf("\nThey are not equal\n");
    }
    return 0;
}

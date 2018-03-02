#include<stdio.h>
int main()

{
    char ch,ch1;
    scanf("%c",&ch);

    scanf("%c",&ch1);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("\n%c is vowel\n",ch);
    }
    else{
        printf("\n%c is consonant\n",ch);
    }

    scanf("%c",&ch1);
    if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u'){
        printf("\n%c is vowel\n",ch1);
    }
    else{
        printf("\n%c is consonant\n",ch1);
    }
    return 0;
}

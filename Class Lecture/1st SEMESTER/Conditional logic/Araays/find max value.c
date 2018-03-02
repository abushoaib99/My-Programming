#include<stdio.h>
int main()

{
    int i=1,loc=0,item;
    float value[4];
    do{
        printf("\nEnter value of i: ");
        scanf("%f",&value[i]);
        i++;
        while(i<=4);
        printf("\nEnter search item: ");
        scanf("%f",&item);
        for(i=1;i<=4;i++){
            if(item==value[i]){
                loc=i;
            }
            else if(loc!=0)
                printf("%d is the position of %f",loc,item);
        }
        else{
            printf("\nItem not found");
        }
    }
}

#include<stdio.h>
void linear()
{
    int size,i,j,search,v[100];
    printf("\nEnter size of elements: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&v[i]);
        }
        for(i=0;i<size;i++){
        printf("%4d",v[i]);
        }
        printf("\nEnter Search Item: ");
        scanf("%d",&search);
        for(i=0;i<size;i++){
            if(search==v[i]){
                printf("\n%d location is %d\n",search,i+1);
            break;
            }
        }
        if(v[i]!=search)
        printf("\n%d not find out in array\n",search);
}

void prime()
{
    int x,y,i,test=0,p;
    printf("\nEnter Number: ");
    scanf("%d",&p);
    for(i=2;i<=p/2;i++){
        if(p%i==0){
            test=1;
            break;
        }

        }
        if(test==0)
            printf("\n%d is prime number\n",p);
        else
            printf("\n%d Not a prime number\n",p);

}
void factorial()
{
    int x,y,i,sum=1;
    printf("\nEnter Number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        sum=sum*i;
    }
    printf("\nFactorial is %d\n",sum);
}

int main()
{
    int ch,s;
   while(ch!=4){
    printf("\nPress 1. Linear Search\nPress 2. Prime Number\nPress 3. Factorial\nPress 4. Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        linear();
        break;
    case 2:
        prime();
        break;
    case 3:
        factorial();
        break;
    case 4:
        break;
    default:
        printf("\nYou have Press Wrong option");
    }
    }

        return 0;
}

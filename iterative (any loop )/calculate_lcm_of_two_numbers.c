#include<stdio.h>
int main()
{
    int  a,b,max;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("The L.C.M of the numbers %d and %d is %d",a,b,max);
            break;
        }
        max++;
    }
    return 0;
}
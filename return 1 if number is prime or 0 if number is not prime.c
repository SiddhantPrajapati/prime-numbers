//WAP to create a function which is used to check number is prime or not function return 0 if number is not prime
// otherwise function should return 1.
#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
    int n,ans;
    printf("enter number:");
    scanf("%d",&n);
    ans=prime(n);
    ans=prime(n);
    if(ans==1)
    {
        printf("\n number is prime.");
    }
    else
        printf("\n number is  not prime.");
}
int prime(int n)
{
    int i,f;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
        else
            f=0;
    }
    if(f==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

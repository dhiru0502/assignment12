#include<stdio.h>
void reverse(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    reverse(N);
    return 0;
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}

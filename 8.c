#include<stdio.h>
void dtob(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    dtob(N);
    return 0;
}
void dtob(int n)
{
    if(n>0)
    {
        dtob(n/2);
        printf("%d ",n%2);
    }
}

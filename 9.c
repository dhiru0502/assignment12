#include<stdio.h>
void dtooct(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    dtooct(N);
    return 0;
}
void dtooct(int n)
{
    if(n>0)
    {
        dtooct(n/8);
        printf("%d",n%8);
    }
}

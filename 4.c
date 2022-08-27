#include<stdio.h>
void reverseodd(int);
int main()
{
    int N;
    printf("How many print reverse odd number: ");
    scanf("%d",&N);
    reverseodd(N);
    return 0;
}
void reverseodd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        reverseodd(n-1);

    }
}

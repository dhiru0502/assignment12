#include<stdio.h>
void printreverseN(int);
int main()
{
    int N;
    printf("How many print reverse natural number: ");
    scanf("%d",&N);
    printreverseN(N);
    return 0;
}
void printreverseN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        printreverseN(n-1);

    }
}

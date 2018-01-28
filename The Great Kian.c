#include<stdio.h>
int main()
{
    long int n;
    scanf("%d",&n);
    long long int arr[n];
    for(long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int num=0;
    for(long long i=0;i<n;i+=3)
    num+=arr[i];
    printf("%lld ",num);
    num=0;
    for(long long i=1;i<n;i+=3)
    num+=arr[i];
    printf("%lld ",num);
    num=0;
    for(long long i=2;i<n;i+=3)
    num+=arr[i];
    printf("%lld",num);
    return 0;
}

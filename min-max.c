#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(int i=gap;i<n;i+=1)
        {
            int temp=arr[i];
            int j;
            for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap)
            arr[j]=arr[j-gap];
            arr[j]=temp;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==(arr[i+1]-1)||arr[i]==arr[i+1])
        {
            x=1;
        }
        else
        {
            x=0;
            break;
        }
    }
    if(x==0)
    printf("NO");
    else
    printf("YES");
    return 0;
}

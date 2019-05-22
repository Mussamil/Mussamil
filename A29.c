#include<stdio.h>
void main()
{
    int arr[100],m,i,j,temp,mid;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    mid=m/2;
    printf("%d",arr[mid]);
    
    }

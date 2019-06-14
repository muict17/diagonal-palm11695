#include <stdio.h>
int main()
{
     
    int n,sum1=0,sum2=0,ans,i,j;
    scanf("%d",&n);

    int arr[n][n];
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        sum1+=arr[i][i];
    }
    j=n-1;
    for(i=0; i<n; i++)
    {
        sum2+=arr[i][j];
        j--;
    }
    ans=sum1-sum2;
    if(ans<0)
    {
        ans*=-1;
    }
    printf("%d",ans);
    return 0;
}
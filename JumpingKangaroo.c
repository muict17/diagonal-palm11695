#include <stdio.h>
int main()
{
    int x1,v1,x2,v2;
    char* output;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    for(int i=0; i<=10000; i++)
    {
        x1+=v1;
        x2+=v2;

        if(x1==x2)
        {
            output="YES";
            break;
        }
        else
        {
            output="NO";
        }
    }

    printf("%s",output);

    return 0;
}

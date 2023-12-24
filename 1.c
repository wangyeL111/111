#include <stdio.h>
int sum;
int ysh(int n)
{
    sum=0;
    int i;
    for (i = 1; i < n; i++)
    {
        int flag=0;
        if(n%i==0)
        {
            for (size_t j = i+1; j < n; j++){
                if(n%j==0){
                    flag=1;
                    break;
                }
            }
            printf("%d",i);
            if (flag)
            {
                printf("+");
            }
            sum+=i;

        }
    }
    
}
int main(){
    int sum1,sum2;
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d,,",x);
    ysh(x);
    sum1=sum;
    printf("=%d",sum1);
    printf("\n");
    printf("%d,",y);
    ysh(y);
    sum2=sum;
    printf("=%d",sum2);
    printf("\n");
    if (sum1==y&&sum2==x)
    {
        printf("1");
    }else printf("0");
        
    return 0;
}
#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
   int n,m,i=0;
   int max=100,min=1;
   srand(time(NULL));
   n=rand() % 100 + 1;
   do{
       printf("%d<目标数<%d哦！输入你猜的数字:",min,max);
       scanf("%d",&m);
       i++;
       if (m>n)
       {
           printf("您所猜的数字太大了!\n");
           max = m;
       }
       else if(m<n)
       {
           printf("您所猜的数字太小了!\n");
           min = m;
       }
   }while(m!=n);
    printf("回答正确!\n");
    printf("共猜测了%d次。\n",i);
    if(i<=5)
        printf("你太聪明了，这么快就猜出来了！\n");
    else if(i>5)
        printf("还需改进方法，以便更快猜出来！呵呵\n");
    return 0;
}

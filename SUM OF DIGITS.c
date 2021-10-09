
#include <stdio.h>

int main()
{
   int n,dig,sum=0,sum1=0;
   printf("ENTER THE NUMBER TO FIND SUM: ");
   scanf("%d",&n);
   label:
   while(n!=0)
   {
       dig = n%10;
       sum = sum + dig;
       n = n/10;
    }
   printf("the sum of the digit is %d\n",sum);
   while(sum>0)
   {
      dig = sum%10;
      sum1 = sum1 + dig;
      sum = sum/10;
       
   }
   printf("(single digit sum is %d)",sum1);
    return 0;
}
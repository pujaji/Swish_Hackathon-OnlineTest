#include<stdio.h>      
int main()
{
   int X,P;      //X is price of coffee and P is discount rate
   int total_amount=0;  //entire amount to pay  in order to get it as FREE
   scanf("%d%d",&X,&P);     
   P=100-P;          
   while(X>0)
   {
       total_amount= total_amount + X;
       X = (P*X)/100;
   }
   printf("%d\n",total_amount);
   return 0;
}

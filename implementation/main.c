#include<stdio.h>
int main()
{
   float x,y;
   char ch;
   printf("Enter initial amount\n");
   scanf("%f",&x);
   printf("Enter\n for credit\n for debit\n for balance\n");
   scanf("%c",&ch);
   switch(ch)
   {
     case 'c':
        printf("Enter credit amount\n");
        scanf("%f",&y);
        x=x+y;
        printf("New amount =%f",x);
        break;
        case 'd':
        printf("Enter debit amount\n");
        scanf("%f",&y);
        if(x>=y)
        {
          x=x-y;
          printf("New Amount = %f",x);
        }
        else
        {
        printf("Insufficient amount in your account");
        }
        break;
        case 'b':
        printf("Amount in your account = %f",x);
        break;
        default:
        printf("choose correct option for operation");
   }
   return 0;
}

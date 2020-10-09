#include<atmoperations.h>


void atm(char ch, float x)
{
    float y;
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
}

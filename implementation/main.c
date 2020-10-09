#include <atmoperations.h>

int main()

{

   float x;

   char ch;

   printf("Enter initial amount\n");

   scanf("%f",&x);

   printf("Enter\n for credit\n for debit\n for balance\n");

   scanf("%c",&ch);

   atm(ch,x);

   return 0;

}

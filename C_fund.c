/*#include <cs50.h>
#include <stdio.h>*/

int main(void)
{
   /* (Here we see a get_int function native to cs50) int n = get_int used to aquire int info("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }*/
   
    int n;
    do
    {
      n = get_int("Size");
    }
    while (n < 1);



        for (int i = 0; i < n; i++)
        {

                for (int j = 0; j < n; j++)
            {
            printf("#");
            }
            printf("\n");
        }




}

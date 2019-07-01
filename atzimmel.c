/*
 * Author: Adam Zimmel
 * Assignment: Weekend 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

  printf(
  "\n"
  "\n");

	int Number1 =  rand() % 1000 + 1;
	int Number2 =  rand() % 1000 + 1;

          printf("The first number is %d\n",Number1);         /* "<", "<=", ">", ">=", and "!="
                                                              *  This is here so I an remember all the operations.
                                                               */
          printf("The second number is %d\n",Number2 );
          printf(
 "\n"
 "\n");

          if( Number1 < Number2 ){
            printf("%d < %d: TRUE\n", Number1, Number2);
          }else{
            printf("%d < %d: FALSE\n", Number1, Number2);
          }

            if( Number1 <= Number2 ){
            printf("%d <= %d: TRUE\n", Number1, Number2);
          }else{
            printf("%d <= %d: FALSE\n", Number1, Number2);
          }

          if( Number1 > Number2 ){
            printf("%d > %d: TRUE\n", Number1, Number2);
          }else{
            printf("%d > %d: FALSE\n", Number1, Number2);
          }

          if( Number1 >= Number2 ){
            printf("%d >= %d: TRUE\n", Number1, Number2);
          }else{
            printf("%d >= %d: FALSE\n", Number1, Number2);
          }
          if( Number1 != Number2 ){
            printf("%d != %d: TRUE\n", Number1, Number2);
          }else{
            printf("%d != %d: FALSE\n", Number1, Number2);
          }

return 0;


}


#include <stdio.h>

int main() {
          
          int age ;
          float height ;

          printf( " What is your age :    " );
          scanf( "%d" , &age );

          printf( " What is your height :     " );
          scanf( "%f" , &height );
 
          printf(" My age is %d and my height is %.2f inches\n",age,height);
       
          return 0;
}


#include "another.h"

int main(void) {
   const float product1 = PHP * PYTHON;
   const float product2 = PHP * GCC;
   const float product3 = PYTHON * GCC;

   printf("The product of my PHP and Python versions is %f\n", product1);
   printf("The product of my PHP and GCC versions is %f\n", product2);
   printf("The product of my Python and GCC versions is %f\n", product3);

   return 0;
}

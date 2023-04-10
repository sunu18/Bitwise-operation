// C Program to demonstrate use of bitwise operators

#include <stdio.h>

int main()

{

// p = 5(00000101), q = 9(00001001)

unsigned char p = 5, q = 9;

// The result is 00000001

printf("p = %d, q = %d\n", p, q);

printf("p&q = %d\n", p & q);

// The result is 00001100

printf("p^q = %d\n", p ^ q);

// The result is 00001101

printf("p|q = %d\n", p | q);

// The result is 11111010

printf("~p = %d\n", p = ~p);

// The result is 00000100

printf("q>>1 = %d\n", q >> 1);

// The result is 00010010

printf("q<<1 = %d\n", q << 1);

return 0;

}

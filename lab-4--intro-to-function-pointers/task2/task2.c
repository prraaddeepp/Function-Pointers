#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int end (int a, int b);

typedef int (*OP) (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a, b;
	a = 6;
	b = 3;
	OP operators[5] = {&add, &subtract, &multiply, &divide, &end};
	char idx[3];
	while (1) {
		printf("Operand 'a' : %d | Operand 'b' : %d\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ", a, b);
		fgets(idx, 3, stdin);
		printf("X = %d\n", operators[(int)idx[0]-'0'](a, b));
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int end (int a, int b) { exit(0); }
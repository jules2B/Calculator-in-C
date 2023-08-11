#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main	(void) 
{
	int x; // first number.
	int y; // second number.
	int z; // result.  
	char sign; // calcul operator.

	x = 0;
	y = 0;

	printf ("\033[1;36mHello, Welcome to the 'C' calculator!\033[0m\n");
	printf ("Insert first number: ");
	scanf  ("%d", &x);
	printf ("Insert operator (\033[1;33m +,  -,  /,  *,  %%,\033[0m): ");
	scanf  (" %c", &sign);
	printf ("Insert second number: ");
	scanf  ("%d", &y);

	if (sign == '-')
	{
		z = x - y;
	}

	else if (sign == '+') 
	{
		z = x + y;
	}

	else if (sign == '/')
	{
		z = x / y;
	}
	else if (sign == '*')
	{
		z = x * y;
	}
	else if (sign == '%')
	{
		z = x % y;
	}	 
	else 
	{
		printf ("\033[1;31mInvalid operator\033[0m\\n"); // 'ANSI' (begin and end coloration) [1;31m == RED
		return (1);
	}	

	printf ("%d %c %d = %d\n", x, sign, y, z);

	for (int i = 0; i < 5; i++)  
	{
		printf ("\033[1;33m%d\033[0m", z);
		fflush (stdout);                   // Chech the display of my number.
		usleep (500000);                  // usleep adds 0.3 second timeouts.
		printf ("\b\b\b\b\b   ");        // \b moves the cursor 1 char to the left, giving the impression of deleting the preceding digits.
		fflush (stdout);
		usleep (500000);               // wait 0.3 second.
	}
	printf ("\033[1;32m result = %d\033[0m\n", z); // display the result in green. 

	return (0);
}

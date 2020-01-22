#include <unistd.h>

void	teste(int i)
{ 
	char a;

	a = i + '0';
	write(1, &a, 1);
}

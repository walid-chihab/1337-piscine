#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}//on suppose que toujour b != 0

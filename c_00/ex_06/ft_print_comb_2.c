#include <unistd.h>

void ft_print_comb_2 (void)
{
    int x,y;

    x = 0;
    while (x <= 98)
    
    {
	y = x + 1;
        while (y <= 99)
        {
		int xd = x / 10 + '0';
		int xm = x % 10 + '0';
		int yd = y / 10 + '0';
                int ym = y % 10 + '0';

		write (1 ,&xd, 1);
		write (1 ,&xm, 1);

		write (1," ",1);//un espace entre les deux comb

		write (1 ,&yd, 1);
		write (1 ,&ym, 1);
           
		if(!(x == 98 && y == 99))//deux conditioin pour bien controler le programme
			write(1,", ",2);//vergule espace entre chaque deux chiffre de deux comb

		y++;
        }
        x++;
    }
}
int main (){
	ft_print_comb_2();
	return 0;
}

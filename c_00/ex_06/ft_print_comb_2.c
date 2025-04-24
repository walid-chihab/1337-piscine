#include <unistd.h>

void ft_print_comb_2 (void)
{
    int i= 0 ,j;
    while (i<99)
    {
            j=i+1;

        while (j<100)
        {
            int div_i=i/10 +'0';
            int res_i= i%10+'0';
            write (1 ,&div_i, 1);
            write (1 ,&res_i, 1);
            
            write (1," ",1);

            int div_j=j/10+'0';
            int res_j= j%10+'0';
            write (1 ,&div_j, 1);
            write (1 ,&res_j, 1);
           
           if(!(i == 98 && j == 99))
                write(1,", ",2);
            j++;
        }
        i++;
    }
}
int main (){
	ft_print_comb_2();
	return 0;
}

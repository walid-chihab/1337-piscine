#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c){
    write (1, &c,1);;
}

void ft_putnbr (int nbr)
{
    if (nbr == -2147483648)
    {
        write (1,"-",1);
        write (1,"2147483648",10);
        return ;
    }
    
    if (nbr < 0){
        nbr= -nbr;
        write (1,"-",1);
    }
    if (nbr >= 10)
    {
        ft_putnbr(nbr/10);
    }
    ft_putchar (nbr%10+'0');
}

int main (){
    ft_putnbr(-2147483648);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
	if(nbr == -2147483648)
	{
		ft_putchar('-');//on affich les deux premeir nombre du chiffre separement 
		ft_putchar('2');
		ft_putnbr(147483648);//puis on l'integre le nbr dans le 3 emme if
		return ; //car on peut pas traiter les autre condition autre fois 
	}
	if (nbr < 0)
	{
		ft_putchar('-');//affich signe moin puis changer signe du nbr et le integrer dans le condition suivant ``/
		nbr = -nbr;
	}

	if (nbr >= 10)
		ft_putnbr(nbr /10);
	ft_putchar (nbr % 10 + '0');// sous forme caracter

}
int main (){
	ft_putnbr(-2147483648);
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
/* 			        	                        	*/
/*   deux    meme			            :=:      ::::::::   */
/*  fct avec  des				  :+://     :+:   :+:   */
/* deffirent code				+:+ +:+         +:+     */
/*					      +#+  +:+        +#+       */
/*					    +#+#+#+#+#+     +#+         */
/*					          #+#     #+#           */
/*					         ###    w#a#l#i#d.ma    */
/*					                                */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
    int	i=0 ;
    while (i <= 7) {
        int	j=i+1 ;
        while ( j<=8 )
	{
            int	k=j+1 ;
            while ( k<=9 )
	    {
                ft_putchar( i+'0' ) ;
                ft_putchar( j+'0' ) ;
                ft_putchar( k+'0' ) ;

                if ( !(i == 7 && j == 8 && k == 9)) {
                    write(1, ", ", 2);
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
int main ()
{
	ft_print_comb3();
	return 0;
}

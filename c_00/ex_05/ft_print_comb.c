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

#include <unistd.h>


void    ft_print_comb0 (void )
{
    int  i,j,k;
    
    i = '0';
    while ( i<56 )
    {
        j = i+1 ; 
        while ( j<57 )
        {
            k=j+1;
            while( k<58)
            {   
                write( 1, &i, 1);
                write( 1, &j, 1);
                write( 1, &k, 1);
               if (i != 55 || j != 56 || k != 57)
                    write(1,", ",2);
                k++;

            }
            j++;
        }
        i++;
    }
}


/*********************************************************************************************************/
void    ft_print_comb_1 (void )
{
    int  i,j,k;

    j  =  i+1;
    for (   i=0  ;  i<8  ;  i++)
    {
        int k = j+1 ;
        for (  j=i+1  ;  j<9  ;  j++)
        {
            for(  k=j+1  ;  k<10  ;  k++)
            {
                char c1 = i + '0';//converte the char to numbre
                char c2 = j + '0';
                char c3 = k + '0';

                write( 1, &c1, 1);
                write( 1, &c2, 1);
                write( 1, &c3, 1);
                if (i != 7 || j != 8 || k != 9) // meme si if apresles writs sa marche car les valeu pass directement dapres for par contre while
                    write(1,", ",2);
            }
        }
    }
}

/*********************************************************************************************************/

 void ft_putchar (char  c){

     write (1,&c,1);
 }

void ft_print_comb2(void) {
    int  a,b,c ;

    a = 0;
    while(a <= 7){

        b = a + 1;
        while (b <= 8){

            c = b + 1;
            while( c <= 9){

                char _a = a + '0';
                char _b = b + '0';
                char _c = c + '0';

                ft_putchar(_a);
                ft_putchar(_b);
                ft_putchar(_c);

                if (a != 7)
                    write(1 ,", ",2);

                c++;
            }
            b++;
        }
        a++;
    }
}

int main ()
{
	ft_print_comb3();//preferant la 3 emme
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:18:57 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/19 16:50:39 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb(void);
int ft_putchar(char n);

int ft_putchar(char n)
{
    write(1,&n,1);
    return 0;

}
void ft_print_comb(void)
{
    int n1;
	int n2;
    int n3;

    n1 = '0';
    n1 = '0' - 1;

     while (++n1 <= '9')
	 {
	        n2 = n1;
	   		    while(++n2 <= '9')
		 		{
					    n3 = n2;
						    while(++n3 <= '9')
							 {
							    ft_putchar(n1);
								ft_putchar(n2);
								ft_putchar(n3);

								ft_putchar(',');
								ft_putchar(' ');
							 }
		 		}	
	 }	 
 	
	 
}	

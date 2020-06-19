/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:35:00 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/19 16:42:05 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(int n);
void ft_print_reverse_alphabet(void);

   
int ft_putchar(int n)
{
    write(1,&n,1);
	return 0;
}	

void ft_print_reverse_alphabet(void)
{
   char c = 'z';
   while (c >= 'a')
   {
      ft_putchar(c--);
   }   
   ft_putchar('\n');
}

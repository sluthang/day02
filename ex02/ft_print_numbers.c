/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:43:17 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/19 16:43:34 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char n);
void ft_print_numbers(void);


int ft_putchar(char n)
{
  write(1,&n,1);
  return 0;
}	

void ft_print_numbers(void)
{
   char num;
   num = '0';
   while (num <= '9')
   {
     ft_putchar(num++);
   }	   
   ft_putchar('\n');
}


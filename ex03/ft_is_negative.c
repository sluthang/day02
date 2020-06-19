/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:47:17 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/19 16:49:55 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char n);
void ft_is_negative(int n);

int ft_putchar(char  n)
{
     write(1,&n,1);
     return 0;
}	

void ft_is_negative(int n)
{
      
	  if (n < 0)
	  {
	       write(1,"N",1);
	  }	  
	  else
	  {
	       write(1,"P",1);
	  }	  

	  ft_putchar('\n');
}


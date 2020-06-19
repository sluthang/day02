/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:55:07 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/19 16:55:37 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
  int ft_putchar(char c);
  void ft_putnbr(int nb);
 
   
  int ft_putchar(char c)
  {
      write(1,&c,1);
      return 0;
  }
 
  void ft_putnbr(int nb)
  {
      char c;
      if (nb < 0)
      {
          ft_putchar('-');
          nb = nb * - 1;
      }
 
     if (nb/10 != 0)
      {
          ft_putnbr(nb/10);
      }
 
     c = nb%10 +48;
     ft_putchar(c);
  }



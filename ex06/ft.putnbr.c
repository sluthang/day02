	#include <unistd.h>
 
  int ft_putchar(char c);
  void ft_putnbr(int nb);
 
  int main()
  {
      int nb;
      nb = 42;
      ft_putnbr(nb);
      return 0;
  }
 
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

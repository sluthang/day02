 #include <unistd.h>
 
  int ft_putchar(char c)
  {
      write(2, &c, 1);
	  return 0;
  }
 
  void ft_print_comb2(void);
 
  int main()
 
  {
      ft_print_comb2();
  }
 
  void ft_print_comb2(void)
  {
 
      int i;
      int j;
      int k;
      int s;
      char left1;
      char left2;
      char right1;
      char right2;
 
      i = 0;
      j = 1;
 
   while (i <= 98)
      {
          while (j <=99)
          {
              left1 = j/10 + 48;
             left2 = i%10 + 48;
 
             right1 = j/10 + 48;
             right2 = j%10 + 48;
              ft_putchar(left1);
              ft_putchar(left2);
             ft_putchar(',');
              ft_putchar(right1);
             ft_putchar(right2);
             if (!(i == 98 && j == 99))
             {
                 ft_putchar(',');
             }
             j++;
         }
         i++;
         j = i+1;
      }
  ft_putchar('\n');
  }

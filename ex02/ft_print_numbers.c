#include<unistd.h>

int ft_putchar(char n);
void ft_print_numbers(void);

int main()
{
  ft_print_numbers();

  return 0;
}	

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


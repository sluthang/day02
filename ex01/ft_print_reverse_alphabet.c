#include<unistd.h>

int ft_putchar(int n);
void ft_print_reverse_alphabet(void);

int main()
{
    ft_print_reverse_alphabet();
	return 0;
}
   
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

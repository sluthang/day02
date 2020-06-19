#include<unistd.h>

int ft_putchar(char n);
void ft_print_alphabet(void);

int main()
{
      
	  ft_print_alphabet();
	  
      return 0; 	  
}

int ft_putchar(char n)
{
   write(1,&n,1);
   return 0;   
}
void ft_print_alphabet(void)
{
	  char c ='a';
	  while(c <= 'z')
	  {
	  	ft_putchar(c++);
	  }
	  ft_putchar('\n');


}


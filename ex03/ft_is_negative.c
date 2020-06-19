#include<unistd.h>

int ft_putchar(char n);
void ft_is_negative(int n);

int main()
{   
	 int n;
     n = 6;
     ft_is_negative(n);
     return 0;
}	


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

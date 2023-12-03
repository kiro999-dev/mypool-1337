#include<unistd.h>
void	write_n(int n)
{
	char c;

	if(n<=9)
	{
		c=n+48;
		write(1,"0",1);
		write(1,&c,1);
	}
	else 
	{
		c=(n/10)+48;
		write(1,&c,1);
		c=(n%10)+48;
		write(1,&c,1);	
	}
}

void ft_print_combo2 (void)

{

	int a=0;
	int b;
	while(a<=98)
	{
		b=a+1;
		while(b<=99)
		{
			write_n(a);
			write(1," ",1);
			write_n(b);
			if(a!=98)
				write(1,", ",2);
			
			b++;	


		}

		 a++;

	}

}

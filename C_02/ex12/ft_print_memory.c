#include<unistd.h>
void	print_str(void *addr, int size)
{
	char *str= (char*) addr;
	int i=0;

	while(str[i] && i < size)
	{	
		if(str[i]<32|| str[i]==127)
			write(1,".",1);
		else
		write(1,&str[i],1);
		i++;
	
	}
			  write(1,"\n",1);


}
void	 print_str_hexa (void *addr,int size)
{
	char 	hexa[16]="0123456789abcdef";
	char 	*str=(char*) addr;
	int 	i=0;
	
	while(str[i]&& i < size)
	{
		if(i%2==0)
			write(1," ",1);
	
		write(1,&hexa[(str[i]/16)],1);
		write(1,&hexa[str[i]%16],1);
		i++;
	}
	write(1," ",1);
	print_str(addr,size);
	
}
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long int address=(unsigned long int) addr;
	char hexa[16]="0123456789abcdf";
	int i=0;
	char buffer[20];

	while(i<20) 
	{
		buffer[i]='0';
		i++;
	}

		i=0;
	while(address > 0)
	{
	  	buffer[i]=hexa[address%16];
		address=address/16;
		i++;

	}
	i=15;
	while(i>=0)
	{
		write(1,&buffer[i],1);
		i--;
	}
	write(1,": ",2);
	print_str_hexa(addr,size);

	return (addr);

}

int main(void)
{
	ft_print_memory	("he\tllo",5);
	 ft_print_memory ("bro!\n",5);


return 0;

}

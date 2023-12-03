#include<unistd.h> 

void	ft_putstr_non_printable(char *str)
{
	char	 hexa[16]="0123456789abcdef";
	int	 index;
	int i=0;
	while(str[i])
	{
	
		if(str[i]>=0&& str[i]<=31||str[i]==127)
		{
			write(1,"\\",1);
			index=str[i]/16;	
			str[i]=str[i]%16;
			write(1,&hexa[index],1);
			write(1,&hexa[str[i]],1);
		
		} else
			write(1,&str[i],1);
		i++;
	}


}


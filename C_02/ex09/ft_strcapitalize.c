char 	*ft_strcapitalize(char *str)
{

	int	i = 1;

	 if(str[0]>='a' && str[0]<='z')
                     str[0]=str[0]-32;

	while(str[i])
	{
		if(str[i-1]==' '||str[i-1]=='+'|| str[i-1]=='-')
		{
			if(str[i]>='a' && str[i]<='z')
				str[i]=str[i]-32;
		
		}
		else if(str[i]>='A' && str[i]<='Z')
                                str[i]=str[i]+32;
		
		i++;
	}

	return(str);

}

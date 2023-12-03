int	ft_str_is_alpha(char *str)
{
	while(*str)
	{
		if(!((*str>=97 && *str<=122)||(*str>=65 && *str<=90)))
		{
			return (0);
		
		}
		str++;
	
	}

	return(1);
}

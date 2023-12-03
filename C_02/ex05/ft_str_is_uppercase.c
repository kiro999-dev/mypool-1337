int	ft_str_is_uppercase(char *str)
{
	while(*str)
	{
		if(!(*str>='A' && *str<='Z'))
		
			return (0);
		
	}
	return (1);
}

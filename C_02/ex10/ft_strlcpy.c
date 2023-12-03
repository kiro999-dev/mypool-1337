unsigned int	ft_strlen(char *str)
{
	unsigned int	i=0;

	while(str[i])
		i++;
		

	return (i);

} 	


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	 i = 0;
	unsigned int	x;
	
	x=ft_strlen(src);
	while(i<size-1 && src[i])
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';

	return(x);


}


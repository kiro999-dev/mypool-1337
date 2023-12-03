#include <stdio.h>

void	ft_swap(int *a, int *b)
{

	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int l=0;
	int r=size-1;
	while(l<r)
	{
		ft_swap(&tab[l],&tab[r]);
		r--;
		l++;
	
	}
	
}

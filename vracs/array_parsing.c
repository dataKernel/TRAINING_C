#include <unistd.h>
#include <math.h>
#include <stdio.h>
//gestion du rand
#include <stdlib.h>
#include <time.h>


void	ft_parse_array(int *tab, int size_tab)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while(i < size_tab)
	{
		j = i + 1;
		while(j < size_tab)
		{
			if(tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	//init
	srand(time(NULL));
	//declarations
	const int	SIZE_ARRAY = 5;
	int			tab[SIZE_ARRAY];
	int			count;
	
	count = 0;
	//creation du tab rand
	for(int i = 0; i < SIZE_ARRAY; i++)
	{
		tab[i] = rand() % 1000000;	
	}
	//sorting the tab
	ft_parse_array(tab, SIZE_ARRAY);
	//checking values
	while(count < SIZE_ARRAY)
	{
		printf("value[%i]:%i\n", count, tab[count]);
		count++;
	}
	return(0);
}

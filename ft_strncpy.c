#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int	size_src;
	int				i;
	int				j;

	j = 0;
	i = 0;
	size_src = ft_strlen(src);
	while(i < n)
	{
		dst[i] = src[i];
		if(size_src < n && i == size_src + j)
		{
			dst[i] = '\0';
			j++;
		}
		i++;
	}
	return(dst);
}

int		main(void)
{
	char	*str = "lan";
	char	dst[10];

	ft_strncpy(dst, str, 9);
	for(int i = 0; i < 9; i++)
		printf("%c\n", dst[i]);
	return(0);
}

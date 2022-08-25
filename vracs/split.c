/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   script.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:29:11 by lancelot          #+#    #+#             */
/*   Updated: 2022/05/23 14:26:51 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int     ft_strlen(char *str)
{
    int     count;

    count = 0;
    while(*str++)
        count++;
    return(count);
}

int 	check_words_str(const char *str, char c)
{
	int		count;

	count = 1;
	while(*str++)
	{
		if(*str == c)
			count++;
	}
	return(count);
}

void	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
}

void	ft_split(const char *str, char del)
{
	//init the VLA
	int		words_nbr = check_words_str(str, del);
	int		words_size;	
	char	*split[words_nbr];
	int		begin_word;
	int		i;
	int		j;
	
	begin_word = 0;
	i = 0;
	j = 0;
	while(i < words_nbr)
	{
		words_size = 0;
		while(str[j])
		{
			words_size++;
			j++;
			if(str[j] == del)
			{
				j++;
				break;
			}
		}
		char	word[words_size];
		ft_strlcpy(word, str + begin_word, words_size + 1);
		begin_word = j;
		printf("mot --> %s\n", word);
		//on recupere bien les infos de la taille des mots
		i++;
	}
}

int     main(void)
{
	ft_split("lancelot est content", ' ');;

	return(0);
}

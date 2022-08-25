/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:22:40 by lancelot          #+#    #+#             */
/*   Updated: 2022/05/30 18:25:17 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//basic struct to work with linked list
struct	s_node
{
	int				value;
	struct s_node	*next;
};

struct	s_node init(void)
{
	struct s_node	*head;
	struct s_node	*one;
	struct s_node	*two;

	one = malloc(sizeof(one));
	two = malloc(sizeof(two));
	head = one;
	one->value = 1;
	two->value = 2;
	one->next = two;
	two->next = NULL;
	
	return(*head);
}

int		main(void)
{
	struct s_node	head;

	head = init();
	printf("test affichage value : %i\n", head.value);
	return(0);
}

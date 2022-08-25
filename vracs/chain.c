/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:22:40 by lancelot          #+#    #+#             */
/*   Updated: 2022/06/02 11:34:49 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*

head->one->two->NULL

new->? new->one  head->new == head->new->one->two->NULL
*/


struct	s_node
{
	int					value;
	struct s_node		*next;
};

struct	s_node *init(void)
{
	struct s_node	*head;
	struct s_node	*first;
	struct s_node	*second;
	//setup the list allocation
	first = malloc(sizeof(struct s_node));
	second = malloc(sizeof(struct s_node));
	//setup the data
	first->value = 1;
	second->value = 2;
	//link the list between elems
	head = first;
	first->next = second;
	second->next = NULL;
	return(head);
}

//TODO: creer fonction qui compte le nbr d'elem dans la liste
//	creer fonction qui créé un new elem dans la liste et l'envoi sur la front
int		count_elem_list(struct s_node *head)
{
	struct s_node	*actual;
	int				count;

	count = 0;
	actual = head;
	while(actual != NULL)
	{
		actual = actual->next;
		count++;
	}
	return(count);
}

void	push_elem_head(struct s_node **ptr_head)
{
	printf("addr de head --> %p\n", ptr_head);
	printf("value de head --> %p\n", *ptr_head);//value de head donc adrr de first
	printf("value de first pointé par head --> %i\n", (*ptr_head)->value); // value de first pointé par head pointé par ptr de head
	return ;
}

void 	push_elem_tail(struct s_node *head)
{
	struct s_node	*new;
	struct s_node	*actual;

	actual = head;
	//new allocation for the new elem
	new = malloc(sizeof(struct s_node));
	//setup the new values;
	new->value = 666;
	new->next = NULL;
	while(actual != NULL)
	{
		printf("(context push) value : %i\n", actual->value);
		actual = actual->next;
		if(actual->next == NULL)
		{
			actual->next = new;
			break;
		}
	}
}

int		main(void)
{
	struct s_node	*head;
	int 			count;

	head = init();
	count = count_elem_list(head);
	//printf("sized of the list --> %i", count);
	push_elem_head(&head);
	return(0);
}

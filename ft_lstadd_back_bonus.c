/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:48:26 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/17 16:01:07 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (lst == NULL || new == NULL)
		return ;
	while (head)
	{
		if (head->next == NULL)
		{
			head->next = new;
			new->next = NULL;
		}
		head = head->next;
	}
}

// void ft_printlist(t_list *head)
// {
//     while(head){
//         printf("%s\n", head->content);
//         head = head ->next;
//     }
// }
// int main()
// {
//     t_list *a, *b, *c;
//     a = malloc(sizeof(t_list));
//     b = malloc(sizeof(t_list));
//     c = malloc(sizeof(t_list));
// 
//     a ->content = "ali";
//     b ->content = "elamine";
//     c ->content = "eagle";
// 
//     a ->next = b;
//     b ->next = c;
//     c ->next = NULL;
// 
//  
//     ft_printlist(a);
//     t_list *h;
//     h = malloc(sizeof(t_list));
//     h ->content = "hello";
//     ft_lstadd_back(&a, h);
//     ft_printlist (h);
// }
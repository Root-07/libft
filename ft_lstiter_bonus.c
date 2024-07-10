/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:56:14 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 14:49:51 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_printlst(t_list *h)
// {
// 	while(h){
// 	printf("%s\n", h->content);
// 	h = h->next;
// 	}	
// }
// void	ft_f(void *f)
// {
// 	int i;
// 	i = 0;
// 	while (*((char *)f+i) != '\0'){
// 		*((char *) f+i) = 'j';
// 		i++;
// 	}
// }
// int main()
// {
// 	t_list *a, *b;

// 	// a = malloc(sizeof(t_list));
// 	// b = malloc(sizeof(t_list));

// 	a = ft_lstnew(ft_strdup("ali"));
// 	b = ft_lstnew(ft_strdup("elamine"));

// 	a->next = b;
// 	b->next = NULL;
// 	ft_printlst(a);
// 	ft_lstiter(a , ft_f);
// 	ft_printlst(a);
// }
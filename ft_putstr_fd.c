/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:09:23 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/08 19:33:49 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		write(fd, &s[i++], 1);
	}
}

// #include<stdio.h>
// int main()
// {
//     FILE *f = fopen("new.txt" , "w");
//     char *s = "elamine";
//     int b = fileno(f);
//     ft_putstr_fd(s, b);   
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:04:23 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 22:00:35 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}

// #include<stdio.h>
// int main()
// {
// 	int fd; 
//  	fd = open("nfile.txt", O_CREAT | O_RDWR , 777);
// 	ft_putendl_fd("chjb" , fd);
// 	close(fd);
// }
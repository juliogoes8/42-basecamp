/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:10:02 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/08 02:29:50 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "ABCDE";
	char *ptr = &str[0];

	ft_putstr(ptr);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, str+i, 1);
		i++;
	}
}

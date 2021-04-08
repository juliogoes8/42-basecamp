/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:12:42 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/06 19:05:42 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_numb(char a, char b, char c, char d);

int		main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			d = b + 1;
			c = a;
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_numb(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
		}
		a++;
	}
}

void	ft_print_numb(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

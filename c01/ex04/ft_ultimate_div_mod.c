/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:54:37 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/08 02:09:15 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 105;
	y = 25;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;

	printf("%d, %d\n", *a, *b);
}

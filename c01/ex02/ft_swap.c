/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:38:21 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/06 22:48:46 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

int		main(void)
{
	int i;
	int j;
	int *a;
	int *b;

	i = 42;
	j = 12;
	a = &i;
	b = &j;
	ft_swap(a, b);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

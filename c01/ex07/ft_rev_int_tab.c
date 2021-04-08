/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:49:01 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/08 17:07:35 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = {10, 11, 12, 13, 14, 15};
	int *ptr = &tab[0];
	int n;

	n = sizeof(tab) / 4;
	ft_rev_int_tab(ptr, n);
	return (0);
}

void	ft_rev_int_tab(int *ptr, int n)
{
	int temp[n];
	int i;

	i = 0;
	while (i < n)
	{
		temp[i] = *ptr + n - 1 - i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(ptr + i) = temp[i];
		i++;
	}
}

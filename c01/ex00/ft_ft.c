/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:08:22 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/08 01:20:23 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr);

int		main(void)
{
	int i;
	int *nbr;

	nbr = &i;
	ft_ft(nbr);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
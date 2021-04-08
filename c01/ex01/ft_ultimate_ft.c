/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:21:37 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/07 01:53:05 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int i;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int *********nbr;

	i = 42;
	ptr1 = &i;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	nbr = 0;
	ft_ultimate_ft(nbr);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;

	ptr4 = 0;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;
}

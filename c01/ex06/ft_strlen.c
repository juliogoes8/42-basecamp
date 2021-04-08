/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:27:56 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/08 15:02:08 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "3,141615415646148";
	char *ptr = &str[0];

	ft_strlen(ptr);
	return (0);
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	return (i);
}

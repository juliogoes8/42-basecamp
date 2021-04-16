/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:47:46 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/14 02:14:29 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(*(str) == '\0')
		return(1);
	while(*(str + i) != '\0')
		if(*(str + i) < 65 || *(str + i) > 122 || (*(str + i) > 90 && *(str + i) < 97))
			{
				return (0);
			}
		else
			i++;
		return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 03:20:54 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/14 03:22:40 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(*(str + i) != '\0')
	{
		if(*(str + i) >= 65 && *(str + i) <= 90)
		{
			*(str + i) = *(str + i) + 32;
			i++;
		}
		else
		i++;
	}

	return(str);
}

int    main(void)
{
    char str1[] = "abcde!#$$fghi";
    char str2[] = "AbcDefGhI";
    char str3[] = "ABCDEFGHI";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    ft_strlowcase(str1);
    ft_strlowcase(str2);
    ft_strlowcase(str3);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    return (0);
}
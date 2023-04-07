/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:36:10 by jichew            #+#    #+#             */
/*   Updated: 2023/04/07 18:45:31 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (src_len);
}

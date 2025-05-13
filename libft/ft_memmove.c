#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char		*d = (unsigned char *)dst;

	if (!dst && !src)
		return (0);

	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}

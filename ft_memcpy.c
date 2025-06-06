#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (0);

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	while (n--)
		*d++ = *s++;
	return (dst);
}

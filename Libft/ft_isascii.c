int		ft_isascii(char c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
}
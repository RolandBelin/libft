int		ft_isblank(int c)
{
	if (c == ' ' || c == '\t' || c == 264 || c == 266 || c == 280 || c == 290 || c == 296)
		return (1);
	else
		return (0);
}

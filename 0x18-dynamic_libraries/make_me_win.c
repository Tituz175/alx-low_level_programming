static int index = 0;
int rand(void)
{
	int pos = index;
	int draw[] = {
		8,
		8, 
		7, 
		9, 
		23,
		74
	};

	index++;
	if (index >= 6)
		index = 0;
	return (draw[pos]);
}

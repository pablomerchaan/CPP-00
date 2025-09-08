#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	j = 1;
	if (argc < 2)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout <<(char)toupper(argv[j][i]);
				i++;
			}
			j++;
			if (argv[j])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}

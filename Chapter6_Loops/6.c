#include <stdio.h>

int main (void)
{
	int user_input_max_num, i;
	printf("Please enter an integer: ");
	scanf("%d",&user_input_max_num);

	i = 0;
	while (i * i <= user_input_max_num)
	{
		if (i >= 2)
		{
			printf("%d * %d is %d\n", i, i, i * i);
		}
		i += 2;
	}

	return 0;
}

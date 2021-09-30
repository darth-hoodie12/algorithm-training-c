#include <stdio.h>

int main()
{
	int N, X, seq;
	int i;

	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &seq);

		if (seq < X)
		{
			printf("%d ", seq);
		}
	}


	return 0;

}

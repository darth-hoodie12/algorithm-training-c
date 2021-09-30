#include <stdio.h>
#include <stdlib.h>

void maxNmin(int *data, int SZ)
{
  int max = -1000001;
  int min = 1000001;
  int i, j;
  for(i = 0;i<SZ;i++) {
    if(data[i] > max)
    {
      max = data[i];
    }
    if(data[i] < min)
    {
      min = data[i];
    }
  }

  printf("%d %d", min, max);

}

int main()
{
  int N;
  scanf("%d", &N);

  int *data = (int*)malloc(sizeof(int)*N);

  for(int i = 0;i<N;i++) {
    scanf("%d", &data[i]);
  }

  maxNmin(data, N);

  return 0;
}

#include <stdio.h>

#define MAX 10000
int data[MAX];

int howmany(int num);

int main()
{

  int N, K = 0;

  scanf("%d %d", &N, &K);
  int cnt = howmany(N);

  printf("%d", data[K-1]);

  return 0;
}

int howmany(int num)
{
  int i, j = 0;
  int cnt = 0;

  while(i!=MAX) {
    i++;
    if(num % i == 0)
    {
      cnt++;
      data[j] = i;
      j++;
    }
  }

  return cnt;
}

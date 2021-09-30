#include <stdio.h>
#include <stdlib.h>


void countOne(int _n)
{
  int n = _n;
  int i = 0;

  while(n!=0) {
    if(n%2==1)
    {
      printf("%d ", i);
    }
    i++;
    n = n/2;
  }

  return;

}


int main()
{
  int T = 0;

  scanf("%d", &T);

  int *n = (int*)malloc(sizeof(int)*T);
  int i = 0;

  for(i = 0;i<T;i++) {
    scanf("%d", &n[i]);
  }

  for(i=0;i<T;i++) {
      countOne(n[i]);
      printf("\n");
  }

  return 0;
}

/********************************************
2021.10.02
@filename c1978.c
@author darth-hoodie12

@detail
소수찾기
*********************************************/
#include <stdio.h>

int isPrime(int n);

int main()
{

  int N;
  int num;

  scanf("%d", &N);

  int cnt = 0;

  for(int i = 0;i<N;i++) {
    scanf("%d", &num);
    if(isPrime(num)==1)
    {
      cnt++;
    }
  }

  printf("%d", cnt);

  return 0;
}

// if prime number return 1
int isPrime(int n)
{

  if(n<=0)
  {
    return 0;
  }

  int cnt = 0;

  for(int i = 1;i<=n;i++) {
    if(n % i == 0)
    {
      cnt++;
    }
  }

  if(cnt == 2)
  {
    return 1;
  }

  return 0;

}

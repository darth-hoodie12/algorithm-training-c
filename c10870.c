#include <stdio.h>

int calculateFibonacci(int n);

int main()
{
  int n;
  scanf("%d", &n);

  printf("%d", calculateFibonacci(n));

  return 0;

}

int calculateFibonacci(int n)
{
  if(n == 0)
  {
    return 0;
  }
  else if(n <= 2)
  {
    return 1;
  }

  return calculateFibonacci(n-1)+calculateFibonacci(n-2);


}

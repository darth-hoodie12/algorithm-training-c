/********************************************
2021.10.02
@filename c2609.c
@author darth-hoodie12

@detail
최대공약수 최소공배수 구하기
*********************************************/

#include <stdio.h>

int GCF(int n1, int n2);
int LCM(int n1, int n2);

int i, j;

int main()
{
  int f, s;

  scanf("%d %d", &f, &s);

  printf("%d\n%d", GCF(f, s), LCM(f, s));

  return 0;
}

int GCF(int n1, int n2)
{
  if(n1>n2)
  {
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }

  int _gcf = -100001;


  for(i=1;i<=n1;i++) {
    if(n1 % i == 0 && n2 % i == 0)
    {
      if(i>_gcf)
      {
        _gcf = i;
      }
    }
  }

  return _gcf;
}

int LCM(int n1, int n2)
{

  int _gcf = GCF(n1, n2);
  int _lcm = _gcf * (n1 / _gcf) * (n2 / _gcf);

  return _lcm;

}

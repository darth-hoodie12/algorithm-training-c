#include <stdio.h>


int max = -10001;
int inside = 0;
void countPeople(int in, int out);

int main()
{
  int I, O;

  for(int i =0;i<10;i++){
    scanf("%d %d", &O, &I);
    countPeople(I, O);
  }

  printf("%d", max);

  return 0;
}

void countPeople(int in, int out)
{
  inside += in;
  inside -= out;

  if(inside > max)
  {
    max = inside;
  }

}

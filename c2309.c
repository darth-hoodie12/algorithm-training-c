// Bruce-Force

#include <stdio.h>

int visited[9];
int height[9];

int main()
{
  int i, j, m;

  for(i=0;i<9;i++) {
    scanf("%d", &height[i]);
  }

  int temp = 0;

  for(i = 1;i<9;i++) {
    for(j=0;j<9;j++)
    if(height[j] > height[i])
    {
      temp = height[i];
      height[i] = height[j];
      height[j] = temp;
    }
  }

  int sum = 0;

  for(i=0;i<9;i++) {
    visited[i] = 1;
    for(m=i+1;m<9;m++) {
      visited[m] = 1;
      for(j=0;j<9;j++) {
        if(visited[j] != 1)
        {
          sum += height[j];
        }
      }

      if(sum == 100)
      {
        for(j=0;j<9;j++) {
          if(visited[j] != 1)
          {
            printf("%d\n", height[j]);
          }
        }
        return 0;
      }
      sum = 0;
      visited[m] = 0;
    }
    visited[i] = 0;
  }

  return 0;
}

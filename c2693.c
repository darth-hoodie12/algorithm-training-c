/********************************************
2021.10.02
@filename c2693.c
@author darth-hoodie12

@detail
N번째 큰 수
*********************************************/
#include <stdio.h>
#include <stdlib.h>

int cnt;
void sorting(int **arr);

int main()
{
  int **A;
  int N = 3;

  scanf("%d", &cnt);

  A = (int **)malloc(sizeof(int*)*cnt);

  for(int i = 0;i<cnt;i++) {
    A[i] = (int *)malloc(sizeof(int)*10);
    for(int j = 0;j<10;j++) {
      scanf("%d", &A[i][j]);
    }
  }

  sorting(A);

  for(int i = 0;i<cnt;i++) {
    printf("%d\n", A[i][N-1]);
  }

  return 0;
}

void sorting(int **arr)
{

  int i, j, k;
  int temp = 0;

  for(i = 0;i<cnt;i++) {
    for(j = 1;j<10;j++) {
      for(k = 0;k<9;k++) {
        if(arr[i][j] > arr[i][k])
        {
          temp = arr[i][j];
          arr[i][j] = arr[i][k];
          arr[i][k] = temp;
        }
      }
    }
  }

  return;
}

#include<stdio.h>
int main()
{
	int x[20][20];
	int y[20][20];
	int z[20][20];
	int i,j;
	
	printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i<=1; ++i)
    for (j = 0; j<=1; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &x[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i <=1; ++i)
    for (j = 0; j <=1; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &y[i][j]);
    }
     // adding two matrices
  for (i = 0; i <=1; ++i)
    for (j = 0; j <=1 ; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
		return 0;
}

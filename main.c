#include <stdio.h>

int main(void) {
  int a[100][100];
  int n, i, j, l;
  int t;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &t);
    int sum = 0;
    for (j = 0; j < t; j++) {
      scanf("%d", &a[i][j]);
      sum = sum + a[i][j];
    }
    float avg = sum / (float)t;

    int c = 0, m = 0;
    int flag = 0;
    while (c != t) {
      m = 0;
      for (j = 0; j < t; j++) {
        if (c == j) {
          l = a[i][j];
          continue;
        }
        m = m + a[i][j];
      }

      float avgm = m / (float)(t - 1);

      if (avgm == avg) {

        printf("%d\n", l);
        int flag = 1;
        break;
      }

      c++;

      if (flag == 0 && c == t) {
        printf("Impossible");
      }
    }
  }

  return 0;
}

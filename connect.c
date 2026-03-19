#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static int cmp_int(const void *p, const void *q){
  int a = *(const int*)p;
  int b = *(const int*)q;
  if (a < b) return -1;
  if (a > b) return 1;
  return 0;
}

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  //void v_1();
  //void v_2();
  void v_3();
  v_3();
  return 0;
}

void v_1(){
  int n = 0, len = 0;
    scanf("%d", &n);
    typedef struct{
      int position;
      bool available;
    }devices;
    devices computer[n];
    devices battery[n];
    battery[n].available = true;
    for (int i = 0; i < n; i++){
      scanf("%d", &computer[i].position);
    }
    for (int i = 0; i < n; i++){
      scanf("%d", &battery[i].position);
    }
    for (int i = 0; i < n; i++){
      int j;
      for (j = 0; j < n; j++){
        if (battery[j].available){
          len += abs(computer[i].position - battery[j].position);
          battery[j].available = false;
        }
      }
      battery[n].available = true;
    }
  printf("%d", len);
}

void v_2(){
  int n;
  scanf("%d", &n);
  int len[n * n];
  int arr[n][n];
  for (int i = 0; i < n; i++){
    {
      for (int j = 0; j < n; j++){
        scanf("%d", &arr[i][j]);
      }
    }
  }
  for (int i = 0; i < n; i++){
    int j = 0;
    while(j < n){
      int f = arr[i][j];
      j++;
    }
  }
}

void v_3(){
  int n;
  if (scanf("%d", &n) != 1) return;
  int *comp = malloc(sizeof(int) * n);
  int *bat = malloc(sizeof(int) * n);
  if (!comp || !bat) {
    free(comp);
    free(bat);
    return;
  }
  for (int i = 0; i < n; i++) scanf("%d", &comp[i]);
  for (int i = 0; i < n; i++) scanf("%d", &bat[i]);

  qsort(comp, n, sizeof(int), cmp_int);
  qsort(bat, n, sizeof(int), cmp_int);

  long long total = 0;
  for (int i = 0; i < n; i++){
    long long diff = (long long)comp[i] - (long long)bat[i];
    if (diff < 0) diff = -diff;
    total += diff;
  }
  printf("%lld\n", total);
  free(comp);
  free(bat);
}
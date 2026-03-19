#include <stdio.h>
#include <stdlib.h>

void v_0();
void v_1();
int deal(int x, int y, int z){
    x -= y + z;
    return x;
}

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  //v_0();
  v_1();
  return 0;
}

void v_0(){
  int n, i;
  scanf("%d", &n);
  for (i = 0;n != 0; i++){
    n = n - n % 10 - n / 10;
  }
  printf("%d\n", i);
}

void v_1(){
  int n, t = 0;
  scanf("%d", &n);
  int units = n % 10;
  int tens = n / 10;
  while (n > 0){
    t++;
    n = deal(n, units, tens);
  }
  printf("%d", t);
}
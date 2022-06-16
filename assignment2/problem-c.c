
#include<stdio.h>

int main(){
  int s, t, x;
  scanf("%d %d %d", &s, &t, &x);

  int res = 0;
  int count = s;
  while(count != t) {
    if(count == x) {
        res = 1;
        break;
    }

    if (count == 23) {
        count = 0;
    } else {
        count++;
    }
  }

  if (res == 1) {
    printf("Yes");
  } else {
    printf("No");
  }
}

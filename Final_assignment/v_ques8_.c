#include <stdio.h>
#include <string.h>
int main ()
{
      char ch[1000];
      int i, j = 0, k, l, p, a[1000], m, n, t;
      scanf("%s", ch);
      p = strlen(ch);
      for(i = 0; i < p; i++){
          if((i % 2) == 0){
              a[j] = (int) ch[i];
              j++;
          }
      }
      for(m = 1; m < j; m++){
          for(n = 0; n < (j - m); n++){
              if(a[n] > a[n + 1])
              {
                  t = a[n];
                  a[n] = a[n + 1];
                  a[n + 1] = t;
              }
          }
      }
      for(k = 0; k < j; k++){
          if(k == (j - 1)){
              printf("%c", (char) a[k]);
          }
          else{
              printf("%c%c", (char) a[k], '+');
          }
      }
      printf("\n");

      return 0;
}

// Elmoogy and Attar are friends. Elmoogy challenges Attar to give him a sum of multiple numbers and these numbers range are from 1 to 3. He wants him to print this summands in increasing order. Help attar to solve this problem!

// For example, if Elmoogy give Attar this equation 1+3+2 , the result would be 1+2+3.
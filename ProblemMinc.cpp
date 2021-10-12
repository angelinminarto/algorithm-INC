#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int c[n]; //input coupon sampai n
  for(int i = 0; i < n; i++)
  {
    c[i] = 0;
  }
  int values;
  int coupon = 0;
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &values);

    //membandingkan
    if(values > 0)
    {
      for(int j = values; j > 0; j-=1)
      {
        if(i > 0 && c[i-1] == 0)
         {
          c[i-1] = c[i-1] + 1;
          coupon++;
        }
        else if(c[i] == 0) 
        {
          c[i] = c[i] + 1;
          coupon++;
        }
        else if(c[i + 1] == 0)
        {
          c[i+1] = c[i+1] + 1;
          coupon++;
        }
      }
    }
  }
  printf("%d\n", coupon);
  return 0;
}

#include<stdio.h>
//SOAL INC A
//membandingkan angka dg menggunakan 2 array
int main()
{
  int n;
  int point = 0;
  scanf("%d",&n);
  int a[n]; //array
  int b[n]; //array
  for(int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }

  for(int i = 0; i < n; i++)
  {
    scanf("%d",&b[i]);
  }

//utk membandingkan
    for(int i = 0; i < n; i++)
    {
      if (a[i] > b[i]) //lebih besar
      {
          point = point + 3;
      }
      else if (a[i] < b[i]) //krg dari
      {
        point = point + 0;
      }
      else //sama dengan
      {
        point = point + 1;
      }
    }
    printf("%d\n",point);
  return 0;
}

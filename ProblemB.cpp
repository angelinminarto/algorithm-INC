#include<stdio.h>

int main()
{
  int n;
  int k;
  scanf("%d",&n);
  scanf("%d",&k);
   int a[n]; //array
   for(int i = 0; i < n; i++)
   {
     scanf("%d",&a[i]);
   }

   //utk mengecek angka yg kecil
   int sum = 0;
   for(int i =0;i<n;i++)
   {
     sum = sum + a[i];
   }
   if(sum%2 == 0)
   {
     printf("Preston\n");
   }
   else if(sum%2 != 0)
   {
     printf("John\n");
   }
  return 0;
}

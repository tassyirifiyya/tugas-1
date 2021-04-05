#include <stdio.h>

int main()
{
  int b1,b2,t,L;
  //membuat program mencari luas trapesium
  printf("Mencari Luas Trapesium");
  //meminta user menginput nilai sisi atas
  printf("\nMasukkan sisi sejajar atas :");
  scanf("%d",&b1);
  //meminta user menginput nilai sisi bawah
  printf("Masukkan sisi sejajar bawah :");
  scanf("%d",&b2);
  //meminta user menginput tinggi Trapesium
  printf("Masukkan tinggi :");
  scanf("%d",&t);
  //Luas trapesium
  L= (b1 + b2)*t/2;

  printf("Luas Trapesium :%d",L);

  //mengaplikasikan prefix increment dan decrement ke dalam hasil
  printf("\nHasil Dengan Prefix Increment :%d",++L);
  printf("\nHasil Dengan Prefix Decrement :%d",--L);

  return 0;
}

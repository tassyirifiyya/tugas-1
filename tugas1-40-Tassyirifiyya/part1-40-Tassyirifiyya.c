#include <stdio.h>

int main()
{
  //mendeklarasi variabel
  char nama[30];
  int umur;
  char tingkat_pendidikan[10];
  char alasan[255];

  printf("Halo\nSelamat Datang di Aplikasi Belajar");
  printf("\n-----------------2021-------------------");
  printf("\nuntuk bergabung bersama kami,\nsilahkan menginput data\n\n");

  //meminta user menginput nama
  printf("Masukkan nama Anda: ");
  scanf(" %[^\n]s",&nama);

  //meminta user menginput umur
  printf("Masukkan umur Anda: ");
  scanf("%d",&umur);

  //meminta user menginput tingkat pendidikan. e.g=SD,MI,S1,etc.
  printf("Masukkan tingkat pendidikan Anda: ");
  scanf(" %s",&tingkat_pendidikan);

  //meminta user menginput alasan
  printf("Masukkan alasan Anda bergabung dengan Aplikasi Belajar: ");
  scanf(" %[^\n]s",&alasan);

  printf("\n\nMemastikan kembali data yang telah Anda input:\n");
  printf("%s\n%d\n%s\n",nama,umur,tingkat_pendidikan);
  printf("%s\n",alasan);

  printf("----------------------------------------\n");
  printf("--------------Terima Kasih--------------\n");
  printf("....Permintaan Anda sedang diproses....");

return 0;
}

#include <stdio.h>

int main()
{
  //mendeklarasikan variabel
  int choice;
  int hobi;

  printf("Hobi\n");
  printf("1.Membaca\n2.Menonton\n3.Olahraga\n");
  printf("Pilih salah satu hobi :");
  scanf("%d", &choice);
//memakai if-else-if
  if(choice == 1){
    printf("\nMembaca adalah suatu proses menyampaikan pesan melalui media kata");
    printf("\ncontoh : Ahmad Fuadi\nbuku = Negeri 5 Menara");
  }
  else if(choice == 2){
    printf("\nMenonton adalah melihat pertunjukan skenario dengan tujuan mengedukasi atau menghibur");
    printf("\nfilm = Parasite\ndrama = Penthouse" );
  }
  else if(choice == 3){
    printf("\nOlahraga adalah aktivitas untuk melatih jasmani dan rohani");
    printf("\ncontoh = Badminton, Catur, Sepak Bola");
  }
  else{
    printf("Hobi Tidak Tersedia");
  }
return 0;
}

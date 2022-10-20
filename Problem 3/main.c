#include <stdio.h>
#include <stdlib.h>

 int main(){
     char jenis;
     int kode,harga,diskon;
     printf("Silahkah Pilih Jenis Barang : \n a. A \n b. B \n c. C \n");
     scanf("%c",&jenis);
     printf("Masukkan kode barang : \n" );
     scanf("%d",&kode);
     printf("Masukkan harga barang : \n" );
     scanf("%d",&harga);
     if(jenis=='a'||jenis=='A'){
        diskon = 10;
        harga = harga * ( 1 - diskon/(float)100);
     }
     else if(jenis=='b'||jenis=='B'){
        diskon = 15;
        harga = harga * ( 1 - diskon/(float)100);
     }
     else if(jenis=='c'||jenis=='c'){
        diskon = 20;
        harga = harga * ( 1 - diskon/(float)100);
     }
     else{
        diskon = 0;
        harga = harga * ( 1 - diskon/(float)100);
        printf ("Jenis barang %c tidak mendapat diskon , Harga = %d" ,jenis,harga);
        return 0;
     }
     printf ("Jenis barang %c mendapat diskon = %d%%, Harga setelah didiskon = %d" ,jenis,diskon,harga);
     return 0 ;
}

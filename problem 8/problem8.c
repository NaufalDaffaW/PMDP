#include<stdio.h>

void main(){
    //input kan gaji dan jumlah anak
    //jika memiliki 1 anak mendapat tambahan 10% dari gaji
    //jika memiliki 2 anak mendapat tambahan 20% dari gaji
    //jika memiliki 3 anak mendapat tambahan 30% dari gaji
    //jika lebih dari 3 anak mendapat tambahan 30% dari gaji

    int gaji, anak, tunjangan;
    printf("Masukkan gaji anda : \n");
    scanf("%d", &gaji);
    printf("Masukkan jumlah anak anda : \n");
    scanf("%d", &anak);
    
    if(anak == 1){
        tunjangan = gaji * 0.1;
        printf("Tunjangan anda adalah %d", tunjangan);
    }else if(anak == 2){
        tunjangan = gaji * 0.2;
        printf("Tunjangan anda adalah %d", tunjangan);
    }else if(anak == 3){
        tunjangan = gaji * 0.3;
        printf("Tunjangan anda adalah %d", tunjangan);
    }else if(anak > 3){
        tunjangan = gaji * 0.3;
        printf("Tunjangan anda adalah %d", tunjangan);
    }else{
        printf("Tidak ada tunjangan");
    }
}
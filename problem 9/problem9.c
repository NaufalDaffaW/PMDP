#include<stdio.h>
void main(){
    //input peserta untuk naik bus
    //kapasitas bus adalah 7 orang
    //jumlah bus akan bertambah jika jumlah peserta lebih dari 7
    //output berapa jumlah bus yang dibutuhkan

    int peserta, bus;
    printf("Masukkan jumlah peserta : \n");
    scanf("%d", &peserta);
    if(peserta % 7 == 0){
        bus = peserta / 7;
        printf("Jumlah bus yang dibutuhkan adalah %d", bus);
    }else{
        bus = peserta / 7 + 1;
        printf("Jumlah bus yang dibutuhkan adalah %d", bus);
    }
}
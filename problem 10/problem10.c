#include<stdio.h>
void main(){
    //input berapa hari yang lalu , hari ini adalah hari senin
    // hari apa hari yang lalu

    int hari, hari_lalu;
    printf("Masukkan hari yang lalu : \n");
    scanf("%d", &hari);
    hari_lalu = hari % 7;
    if(hari_lalu == 0){
        printf("%d Hari yang lalu adalah hari senin", hari);
    }else if(hari_lalu == 1){
        printf("%d Hari yang lalu adalah hari minggu", hari);
    }else if(hari_lalu == 2){
        printf("%d Hari yang lalu adalah hari sabtu", hari);
    }else if(hari_lalu == 3){
        printf("%d Hari yang lalu adalah hari jumat", hari);
    }else if(hari_lalu == 4){
        printf("%d Hari yang lalu adalah hari kamis", hari);
    }else if(hari_lalu == 5){
        printf("%d Hari yang lalu adalah hari rabu", hari);
    }else if(hari_lalu == 6){
        printf("%d Hari yang lalu adalah hari selasa", hari);
    }

}
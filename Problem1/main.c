#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jammasuk,jamkeluar,lamawaktu,bayaran;

    printf("Masukkan jam masuk anda\n");
    scanf("%d",&jammasuk);
    printf("Masukkan jam keluar anda\n");
    scanf("%d",&jamkeluar);

    lamawaktu = jamkeluar - jammasuk;
    if(lamawaktu<=0){
       lamawaktu=lamawaktu + 12;
    }
    printf("waktu bekerja anda adalah %d \n",lamawaktu);

    if(lamawaktu<=8){
        bayaran = 30000 * lamawaktu;
    }
    else{
        bayaran = 240000 + (lamawaktu-8)*40000;
    }
    printf("Gaji Anda adalah %d",bayaran);



    return 0;
}

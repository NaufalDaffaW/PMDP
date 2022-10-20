#include <stdio.h>

int main()
{
    int jammasuk,menitmasuk,jamkeluar,menitkeluar;
     
    printf("Masukkan jam masuk anda (jj:mm)\n");
    scanf("%02d:%02d",&jammasuk,&menitmasuk);
    printf("Masukkan jam keluar anda (jj:mm)\n");
    scanf("%02d:%02d",&jamkeluar,&menitkeluar);

    //lama waktu dalam menit
    int lamawaktu = (jamkeluar - jammasuk)*60 + (menitkeluar - menitmasuk);
    if(lamawaktu<=0){
       lamawaktu=lamawaktu + 12*60;
    }
    printf("lama waktu anda adalah %d menit \n",lamawaktu);

    //lama waktu dalam jam dan menit
    int lamajam = lamawaktu/60;
    int lamamenit = lamawaktu%60;
    printf("lama waktu anda adalah %d jam %d menit",lamajam,lamamenit);

    return 0;
}

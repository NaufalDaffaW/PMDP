#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputan;
    int R1,R2,R3;
    float nilai;
    R1=100;
    R2=100;
    R3=100;
    printf("Nilai Resistor :\n R1=100 \n R2=100 \n R3=100\n");
    printf("Silahkan Pilih salah salah satu : \n a. Seri \n b. Paralel \n");
    scanf("%c",&inputan);
    if(inputan=='a'){
        nilai = R1 + R2 + R3;
    }
    else if(inputan=='b'){
        nilai = 1 / (float)R1 + 1 / (float)R2 + 1 / (float)R3;
        nilai = 1 / nilai ;
    }
    else{
        printf("Pilihan anda tidak termasuk dalam daftar");
        return 0;
    }
    printf("Nilai Resistor = %.1f",nilai);
    return 0;

}

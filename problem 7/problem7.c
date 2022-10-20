#include <stdio.h>
void main()
{
	int t1,t2;

	printf("Masukkan koordinat X dan Y : ");
    scanf("%d %d",&t1,&t2);

    //menentukan kuadran dari titik koordinat x dan y
    if( t1 > 0 && t2 > 0)
    {
        printf("Titik (%d,%d) berada pada kuadran I",t1,t2);
    }
    else if( t1 < 0 && t2 > 0)
    {
        printf("Titik (%d,%d) berada pada kuadran II",t1,t2);
    }
    else if( t1 < 0 && t2 < 0)
    {
        printf("Titik (%d,%d) berada pada kuadran III",t1,t2);
    }
    else if( t1 > 0 && t2 < 0)
    {
        printf("Titik (%d,%d) berada pada kuadran IV",t1,t2);
    }
    else if( t1 == 0 && t2 == 0)
    {
        printf("Titik (%d,%d) berada pada titik pusat",t1,t2);
    }
    else if( t1 == 0 && t2 != 0)
    {
        printf("Titik (%d,%d) berada pada sumbu Y",t1,t2);
    }
    else if( t1 != 0 && t2 == 0)
    {
        printf("Titik (%d,%d) berada pada sumbu X",t1,t2);
    }
}

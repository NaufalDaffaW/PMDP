
#include <stdio.h>

// int main(){
// //print piramid *
// //      *
// //     ***
// //    *****
// //   *******

// int i,j,k;
// for(i=1;i<=4;i++){
//     for(j=1;j<=4-i;j++){
//         printf(" ");
//     }
//     for(k=1;k<=2*i-1;k++){
//         printf("*");
//     }
//     printf("\n");
// }


// }



int main()
{
    printf("Masukkan jumlah data: ");
    int n,data,jumlah = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data);
        jumlah = jumlah + data;
    }
    printf("Jumlah ke-%d data adalah %d \n", n, jumlah);
}

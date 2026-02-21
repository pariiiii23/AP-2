#include <stdio.h>
#include <conio.h>

int main() {
    char nama[50], kom[2];
    int nim;
    float ip;

    printf("Hello Wold !! \n");

    printf("Masukkan Nama : ");
    gets(nama);

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    /*Ini Output*/

    printf("Nama : ");
    puts(nama);

    printf("%d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("%f\n", ip);
    printf("Press any button to continue...");
    getch();
}
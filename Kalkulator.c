/* Program Kalkulator */
/* Program Kalkulator penjumlahan, pengurangan, perkalian, pembagian, pemangkatan (pangkat > 1),
dan integral tentu menggunakan pendekatan riemann metode trapesium */

#include <stdio.h>
#include <math.h>

/* Prototype Fungsi */
/* Fungsi Penjumlahan */
float penjumlahan (float a, float b)
/* Fungsi menerima 2 float dan menjumlahkannya (a + b)*/
{
/* KAMUS LOKAL */

/* ALGORITMA */
    return a + b;
}

/* Fungsi Penngurangan */
float pengurangan (float a, float b)
/* Fungsi menerima 2 float dan mengurangkannya (a - b)*/
{
/* KAMUS LOKAL */

/* ALGORITMA */
    return a - b;
}

/* Fungsi Perkalian */
float perkalian (float a, float b)
/* Fungsi menerima 2 float dan mengalikannya (a * b)*/
{
/* KAMUS LOKAL */

/* ALGORITMA */
    return a * b;
}

/* Fungsi Pembagian */
float pembagian (float a, float b)
/* Fungsi menerima 2 float dan membaginya (a / b)*/
{
/* KAMUS LOKAL */

/* ALGORITMA */
    return a / b;
}

/* Fungsi perpangkatan */
float perpangkatan (float a, float b)
/* Fungsi menerima 2 float dan membaginya (a ^ b) */
{
/* KAMUS LOKAL */

/* ALGORITMA */
    return pow(a, b);
}

/* Fungsi Integral Riemann */
float integralRiemann (float a, float b, int partisi)
/* Fungsi menghitung integral tertentu dari y = x^3 + x + 1 menggunakan Riemann */
{
/* KAMUS LOKAL */
float luas, delta;
/* ALGORITMA */
    luas = 0;
    delta = (b - a) / partisi;
    while (a < b) {
        luas = luas + (delta * ((pow(a, 3) + a + 1) + (pow((a + delta), 3) + (a + delta) + 1))/2);
        a = a + delta;
    }
    return luas;
}

int main() {
/* KAMUS */
    float a, b;
    int operasi, partisi; 

/* ALGORITMA */
/* input */
    printf("========================================\n");
    printf("===========PROGRAM KALKULATOR===========\n\n");
    printf("Pilih operasi yang diinginkan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Perpangkatan\n");
    printf("6. Integral tentu (trapesium Riemman)\n");
    printf("Pilih operasi (1 - 6): ");
    scanf("%d", &operasi);

/* Kalkulator */
    if (operasi == 1 || operasi == 2 || operasi == 3 || operasi == 4 || operasi == 5) {
        printf("\nMasukan bilangan pertama: ");
        scanf("%f", &a);
        printf("Masukan bilangan kedua: ");
        scanf("%f", &b);
        if (operasi == 1) {
            printf("\n==============PENJUMLAHAN===============\n");
            printf("%f + %f = %f\n", a, b, penjumlahan(a, b));
        }
        else if (operasi == 2) {
            printf("\n==============PENGURANGAN===============\n");
            printf("%f - %f = %f\n", a, b, pengurangan(a, b));
        }
        else if (operasi == 3) {
            printf("\n===============PERKALIAN================\n");
            printf("%f x %f = %f\n", a, b, perkalian(a, b));
        }
        else if (operasi == 4) {
            printf("\n===============PEMBAGIAN================\n");
            printf("%f / %f = %f\n", a, b, pembagian(a, b));
        }
        else {
            printf("\n==============PERPANGKATAN==============\n");
            printf("%f ^ %f = %f\n", a, b, perpangkatan(a, b));
        }
    } else if (operasi == 6) {
        printf("\nMasukan batas kiri: ");
        scanf("%f", &a);
        printf("Masukan batas kanan: ");
        scanf("%f", &b);
        printf("Masukan banyak partisi: ");
        scanf("%d", &partisi);
        printf("\n================INTEGRAL================\n");
        printf("Integral x^3 + x + 1 dari %f sampai %f = %f\n", a, b, integralRiemann(a, b, partisi));
    return 0;
    } else {
        printf("Input tidak valid\n");
    }

    return 0;
}
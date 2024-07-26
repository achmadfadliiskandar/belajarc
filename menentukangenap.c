#include <stdio.h>

void main(){
    printf("Percabangan menentukan nilai persen\n");
    // kondisi percabangan menggunakan if
    printf("\n==  Program Menentukan Nilai Persen == ");
    int nilai = 0;

    printf("\ninputkan nilai : ");
    scanf("%i",&nilai);

    if (nilai % 2)
    {
        printf("\n nilai yang anda inputkan berupa ganjil\n");
    }else
    {
        printf("\n nilai yang anda inputkan berupa genap\n");
    }
}
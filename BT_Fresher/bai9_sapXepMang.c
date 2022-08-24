#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapXepTangDan(int x[]){
    for (int i = 0; i < 5-1; i++)
    {
        int viTriNhoNhat = i;
        for (int j = i+1; j < 5; j++)
        {
            if(x[j] < x[viTriNhoNhat]){
                viTriNhoNhat = j;
            }
        }
        swap(&x[viTriNhoNhat], &x[i]);
    }
}

void sapXepGiamDan(int x[]){
    for (int i = 0; i < 5-1; i++)
    {
        int viTriLonNhat = i;
        for (int j = i+1; j < 5; j++)
        {
            if(x[j] > x[viTriLonNhat]){
                viTriLonNhat = j;
            }
        }
        swap(&x[viTriLonNhat], &x[i]);
    }
}

void xuatMang(int x[]){
    // printf("\nMang sau khi sap xep la: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    
}

int main(){
    int mang[5] = {3, 2, 1, 4, 5};
    sapXepTangDan(mang);
    printf("\nSap xep mang tang dan: ");
    xuatMang(mang);
    sapXepGiamDan(mang);
    printf("\nSap xep mang giam dan: ");
    xuatMang(mang);
}
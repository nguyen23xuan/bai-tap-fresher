#include <stdio.h>

int mang[6] = {1,1,3,3,3,3};
int mang2[6] = {0};

void xuatHienNhieu(int x[]){
    for (int i = 0; i < 6; i++)
    {
        for(int j = i; j < 6; j++){
            if(x[i] == x[j]){
                mang2[i] = mang2[i] + 1;
            }
        }
    }
}

void xuatMang(int x[]){
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", mang2[i]);
    }
    
}

void timMax(int x[]){
    int max = x[0];
    int viTriMax = 0;
    for (int i = 0; i < 6; i++)
    {
        if(max < x[i]){
            max = x[i];
            viTriMax = i; 
        }
    }

    for(int j = 0; j<6; j++){
        if(x[viTriMax] == x[j]){
            printf("\nGia tri xuat hien nhieu la: %d", mang[j]);

            printf("\nCac vi tri la: ");
            for (int l = 0; l < 6; l++)
            {
                if(mang[l] == mang[j]){
                    printf("%d ", l);
                }
            }
        }
    }
}

int main(){
    xuatHienNhieu(mang);
    // xuatMang(mang2);
    timMax(mang2);
}
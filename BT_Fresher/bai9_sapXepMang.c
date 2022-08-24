#include <stdio.h>

int tinhTienTaxi(int soKm){
    int soTien = 0;
    if(soKm <= 1){
        soTien = 5000;
        return soTien;
    }else if (soKm <= 30)
    {
        soTien = soKm*4000;
        return soTien;
    }else
    {
        soTien = soKm*3000;
        return soTien;
    }
}

int main(){
    printf("So tien phai tra la: %d VND\n", tinhTienTaxi(31));
}
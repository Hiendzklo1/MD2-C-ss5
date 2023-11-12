#include <stdio.h>
int main() {
    // Khai báo bi?n
    int soPhut;
    int phiThueBao = 25000; 
    int giaPhut1 = 600;     
    int giaPhut2 = 400;     
    int giaPhut3 = 200;     
    int giaPhut4 = 100;     
    printf("Nhap so phut su dung: ");
    scanf("%d", &soPhut);
    int cuocDienThoai = phiThueBao;
    if (soPhut > 50) {
        cuocDienThoai += (50 * giaPhut1);

        if (soPhut > 200) {
            cuocDienThoai += (150 * giaPhut2) + (200 * giaPhut3) + ((soPhut - 200) * giaPhut4);
        } else if (soPhut > 50) {
            cuocDienThoai += ((soPhut - 50) * giaPhut2);
        }
    } else {
        cuocDienThoai += (soPhut * giaPhut1);
    }
    printf("Cuoc dien thoai trong thang la: %d VND\n", cuocDienThoai);
}


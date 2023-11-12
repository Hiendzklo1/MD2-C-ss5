#include <stdio.h>
int main() {
    float tongThuNhap, tienGiamTru, thuNhapChiuThue, thueThuNhap, luongRong;
    printf("Nhap tong thu nhap cua nhan vien: ");
    scanf("%f", &tongThuNhap);
    printf("Nhap tien giam tru: ");
    scanf("%f", &tienGiamTru);
    thuNhapChiuThue = tongThuNhap - tienGiamTru;
    if (thuNhapChiuThue <= 5000000) {
        thueThuNhap = 0.05 * thuNhapChiuThue;
    } else if (thuNhapChiuThue <= 10000000) {
        thueThuNhap = 0.1 * thuNhapChiuThue;
    } else if (thuNhapChiuThue <= 18000000) {
        thueThuNhap = 0.15 * thuNhapChiuThue;
    } else if (thuNhapChiuThue <= 32000000) {
        thueThuNhap = 0.2 * thuNhapChiuThue;
    } else if (thuNhapChiuThue <= 52000000) {
        thueThuNhap = 0.25 * thuNhapChiuThue;
    } else if (thuNhapChiuThue <= 80000000) {
        thueThuNhap = 0.3 * thuNhapChiuThue;
    } else {
        thueThuNhap = 0.35 * thuNhapChiuThue;
    }
    luongRong = thuNhapChiuThue - thueThuNhap;
    printf("Thu nhap chiu thue: %.2f VND\n", thuNhapChiuThue);
    printf("Thue thu nhap: %.2f VND\n", thueThuNhap);
    printf("Luong rong: %.2f VND\n", luongRong);
}


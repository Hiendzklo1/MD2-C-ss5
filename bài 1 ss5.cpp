#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Nhap gia tri a, b, và c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    float x = -c/b; 
    if (a==0) {
        printf("PT bac nhat co nghiem la:%.2f", x);
    }else if(delta>0 && a!=0) {
    	x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem: x1 = %.2f và x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong trinh khong co nghiem thuc.\n");
    }
}


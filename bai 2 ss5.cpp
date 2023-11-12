#include<stdio.h>
int main(){
	float revenue, commission;
	printf("nhap doanh thu(trieu VND):");
	scanf("%f", &revenue);
	if(revenue<=100) {
    	commission = revenue*0.05;
	} else if (revenue <= 300) {
    	commission = revenue * 0.10;
    } else {
    	commission = revenue * 0.20;
	}
	printf("hoa hong cua dai ly la:%.2fTrieu VND\n",commission);
} 

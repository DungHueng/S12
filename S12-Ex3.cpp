#include<stdio.h>
long long giaithua=1;
long long tinhgiaithua(int n){
	for(int i=n;i>=1;i--){
	giaithua *= i;
	}
}
int main(){
	int a;
	long long ketqua;
	printf("moi ban nhap so\n");
    	scanf("%d",&a);
    	ketqua=tinhgiaithua(a);
	printf("giai thua cua %d = %lld\n",a,ketqua);
	
	return 0;
}

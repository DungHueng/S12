#include<stdio.h>
 void inra(int arr[],int n){
 	for(int i=0;i<n;i++){
 		printf("arr[%d] = %d\n",i,arr[i]);
	 }
 }
int main(){
	int n;
	printf("moi ban nhap kich thuoc mang \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("moi ban nhap gia tri arr[%d] \n",i);
 		scanf("%d",&arr[i]);
	 }
	 inra(arr,n);
	 return 0;
}

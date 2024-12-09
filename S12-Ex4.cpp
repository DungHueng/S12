#include<stdio.h>

  int solonnhat(int arr[],int n){
  	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			max=arr[i];
		}
	}
}

int main(){
	int a;
	   printf("moi ban nhap kich thuoc mang \n");
	   scanf("%d",&a);
	int arr[a];
       for(int i=0;i<a;i++){
        	printf("moi ban nhap gia tri arr[%d] \n",i);
         	scanf("%d",&arr[i]);
    	}
    int  ketqua=solonnhat(arr,a);
     printf("gia tri lon nhat la %d \n",ketqua);
	return 0;
}

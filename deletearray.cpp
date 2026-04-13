#include<stdio.h>
int main(){
	int arr[50],n,pos,i;
	printf("Enter no of ele: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Pos: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deletion: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

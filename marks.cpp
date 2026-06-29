#include<stdio.h>
int main(){
	int rollno,m1,m2,m3;
	char name[10];
	printf("Enter name:");
	scanf("%s",&name);
	printf("Enter roll numner:");
	scanf("%d",&rollno);
	printf("The marks are:");
	scanf("%d %d %d",&m1,&m2,&m3);
	printf("Full marks:%d\n",m1+m2+m3);
	float percent=(m1+m2+m3)*100/300;
	printf("Percentage:%.2f\n",percent);
	if(percent>=90){
		printf("E");
	}else if(percent>=80){
		printf("A");
	}else if(percent>=70){
		printf("B");
	}else{
		printf("Fail");
	}
	return 0;
}

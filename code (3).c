#include<stdio.h>
#define MAX 100
int main()
{
  int array[MAX],i,n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d",&array[i]);

  //write your code here.
  int largest=0;
  int secondlargest=0;
  for(i=0;i<n;i++){
    if(array[i]>largest){
      largest=array[i];
    }
  }
  for(i=0;i<n;i++){
    if(array[i]>secondlargest && array[i]<largest){
      secondlargest=array[i];
    }
  }
  printf("%d\n",largest);
  printf("%d",secondlargest);
	
  return 0;
}

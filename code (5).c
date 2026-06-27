#include<stdio.h>

int main() 
{
  int num;
  int den;

  scanf("%d", &num);
  scanf("%d", &den);
 
  // write your code here
  int lownum=0;
  int lowden=0;
  for(int i=1;i<den;i++){
    if(num%i==0 && den%i==0){
      num=num/i;
      den=den/i;
    }
  }
  printf("In lowest form = %d/%d",num,den);
  return 0;

}
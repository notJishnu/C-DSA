#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  //write your code here
  int num=n;
  int rev=0;
  int rem;
  while(num>0){
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
  }
  if(rev==n){
    printf("TRUE");
  }else{
    printf("FALSE");
  }
return 0;
}
#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  
  //write your code here
  for(int i=a;i<b;i++){
    int n=i;
    int sum=0;
    while(n>0){
      int digit=n%10;
      sum=sum+(digit*digit*digit);
      n=n/10;
    }
    if(sum==i){
      printf("%d\n",i);
    }
    
  }
  return 0;
}
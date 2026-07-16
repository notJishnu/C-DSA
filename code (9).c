#include<stdio.h>
int main()
{
  char sen[100];
  //write your code here
  int i;
  fgets(sen,sizeof(sen),stdin);
  for(i=0;sen[i]!='\0';i++){
    if(sen[i]!=' '){
      printf("%c",sen[i]);
    }
  }

  return 0;
}
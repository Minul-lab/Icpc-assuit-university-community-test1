#include <stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int sum(int x, int y);//function declaration formal perameter
  int result= sum(a,b);//funtion call actual perameter
  printf("%d",result);
  
  

}

int sum(int x, int y){ //function definition
  
  int c = x+y;// local variable
  return c;

}
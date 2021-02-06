#include <stdio.h>
 
int main() {
  int a,b,c,d,e,p;
 
  printf("Enter marks of Physics : ");
  scanf("%d",&a);
  printf("\nEnter marks of Chemistry : ");
  scanf("%d",&b);
  printf("\nEnter marks of Biology : ");
  scanf("%d",&c);
  printf("\nEnter marks of Mathematics : ");
  scanf("%d",&d);
  printf("\nEnter marks of Computer Science : ");
  scanf("%d",&e);
 
  p = (a+b+c+d+e)/5;
 
  printf("\nYou got %d %% marks and ",p);
 
  if(p>100){
    printf("Invalid marks assigned");
  }else if(p>=90 && p<=100){
    printf("Your grade is A");
  }else if(p>=80 && p<90){
    printf("Your grade is B");
  }else if(p>=70 && p<80){
    printf("Your grade is C");
  }else if(p>=60 && p<70){
    printf("Your grade is D");
  }else if(p>=40 && p<60){
    printf("Your grade is E");
  }else{
    printf("Your grade is F");
  }
 
  return 0;
}
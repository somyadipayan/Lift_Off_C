#include<stdio.h>
 
int main()
{
 int Size, i, a[50];
 int Even_Sum = 0, Even_index_Sum = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
 }
 for(i = 0; i < size; i=i+2)
 {
     Even_index_Sum = Even_index_Sum + a[i];
 }  
 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Even Positioned Numbers in this Array = %d ", Even_index_Sum);
 return 0;
}
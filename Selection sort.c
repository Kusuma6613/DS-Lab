#include<stdio.h>
int main(){
   int i, j, count, temp, number[25];

   printf("Enter number of elements you want to sort: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++){
      scanf("%d",&number[i]);
   }
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf("%d ",number[i]);

   return 0;
}
//OUTPUT
Enter number of elements you want to sort: 5
Enter 5 elements: 12
98
35
277
1000
Sorted elements: 12 35 98 277 1000
Process returned 0 (0x0)   execution time : 29.465 s
Press any key to continue.

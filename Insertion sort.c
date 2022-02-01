#include<stdio.h>

int main(){
   int i, j, count, temp, number[25];

   printf("Enter number of elements you want to sort: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);

   for(i=0;i<count;i++){
      scanf("%d",&number[i]);
   }
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf("%d ",number[i]);

   return 0;
}
//OUTPUT
Enter number of elements you want to sort: 8
Enter 8 elements: 12
1
56
34
32
78
76
90
Order of Sorted elements: 1 12 32 34 56 76 78 90
Process returned 0 (0x0)   execution time : 22.291 s
Press any key to continue.

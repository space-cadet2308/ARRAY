#include<stdio.h>
int main(){
   /* 2D array declaration*/
   // Syntax : type array_name[array_size_firstdimension][array_size_seconddimension];
   int twod_array[5][5];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for twod_array[%d][%d]:", i, j);
         scanf("%d", &twod_array[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", twod_array[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   /* Q1) Insert the elements in all the odd numbered position of the array*/

  int oa[2][3];

   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(i%2!=0 && j%2!=0){
            printf("Enter value for odd_arr[%d][%d]:", i, j);
            scanf("%d", &oa[i][j]);
            
         }
      }
      
   }
/*---------------------------------------------------------------------------------------------------*/
   /* Q2) Insert the elements in all the even numbered position of the array*/
   int ea[2][3];

   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(i%2==0 && j%2==0){
            printf("Enter value for twod_array[%d][%d]:", i, j);
            scanf("%d", &ea[i][j]);
            
         }
      }
      
   }

/*---------------------------------------------------------------------------------------------------*/
   /* Q3) Remove the elements from all the odd numbered position of the array*/
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(j%2!=0){
            for(int m = j-1;m<3;m++){
               twod_array[i][m] = twod_array[i][m+1];
            }
            
         }
      }
      
   }
/*---------------------------------------------------------------------------------------------------*/
   /* Q4) Remove the elements from all the even numbered position of the array*/
    for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(j%2==0){
            for(int m = j-1;m<3;m++){
               twod_array[i][m] = twod_array[i][m+1];
            }
            
         }
      }
      
   }
   /* Q5) Search the given element in the array and print it's position*/
   int element;

   printf("element to search for =");
   scanf("%d", &element);
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j] == element){
            printf("Element Found in %d,%d",i,j);
         }
      }
      
   }

   /* Q6) Check whether the array has non zero values in a position*/
    int position1,position2;
    
    printf("position =");
    scanf("%d,%d", &position1,&position2);
    if(twod_array[position1][position2] != 0)
    {
        printf("Non Zero Value Is Present\n");
    }
    else
    {
        printf("Zero Value Is Present\n");
    }

   /* Create one more ID array and compare the two ID arrays for values*/

   /* Create one more ID character array and compare the two ID char arrays for values*/

   /* Find the sum of all elements in an array*/
   int sum = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         sum += twod_array[i][j];
      }
      
   }
   printf("sum is %d\n",sum);
   /* Find the maximum elements in an array*/
   int max = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j]>max){
            max = twod_array[i][j];
         }
      }
      
   }
   printf("max element is %d\n",max);
   /* Find the minimum elements in an array*/
   int min = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j]< min){
            min = twod_array[i][j];
         }
      }
      
   }
   printf("min element is %d\n",min);

   return 0;
}
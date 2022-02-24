#include<stdio.h>
int main()
{
   //3D array declaration
   int threeD_array[3][3][3];
   //Declaring Counter variables for the loop which will also act as index numbers for the array elements
   int i, j, k, l ;
   //Creating Array by taking input from the user
   for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
		   printf("Enter value for threed_array[%d][%d][%d]:", i, j,k);
         scanf("%d", &threeD_array[i][j][k]);
     	   }
      }
   }
   //Displaying array elements
   printf("Three Dimensional Array Elements:\n");
   for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
          printf("%d ", threeD_array[i][j][k]);
         if(k==2)
          {
          printf("\n");
          }            
         }
         if(j==2)
          {
            printf("\n");
          }      
      }
   }


/* Search the given element in the array and print it's position*/

printf("Enter the Element to be Searched:");
int n,c;
int p=1;
scanf("%d", &n);
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            if (threeD_array[i][j][k]==n)
            {
               c+=1;
               printf("%d Found at Position %d \n",n,p);           
            }            
            p+=1;
         }
      }
   }
   printf("\n");
   if(c==0)
   {
      printf("Sorry! %d Not Found \n\n",n);
   }


/* Check whether the array has non zero values in a position*/

int pos;
int p2=1;
printf("Enter the Position you want to check for Non-Zero Value:");
scanf("%d", &pos);
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            if (p2==pos)
            {               
               if(threeD_array[i][j][k]!=0)
               {
                  printf("Non-Zero Value Found at Position %d\n\n",pos);
               }
               else
               {
                  printf("No Non-Zero Value found at Position %d\n\n",pos);
               }
            }
            p2+=1;
         }
      }
   }


/* Find All Non-Zero Elements in the Array and their positions*/

int c1=0;
int p1=1;
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            if (threeD_array[i][j][k]!=0)
            {
               c1+=1;
               printf("Non-Zero Value Found at position %d\n",p1);
            }
            p1+=1;
         }
      }
   }
   if (c1==0)
   {
      printf("No Non-Zero Values Found\n\n");
   }
   else
   {
      printf("%d Non-Zero Values Found \n\n",c1);
   }


/* Find the sum of all elements in the array*/

int sum;
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            sum+=threeD_array[i][j][k];
         }
      }
   }
   printf("Sum of all Elements in the Array = %d\n\n",sum);


/* Find the maximum element in the array*/

int max=0;
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            if (threeD_array[i][j][k]>max)
            {
               max=threeD_array[i][j][k];
            }
         }
      }
   }
   printf("%d is the Maximum Element in the Array\n\n",max);


 /* Find the minimum element in the array*/

int min=threeD_array[0][0][0];
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            if (threeD_array[i][j][k]<min)
            {
               min=threeD_array[i][j][k];
            }
         }
      }
   }
   printf("%d is the Minimum Element in the Array\n\n",min);


/* Insert the given number of elements into the specified position of the array such as first, last, mid*/

int num0;
int pos0=1;
printf("Enter the Number of Elements to be Inserted:");
scanf("%d",&num0);
int posi0[num0];  //Creating 1D array to store all the positions to be inserted in the 3d array
for(i=0; i<num0; i++)
{
   printf("Enter the Position to be Inserted:");
   scanf("%d",&posi0[i]);
}
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
            for(l=0;l<num0;l++)
            {
               if (pos0==posi0[l]) //Checking if the position matches the position to be inserted
               {
                   printf("Enter the Element to be Inserted:");
                   scanf("%d",&threeD_array[i][j][k]);
               }
            }
            pos0+=1;
         }
      }
   }


/* Remove the given number of elements from the array */

int num1;
int posi2=1;
printf("Enter the Number of Elements to be Removed:");
scanf("%d",&num1);
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {

             if(posi2<=(27-num1)) //Removing the given number of elements from the end of the array
             printf("%d ", threeD_array[i][j][k]) ;             
             posi2+=1;
             if(k==2)
             printf("\n");            
         }
         if(j==2)
          {
            printf("\n");
          }      
      }
   }


/* Remove the given number of elements from the specified position of the array such as first, last, mid*/

int num;
int posi1=1;
printf("Enter the Number of Elements to be Removed:");
scanf("%d",&num);
int posi[num];  //Creating 1D array to store all the positions to be removed from the 3d array
for(i=0; i<num; i++)
{
   printf("Enter the Position to be Removed:");
   scanf("%d",&posi[i]);
}
for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++) 
      {
      	for(k=0;k<3;k++) 
         {
             int flag=1;
            for(l=0;l<num;l++)
            {
               if (posi1==posi[l]) //Checking if the position matches the position to be removed
               flag=0;
            }
            posi1+=1;
            if (flag!=1)
            {
            if(k==2)
               printf("\n");
            continue;  //skipping the printing of the element to be removed
            }         
            else
            printf("%d ", threeD_array[i][j][k]);
            if(k==2)
            {
               printf("\n");
            }            
         }
         if(j==2)
          {
            printf("\n");
          }      
      }
   }

return 0;
}

// Credits - Aniket Singh (21BCE1004)
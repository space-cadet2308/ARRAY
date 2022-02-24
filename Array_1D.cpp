#include<stdio.h>
int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int arr[5];
   /*Counter variables for the loop*/
   int i ;
   for(i=0; i<5; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &arr[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
   {
    printf("%d ", arr[i]);
	}

	

//Insert one element into the array 

    int x, pos, n = 5;
 

	// element to be inserted
    printf("Enter the number to be inserted: ", x);
    scanf("%d", &x);
 
    // position at which element
    // is to be inserted
    printf("Enter the position at which element is to be inserted: ", pos);
    scanf("%d", &pos);
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 

// Insert the given number of elements into the array 	
// Remove the duplicate elements in an array
// Remove one element from the array 
	int z;
	
	printf("Enter the position to be removed: %d", z);
	scanf("%d", &z);
	
	for (i = z - 1; i < 4; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
	
	printf("array with removed element: %d", arr);
	
// Search the given element in the array and print it's position
	int toSearch, found;
	printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    //Assume that element does not exists in array 
    found = 0; 
    
    for(i=0; i<5; i++)
    {
        //If element is found in array then raise found flag and terminate from loop.
         
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    //If element is not found in array
    
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }
// Check whether the array has non zero values in a position
	
	 for (i = 0; i < 5; i++){
		if (arr[i] == 0)
			printf("\nthe array has zero value in a position.\n");
       
        else
        	
        	printf("\n the array has non zero value in a position. \n");
            break;
		}
    
// Create one more ID array and compare the two ID arrays for values*/
// Create one more ID character array and compare the two ID char arrays for values
	int arr2[5];
    

    for (i = 0; i < 5; i++) {
        printf("Enter numbers: ");
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] == arr2[i]) 
            printf("Not equal \n");
        
    else 
            printf("They are equal. \n");
        
    }
// O Find the sum of all elements in an array
	int sum=0;
	
	//adding all the elements in array through loop
	for(i=0; i<5; i++)
	{
		sum += arr[i]; 
	}
		
	printf("\nthe sum of all elements in an array: %d", sum);
	
// Find the maximum number of elements in an array
	//Calculate length of array arr    
	int length = sizeof(arr)/sizeof(arr[0]);    
        
    	//Initialize max with first element of array.    
    	int max = arr[0];    
        
    	//Loop through the array    
    	for (int i = 0; i < length; i++) {     
        //Compare elements of array with max    
       	if(arr[i] > max)
	       max = arr[i];    
    	}      
    	printf("\nLargest element present in given array: %d\n", max);    
    
   
// O Find the minimum number of elements in an array
	
	//Calculate length of array arr
	int length = sizeof(arr)/sizeof(arr[0]);
	
	//initialize min with first element of array.
	int min = arr[0];
	
	//loop through the array
	for (int i=0; i < length; i++){
		//Compare elements of array with min
		if(arr[i] < min) 
			min = arr[i];
	}
	printf("\nSmallest element present in given array: %d\n", min);
	

}

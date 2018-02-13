#ifndef CMSC257_A1SUPPORT_INCLUDED
#define CMSC257_A1SUPPORT_INCLUDED
#include <stdio.h>


////////////////////////////////////////////////////////////////////////////////
//
//  File          : cmsc257-s17-assign1-support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the 257 assignment #1.
//

//
// Functional Prototypes

int float_display_array(int  a[], int size){
// This function prints out the array of floating point values
	int i;
	for (i = 0; i<size; i++){
		printf("%lf\n",a[i]);
	}
	printf("\n")
}
int integer_display_array(int a[], int size){
	// This function prints out the array of integer values
        int i;
        for (i = 0; i<size; i++){
                printf("%d\n",a[i]);
        }
        printf("\n")
}
int float_evens(int a[], int size){
	// Return the number of even numbers in the array (float version)
	int i;
        for (i = 0; i<size; i++){
	if(a[i]%2==0){
                printf("%lf\n",a[i]);
		}        
	}
        printf("\n")

}


int integer_evens(int a[], int size){
	// Return the number of even numbers in the array (int version)
        int i;  
        for (i = 0; i<size; i++){
        if(a[i]%2==0){
                printf("%d\n",a[i]);
                }
        }
        printf("\n")
}
int countBits(unsigned int i){
	// Count the number of '1' bits in the binary representation
	int cout = 0;
	while(i){
	count += n & 1;
	n >>= 1;
	}
	return count;
}
int most_values(int a[], int size){
	// Print out the values with the most occurences in array
	int m = 0;
	int count[];
	int i;
	for(i=i; i<size; i++){
		if(a[m]==a[i]){
		count++;
		}	
	}	
	
}
unsigned short reverseBits(????);
        // Reverse the binary bit string

void binaryString(????);
        // Print the binary equivalent of the number passed

void integerQuickSort(????);
        // Sort the integer array using QuickSort algorithm
        

#endif // CMSC257_A1SUPPORT_INCLUDED


// C program for Babylonian  
// method for square root 
#include<stdio.h> 
  
/* Returns the square root of  
   n. Note that the function 
   will not work for numbers  
   which are not perfect  
   squares*/
unsigned int squareRoot(int n) 
{ 
    int x = n; 
    int y = 1; 
    while(x > y) 
    { 
        x = (x + y) / 2; 
        y = n / x; 
    } 
    return x; 
} 
  
// Driver Code 
int main() 
{ 
    int n;
   printf("Enter The Number : ");
  scanf("%d",&n); 
    printf("root of %d is %d \n", n, squareRoot(n)); 
    getchar(); 
}


#include <stdio.h>
#include <stdlib.h>

int main() {
   int m,n;
   int sum=0;
   int *ptr;
   
   printf("Enter the number of Initial elements you want: ");
   scanf("%d",&n);
   
   

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
}
   
   printf("Original Values: \n");
   for(int i=0;i<n;i++){
       printf("Enter Value %d: ",i+1);
       scanf("%d",&ptr[i]);
   }
    printf("\n");

   for (int i =0;i<n;i++){
       sum=sum+ptr[i];
   }
    printf("Initial Sum is %d\n",sum);
    printf("\n");
    
    
    m=n*2;
    
    ptr= (int*)realloc(ptr,m*sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
}
    
    printf("%d More Values: \n",m/2);
   for(int i=0;i<n;i++){
       printf("Enter Value %d: ",i+1);
       scanf("%d",&ptr[i]);
   }
    printf("\n");
    
    for (int i =0;i<n;i++){
       sum=sum+ptr[i];
   }
    printf("New Sum of a total of %d numbers is %d",m,sum);
    
    
    
    
    
    

    return 0;
}
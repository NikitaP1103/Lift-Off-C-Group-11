#include <stdio.h>
  
int main(){
    int inputArray[100], copyArray[100], elementCount, counter;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
     
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
        
    for(counter = 0; counter < elementCount; counter++){
        copyArray[counter] = inputArray[counter];
    }
     
    printf("Duplicate Array\n");
    for(counter = 0; counter < elementCount; counter++){
        printf("%d ", copyArray[counter]);
    }
          
    return 0;
}

#include <stdio.h>  
   
int main()  
{  

    int arr[100];
    
    int length = sizeof(arr)/sizeof(arr[0]);  
    int n,d; 
    scanf("%d %d",&n,&d);
     for(int i = 0; i < n; i++){  
        int j, first;  
        first = arr[0];  
      
        for(j = 0; j < length-1; j++){  
           
            arr[j] = arr[j+1];  
        }  
       
        arr[j] = first;  
    }  
        
    for(int i = 0; i < length; i++){  
        printf("%d ", arr[i]);  
    }  
    
    return 0;  
}  
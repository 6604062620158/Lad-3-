/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int score;
scanf("%d",&score);
if (score >= 68){
    if(score >= 85){
    printf("A");
        
    }else if(score >= 75){
        printf("B");
        
    }else {printf("C");}
    
}else{
    
    if(score >= 55){
        
        printf("D");
    }else{
        printf("F");
    }
    
    
}
    return 0;
}
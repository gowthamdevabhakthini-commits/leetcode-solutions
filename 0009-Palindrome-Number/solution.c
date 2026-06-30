#include<stdbool.h>
#include<stdio.h>
bool isPalindrome(int x) {
    int k=0;
       if(x<0 || ((x%10)==0)&&(x!=0)){
        return 0; 
       }
       else {
         while(x>k){
            k = k*10 + x%10;  
            x /= 10;
            }    
    } 
    return(x==k || x==k/10);
 }
 int main(){
    printf("\n %d \n",isPalindrome(12321));
    return 0;
 }
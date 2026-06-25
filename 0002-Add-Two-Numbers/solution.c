#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int val;
    struct ListNode* next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3=NULL;
    struct ListNode* temp1=l1;
    struct ListNode* temp2=l2;
    struct ListNode* temp3=l3;
    struct ListNode* newnode=NULL;
    if((l1->val==0)&&(l1->next==NULL)){
     return l2;   
    }
    else 
    if((l2->val==0)&&(l2->next==NULL)){
     return l1;   
    }
    while((temp1 != NULL)&&(temp2 != NULL)){
     newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
     newnode->val=temp1->val+temp2->val;
     newnode->next=NULL;
     if(l3==NULL){
        l3=newnode;
        temp3=l3;
     }  
     else{
        temp3->next=newnode;
     }
        temp3=newnode;
     temp1=temp1->next;
     temp2=temp2->next;
    }
    if(temp1==NULL){
        while(temp2 != NULL){
            newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=temp2->val;
            newnode->next=NULL;
            temp3->next=newnode;
            temp3=newnode;
            temp2=temp2->next;
            
        }
    }
    else
    if(temp2==NULL){
        while(temp1 != NULL){
            newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=temp1->val;
            newnode->next=NULL;
            temp3->next=newnode;
            temp3=newnode;
            temp1=temp1->next;
            
        }
    }
    temp3=l3;
    while(temp3->next != NULL){
        if(temp3->val>9){
            temp3->val=temp3->val-10;
            temp3=temp3->next;
            temp3->val=temp3->val+1;
        }
        else{
         temp3=temp3->next;   
        }
    }
    if(temp3->val>9){
        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=1;
        newnode->next=NULL;
        temp3->val=temp3->val-10;
        temp3->next=newnode;
        
    }
    
    return l3;
}
int main(){ 
    return 0;
}
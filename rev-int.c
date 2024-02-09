#include<stdio.h>
int stack[50];
int top=-1,max;
void push(int item){
    if (top<max)
    {
        top++;
        stack[top]=item;
        
    }
    
}
int main(){
    
}
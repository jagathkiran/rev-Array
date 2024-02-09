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
int pop(){
    int item;
    if (top>-1)
    {
        item=stack[top];
        top--;
    }
    return item;
}
int main(){
    int a[50];
    printf("Enter the size of the Array");
    scanf("%d",&max);
    printf("Enter the Array : ");
    for (int i = 0; i < max; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < max; i++)
    {
        push(a[i]);
    }
    for (int i = 0; i < max; i++)
    {
        printf("%d ",pop());
    }
}
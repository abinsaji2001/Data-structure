#include <stdio.h>
#include <stdlib.h>
#define max 4
int top =-1,a[max],n;
void push(int n)
{
   if (top == max - 1)
    {
        printf("\nOverflow!!\n");
        return;
    }
    else
    {
        top = top + 1;
        a[top] = n;
    }
}
void pop()
{    
    int del;
    if (top == -1)
    {
        printf("\nUnderflow!!\n");
        return;
    }
    else
    {   
        del=a[top];
        printf("\nPopped element: %d", a[top]);
        top = top - 1;
    }
}

void show()
{    
    int i;
    if (top == -1)
    {
        printf("\nUnderflow!!\n");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", a[i]);
    }
}
int main()
{
int op,n;
do
{
 printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the operation: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
           printf("\n enter any element to push");
           scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    while(1);
    return 0;
}


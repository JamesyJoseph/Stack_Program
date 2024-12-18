#include<stdio.h>
int stack[100],i,x,choice,top,n;

void push(void);
void pop(void);
void display(void);

int main()
{
top=-1;
printf("Enter the size of the stack");
scanf("%d",&n);
printf("\nStack operation using array");
printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
do
{
printf("Enter the choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
display();
break;

case 4:
printf("\nExit");
break;

default:
printf("\n Invalid choice");

}
}
while(choice!=4);

return 0;

}

void push()
{

if(top>=n-1)
{

printf("\nStack is overflow");
}

else
{
printf("Enter the value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}

}

void pop()
{
if(top<=-1)
{
printf("Stack is underflow");
}
else{
printf("The popped elements is %d",stack[top]);
top--;
}

}


void display()
{

if(top>=0){
printf("\n Elements in stack:\n");

for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}

}

else
{
printf("\n Stack is empty");
}

}






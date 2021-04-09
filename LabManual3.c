#include<stdio.h>
#include<conio.h>
#define MAX 4

int stack[MAX], item;
int ch, top = -1, status = 0;

/*PUSH FUNCTION*/

void push(int stack[], int item)
{
   if (top == (MAX - 1))
      printf("\n\nStack is Overflow");
   else
   {
      stack[++top] = item;
      status++;
   }
}

/*POP FUNCTION*/

int pop(int stack[])
{
   int itemdel;
   if (top == -1)
      printf("\n\nStack is Underflow");
   else
   {
      itemdel = stack[top--];
      status--;
      printf("\n Popped element is %d", itemdel);
   }
   return itemdel;
}

/* FUNCTION TO CHECK STACK IS PALINDROME OR NOT */

void palindrome(int stack[])
{
   int i, temp, count = 0;
   temp = status;
   if (top == -1)
      printf(" Stack is empty\n");
   else
   {
      for (i = 0; i < temp; i++)
      {
         if (stack[i] == pop(stack))
            count = count + 1;
      }
      if (temp == count)
         printf("\nStack contents are Palindrome");
      else
         printf("\nStack contents are not palindrome");
   }
}

void display(int stack[])
{
   int i;
   if (top == -1)
      printf("\nStack is Empty");
   else
   {
      printf("stack contents are\n");
      for (i = top; i >= 0; i--)
         printf("\n ------\n| %d |", stack[i]);
      printf("\n");
   }
}

/*MAIN PROGRAM*/

void main()
{
   do
   {
      printf("\n\n----MAIN MENU----\n");
      printf("\n1. PUSH (Insert) in the Stack");
      printf("\n2. POP (Delete) from the Stack");
      printf("\n3. PALINDROME check using Stack");
      printf("\n4. DISPLAY the contents of Stack");
      printf("\n5. Exit (End the Execution)");
      printf("\nEnter Your Choice: ");
      scanf("%d", & ch);
      switch (ch)
      {
      case 1:
         printf("\nEnter a element to be pushed: ");
         scanf("%d", & item);
         push(stack, item);
         display(stack);
         break;
      case 2:
         item = pop(stack);
         break;
      case 3:
         palindrome(stack);
         break;
      case 4:
         display(stack);
         break;
      case 5:
         exit(0);
      default:
         printf("\n Invalid choice");
         break;
      }  
   } while (ch != 5);
}
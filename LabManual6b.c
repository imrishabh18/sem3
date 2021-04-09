#include<stdio.h>
#include<conio.h>
#define MAX 4

int ch, front = 0, rear = 0, q[MAX], item;
void insert(int item)
{
  if (rear == MAX)
    printf("Linear Queue is Full\n");
  else
  {
    q[rear] = item;
    rear ++;
  }
}

void del()
{
  if (front == rear)
    printf("Linear Queue is underflow\n");
  else
  {
    item = q[front];
    printf("\nDeleted item is: %d", item);
    front ++;
  }
}

void display()
{
  int i;
  if ( front == rear )
    printf("\nLinear Queue is Empty");
  else
  {
    printf("\nContents of Linear Queue is:\n");
    for (i = front; i < rear; i++)
    {
      printf("%d\t", q[i]);
    }
  }
}

void main()
{
  do
  {
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
    printf("\nEnter the choice: ");
    scanf("%d", & ch);
    switch (ch)
    {
    case 1:
      printf("\nEnter the item to be inserted: ");
      scanf("%d", & item);
      insert(item);
      break;
    case 2:
      del();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
      break;
    }
  } while (ch != 4);
}
#include<stdlib.h>

#include<stdio.h>

int a[20], n, val, I, pos;
void create();
void display();
void insert();
void del();
void main() {
  int choice;
  do {
    printf("\n--------Menu-----------\n");
    printf("1.  Create\n");
    printf("2.  Display\n");
    printf("3.  Insert\n");
    printf("4.  Delete\n");
    printf("5.  Exit\n");
    printf("-----------------------------");
    printf("\nEnter your choice:\t");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      insert();
      break;
    case 4:
      del();
      break;
    case 5:
      exit(0);
    default:
      printf("\nInvalid choice:\n");
      break;
    }
  }
  while (choice != 5);
}
void create() {
  printf("\nEnter the size of the array elements:\t");
  scanf("%d", & n);
  printf("\nEnter the elements for the array:\n");
  for (int i = 1; i <= n; i++)
    scanf("%d", & a[i]);
}

void display() {
  int i;
  printf("\nThe array elements are:\n");
  for (i = 1; i <= n; i++)
    printf("%d\t", a[i]);
}

void insert() {
  printf("\nEnter the position for the new element:\t");
  scanf("%d", & pos);
  if (pos <= n) {
    printf("\nEnter the element to be inserted :\t");
    scanf("%d", & val);
    for (int i = n + 1; i >= pos; i--) {
      a[i + 1] = a[i];
    }
    a[pos] = val;
    n = n + 1;
  } else
    printf("array size exceeded\n");
}

void del() {
  printf("\nEnter the position of the element to be deleted:\t");
  scanf("%d", & pos);
  val = a[pos];
  if (pos <= n) {
    for (int i = pos; i <= n - 1; i++) {
      a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nThe deleted element is =%d", val);
  } else
    printf("position entered exceeds array limit\n");
}

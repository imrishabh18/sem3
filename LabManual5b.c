#include<stdio.h>
#include<math.h>

int count = 0;

void tower(int n, char src, char temp, char dest)
{
  if (n == 0)
    return;
  tower(n - 1, src, dest, temp);
  printf("\n Move disc %d from %c to %c", n, src, dest);
  count++;
  tower(n - 1, temp, src, dest);
}

void main()
{
  int n;
  printf("\n Enter the number of discs: \n");
  scanf("%d", & n);
  tower(n, 'A', 'B', 'C');
  printf("\n total number of moves = %d", count);
}
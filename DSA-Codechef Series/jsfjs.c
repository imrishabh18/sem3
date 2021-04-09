Program-2
#include <stdio.h>
#include <stdlib.h>

void main()
{
  float num1, num2, result = 0;
  char op;
  printf(“Enter two numbers\ n”);
  scanf(“ % f % f”, & num1, & num2);
  printf(“Enter the operator\ n”);
  scanf(“ % c”, & op);
  switch (op)
  {
  case "+":
    result = num1 + num2;
    break;
  case "-":
    result = num1 - num2;
    break;
  case "*":
    result = num1 * num2;
    break;
  case "/": if(num2!=0)
  {
    result = num1 / num2;
    break;
  } else
  {
    printf(“Division by 0 not possible\ n”);
    exit(1);
  }
  default:
    printf(“Invalid operator\ n”);
    exit(1);
  }

  printf("Result: %.2f %c %.2f = %.2f \n", num1, op, num2, result);
}

1.)
Enter two numbers
20 15
Enter the operator
/
Result:20/15=1.33
2.)
Enter two numbers
50 0
Enter the operator
/
Division by 0 not possible




Program-3
#include <stdio.h>
#include <math.h>

void main()
{
float a,b,c,disc,root1,root2,real,img;
printf("enter a,b,c values\n");
scanf("%f %f %f",&a,&b,&c);
if((a==0)&&(b==0))
{
printf("roots cannot be determined\n");
}
else if(a==0)
{
printf("linear  equation\n");
root1=-c/b;
printf("Root1=%.3f\n",root1);
}
else
{
disc=b*b-4*a*c;
if(disc==0)
{
printf("The roots are real and equal\n");
root1=root2=-b/(2*a);
printf("Root1=%.3f\n Root2=%.3f\n",root1,root2);
}
else if(disc>0)
{
printf("The roots are real and distinct\n");
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("Root1=%.3f\n Root2=%.3f\n",root1,root2);
}
else
{
printf("The roots are real and imaginary\n");
real=-b/(2*a);
img=sqrt(fabs(disc))/(2*a);
printf("Root1=%.3f+i%.3f\n Root2=%.3f-i%.3f",real,img,real,img);
}
}
}

OUTPUT -->
1.)
enter a,b,c values
1 1 1
The roots are real and imaginary
Root1=-0.500+i0.866 
Root2=-0.500-i0.866
2.)
enter a,b,c values
2 10 5
The roots are real and distinct
Root1=-2.254
Root2=-17.746


Program-4
#include<stdio.h>

void main() {
    int n, num, rem, rev = 0;
    printf("Enter the value\n");
    scanf("%d", & num);
    if (num > 0) {
      n = num;
      while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
      }
      printf("Reverse number=%d\n", rev);
      if (n == rev){
        printf("%d is a palindrome\n", n);
      }
      else{
        printf("%d is not a palindrome\n", n);
      }
    } else{
        printf("INVALID INPUT");
      }
}

Q4
OUTPUT -->
1.)
Enter a number
22
Reverse number=22
22 is a palindrome
2.)
Enter a number
123
Reverse number=321
123 is not a palindrome


Program-5
#include<stdio.h>
void main()
{
char name[20];
float units, charge=100;
printf("Enter the name of the user and number of units consumed\n"); scanf("%s%f", name, &units);
if(units<=200){
  charge+=units*0.80; //charge=charge+units*0.80
}
else if(units<=300){
  charge+=200*0.8+((units-200)*0.9);
}
else
{
charge+=200*0.8+100*0.9+((units-300)*1);
if(charge>400){
  charge+=+charge*0.15;
}
}
}

OUTPUT -->
Enter the name of the user and the number of units consumed
Abc 200
Your name is Rishabh Gupta
Total number of units are 200.00
Total charge is 260.00 for Mr./Mrs Abc
2.)
Enter the name of the user and the number of units consumed
Def 400
Your name is Def
Total number of units are 400.00
Total charge is 517.50 for Mr./Mrs Abc


Program-6
#include<stdio.h>
#include<string.h>
void  main()
{
int a[10],key,n,i,low,high,mid,found=0;
printf("enter the number of elements to read,n=");
scanf("%d",&n);
printf(“enter the elements in ascending order\n”);
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
printf("enter the name to search:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high&&!found)
{
  mid=(low+high)/2;
  if(a[mid]==key)
  found=1;
  else if(a[mid]<key)
  low=mid+1;
  else
  high=mid-1;
}
if(found==1){
  printf(“name found in position:%d”,mid+1);
}
else{
  printf(“name not found”);
}
}

OUTPUT -->
1.)
enter the number of elements to read,n  =5
enter the elements in ascending order
2 4 6 8 10
enter the name to search
6
name found in position:3
2.)
enter the number of elements to read,n  =5
enter the elements in ascending order
12 15 20 28 100
enter the name to search
15
name found in position:2


Program-7
#include<stdio.h>
#include<math.h>

int isprime(int);
void main()
{
int x;
printf("enter the number \n");
scanf("%d",&x);
if((x!=0) && (x!=1))
{
if(isprime(x))
{
printf("%d is a prime number\n",x);
}
else
{
printf("%d is not a prime number\n",x);
}
}
}
int isprime(int n)
{
int i;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0){
  return 0;
}
}
return 1;
}

OUTPUT -->
1.)
enter the number
23
23 is a prime number
2.)
123
123 is not a prime number


Program-8
#include<stdio.h>

void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
printf("Enter the order of matrix A\n");
scanf("%d %d",&m,&n);
printf("Enter the order of matrix B\n");
scanf("%d %d",&p,&q);
if(n!=p)
{
printf("Matrix multiplication  not possible\n");
}
else
{

printf("Enter the values for matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("Enter the values for matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

printf("The elements of matrix A\n");

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

printf("The elements of matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}

printf("The resultant matrix C\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

OUTPUT-->
1.
Enter the order of matrix A : 2 2
Enter the order of matrix B : 2 2
Enter the values for matrix A : 
1 2 3 4
Enter the values for matrix B : 
9 8 7 6
Matrix A: 1    2
          3    4
Matrix B: 9    8
          7    6
The resultant matrix after Matrix Multiplication
Matrix C: 23    20
          55    48 
2.
Enter the order of matrix A : 2 4
Enter the order of matrix B : 2 3
Matrix Multiplication is not possible.


Program-9
#include<stdio.h>
#include<math.h>
#define PI 3.142

void main()
{
int degree,i;
float x,nume,deno,term,sum=0;
printf("Enter the value of degree\n");
scanf("%d",&degree);
x=degree*(PI/180);
nume=x;
deno=1;
i=2;

do
{
term=nume/deno;
nume=-nume*x*x;
deno=deno*i*(i+1);
sum=sum+term;
i=i+2;
}while(fabs(term)>=0.000001);

printf("sine of %d=%.3f\n",degree,sum);
printf("sine using built-in function for %d=%.3f",degree,sin(x));
}

OUTPUT-->
1.
Enter the value in degree : 30
sin 30 = 0.500
Value from built-in function, sin 30 = 0.500
2.
Enter the value in degree : 60
sin 60 = 0.856
Value from built-in function, sin 60 = 0.856
3.
Enter the value in degree : 45
sin 45 = 0.705
Value from built-in function, sin 45 = 0.705
4.
Enter the value in degree : 90
sin 90 = 0.925
Value from built-in function, sin 90 = 0.925


Program-10
#include<stdio.h>
#include<stdlib.h>

void str_comp(char s1[],char s2[]);
void main()
{
char str1[50],str2[50];
int ch;
while(1)  
{
printf("Enter 1:String Compare 2: String concatenate 3:String length 4:Exit\n");
scanf("%d", &ch);
switch(ch)
{
case 1: printf("Enter the string one \n");
scanf("%s", str1);
printf("Enter the string two \n");
scanf("%s", str2);
str_comp(str1,str2);
break;
case 2: printf("Enter the string one \n");
scanf("%s", str1);
printf("Enter the string two \n");
scanf("%s", str2);
str_concat(str1,str2);
break;
case 3: printf("Enter the string \n");
scanf("%s", str1);
str_length(str1);
break;
case 4: exit(0);
}
}
}


void str_comp(char s1[50], char s2[50])
{
int i=0;
while(s1[i]==s2[i] && s1[i]!='\0')
  i++;
if(s1[i]<s2[i]){
  printf("String1 %s is less than string2 %s\n",s1,s2);
}
else if (s1[i]>s2[i]){
  printf("String1 %s is greater than string2 %s\n",s1,s2);
}
else{
  printf("String1 %s is equal to string2 %s\n",s1,s2);
}
}

void str_concat(char s1[50], char s2[50])
{
int i,j;
for(i=0;s1[i]!='\0'; i++);  
for (j=0;s2[j]!='\0'; j++,i++)
{
s1[i]=s2[j];
}
s1[i]='\0';
printf("After concatenation : %s\n ",s1);
}

void str_length(char s1[50])
{
int i;
for(i=0;s1[i]!='\0'; i++); 
  printf("The length of string %s is %d \n",s1,i);
}

OUTPUT -->
1.
                  List Of String Operations
1. String Compare
2. String Concatenate
3. String Length
4. Exit
Enter your choice: 1
Enter the first string : Bad
Enter the second string : Bat
String "Bad" is less than String "Bat"
2.

                  List Of String Operations
1. String Compare
2. String Concatenate
3. String Length
4. Exit
Enter your choice: 2
Enter the first string : Wel
Enter the second string : come
String after concatenation: Welcome
3.

                  List Of String Operations
1. String Compare
2. String Concatenate
3. String Length
4. Exit
Enter your choice: 3
Enter the string : Home
The length of the String "Home" is 4
4.

                  List Of String Operations
1. String Compare
2. String Concatenate
3. String Length
4. Exit
Enter your choice: 4


Program-11
#include<stdio.h>

void main()
{
int a[10],n,i,j,temp;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the values\n");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
printf("The original elements are\n");
for(i=0;i<n;i++){
  printf("%d\t",a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nThe sorted elements are\n");
for(i=0;i<n;i++){
  printf("%d\t",a[i]);
}
}

OUTPUT -->
1. 
Enter the number of elements :4
Enter the array elements: 
256   450   1   20 
The sorted elemnts:
1   20    256   450
2.
Enter the number of elements : 6
Enter the array elements: 
20    1   456    700   22   39
The sorted elemnts:
1   20    22   39   456   700 

 
Program-12
#include<stdio.h>
#include<math.h>

void main()
{
int s;
float n,d,x;
printf("Enter the value\n");
scanf("%f",&n);
if(n>=0)
{
for(s=1;s*s<=n;s++);
s--;
for(d=0.001;d<1.0;d+=0.001)
{
x=s+d;
if(x*x>n)
{
x=x-0.001;
break;
}
}
printf("Square root of %.3f=%.3f\n",n,x);
printf("Square root using inbuilt  function=%.3f\n",sqrt(n));
}
else{
  printf("Invalid  input\n");
}
}

OUTPUT -->
1.
Enter a number
4.52
Square root of 4.52 is 2.126
Square root of 4.52 using built-in function is 2.126
2.
Enter a number
-7.46
INVALID NUMBER


Program-13
#include<stdio.h>

struct student
{
char name[20];
int rollno, marks;
};

void main()
{
struct student s[20];
int n,i;
float total=0,avg_marks;

printf("Enter the number of students\n");
scanf("%d",&n);

printf("Enter the following details of students in the same column\n"); printf(“Roll No \t Name \t Marks\n”);

for(i=0;i<n;i++)
{
scanf("%d%s%d ",&s[i].rollno, s[i].name, &s[i].marks);
}

printf("\nStudent Details:\n");
printf("Roll No.\t Name\t\t Marks\n");

for(i=0;i<n;i++)
{
printf("%d\t %s\t %d\\n",s[i].rollno,s[i].name,s[i].marks);
}

for(i=0;i<n;i++)
{
total=total+s[i].marks;
}
avg_marks=total/n;
printf("The average marks:%f\n",avg_marks);
printf("The students scored above the average marks\n");
printf("Name\t\t Marks\n");
for(i=0;i<n;i++)
{
if(s[i].marks>avg_marks){
  printf("%15s : %d\n",s[i].name,s[i].marks);
}
}
printf("The students scored below the average marks\n");
printf("Name\t\t Marks\n");
for(i=0;i<n;i++)
{
if(s[i].marks<avg_marks){
  printf("%15s : %d\n",s[i].name,s[i].marks);
}
}
}

OUTPUT -->
1.
Enter the number of students: 4
Enter the following details of students:
Roll NO.          Name         Marks
    01               Ankita          95
    02               Ayush           90
    03               Tanishq         86
    04               Jai             85
Student details:
Roll NO.          Name         Marks
    01               Ankita          95
    02               Ayush           90
    03               Tanishq         86
    04               Jai             85
Average Marks = 89.000
Students with Marks above Average Marks:
Roll NO.          Name         Marks
   01                Ankita           95
   02                Ayush             90
Students with Marks above Average Marks:
Roll NO.          Name         Marks
    03               Tanishq         86
    04               Jai             85


  Program-14
  #include<stdio.h>
  #include<math.h>

  void main()
  {
  float a[10],*ptr, mean, std,sum=0,sumstd=0;
  int i,n;
  printf("enter the no of elements\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);
  }
  ptr=a;
  for(i=0;i<n;i++)
  {
  sum=sum+ptr[i];
  }
  mean=sum/n;
  for(i=0;i<n;i++)
  {
  sumstd=sumstd+pow((ptr[i]-mean),2);
  }
  std=sqrt(sumstd/n);
  printf("sum=%.3f\n",sum);
  printf("mean=%.3f\n",mean);
  printf("standard deviation=%.3f\n",std);
  }

  OUTPUT -->
  1.
  Enter the no. of elements: 5
  Enter the array elements:
  42.3      50.0     26.8     35.0     78.5
  Sum = 232.600
  Mean = 46.520
  Standard Deviation = 17.744
  2.
  Enter the no. of elements: 4
  Enter the array elements:
  20.4      28.0     33.5     51.9     
  Sum = 133.800
  Mean = 33.450
  Standard Deviation = 11.623


Program-15
#include<stdio.h>

int convertB_D(int num);
int iter=0,count=1;
void main()
{
int N,D;
printf("Enter the number in binary\n");
scanf("%d",&N);
D=convertB_D(N);
printf("decimal=%d\n",D);
}
int convertB_D(int num)
{
iter++;
if(iter!=1){
  count*=2;
}
if((num/10)==0){
  return (num*count);
}
return ((num%10)*count+convertB_D(num/10));
}

OUTPUT-->
1.
Enter the number in binary form: 11011
Decimal form: 27
2.
Enter the number in binary form: 111111
Decimal form: 63



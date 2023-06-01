
  priti
1.
#include<stdio.h>
int main(){
  //enter the your name
printf("priti");
return 0;
}
output
priti

2.
#include<stdio.h>
int main(){
  //enter the your age
printf("age=16");
return 0;
}
output
 age=16

3.
#include<stdio.h>
int main(){
  //enter the age
int age priti, tirupati;
printf("age priti =17, tirupati =16");
return 0;
}
output
age of priti =17, tirupati =16

4.
#include<stdio.h>
int main(){
  //enter the your brith date
int number =31122006;
printf("%d", number);
return 0;
}
output
31122006

5.
#include<stdio.h>
int main(){
  //enter the num1 float
float num1 =9.254;
  //enter the num2 double
double num2 =255.23;
printf("%f %lf", num1, num2);
return 0;
}
output
9.254000 255.230000

6.
#include<stdio.h>
int main(){
  //enter the value of float
float number =4.687;
printf("%f", number);
return 0;
}
output
4.687000

7.
#include<stdio.h>
int main(){
  //enter the value of double
double numberr =85.975;
printf("%lf", number);
return 0;
}
output
85.975000

8.
#include<stdio.h>
int main(){
  //enter the value of char
char letter1 ='c';
char letter2 ='b';
printf("%c %c",letter1, letter2);
return 0;
}
output
c b

9.
#include <stdio.h>
int main() {
    double number;
  char alphabet;
    printf("Enter input values: ");
  scanf("%lf %c", &number, &alphabet);
    printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);
    return 0; 
}
output
Enter input value: 10
c
Number : 10.000000
Character : c

10.
#include<stdio.h>
int main(){
  int x =45;
  int result =x+45;
  printf("%d", result);
  return 0;
}
output
90

11.
#include<stdio.h>
int main(){
  int x =45;
  int result =x-45;
  printf("%d",x, result);
  return 0;
}
output 
45

12.
#include<stdio.h>
int main(){
  int x =8;
  int result =x*2;
  printf("%d",x, result);
  return 0;
}
output
8

13.
#include<stdio.h>
int main(){
  int x =2;
  int result =x/8;
  printf("%d",x, result);
  return 0;
}
output
2

14.
#include<stdio.h>
int main(){
  int x, y, result;
  printf("enter the value:");
  scanf("%d", &x, &y, &result);
  printf("%d", x, y, result);
  return 0;
}
output
enter the value 22
22

15.
#include<stdio.h>
int main(){
  int x, y;
  printf("Enter the number x:");
  scanf("%d", &x);
  printf("\nEnter the number y:");
  scanf("%d", &y);
  printf("%d", x, y);
  return 0;
}
output
Enter the number x 54
Enter the number y 12
54 12333000005

16\
/.
\+
#include<stdio.h>
int main(){
  int x, result;
  printf("enter the value:");
  scanf("%d",&x, &result);
  printf("%d",x, result);
  return 0;
}
output
enter the value 85
85

17.
#include<stdio.h>
int main(){
  int a =10;
  int b =85;
  int result =a+b;
  printf("%d", result);
  return 0;
}
output
95

18.
#include<stdio.h>
int main(){
  char a='5';
  int b =45;
  int result =a-b;
  printf("%d", result);
  return 0;
}
output
8

19.
#include<stdio.h>
int main(){
  double c =99;
  int d =36;
  double result =(int)c*d;
  printf("%lf", result);
  return 0;
}
output
3564.000000

20.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(45>0);
  printf("%d", value);
  return 0;
}
output 
1

21.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(16<4);
  printf("%d", value);
  return 0;
}
output 
0

22.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(85>=69);
  printf("%d", value);
  return 0;
}
  output
1

23.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(12==10);
  printf("%d", value);
  return 0;
}
output
0

24.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(58!=69);
  printf("%d", value);
  return 0;
}
output
1

25.
#include<stdio.h>
#include<stdbool.h>
int main(){
  bool value =(88<=98);
  printf("%d", value);
  return 0;
  }
output
1

26.
#include <stdio.h>
#include <stdbool.h>
int main() {
  bool value1 = true;
  bool value2 = false;
  printf("%d ", value1);
  printf(" %d", value2);
  return 0;
}
output
1  0

27.
#include<stdio.h>
#include<stdbool.h>
int main(){
  int num1 =5;
  int num2 =8;
  bool value =num1>num2;
  printf("%d", value);
  return 0;
}
output
0

28.
#include<stdio.h>
#include<stdbool.h>
int main(){
  int num1 =6;
  int num2 =2;
  bool value =num1<num2;
  printf("%d", value);
  return 0;
}
output
0

29.
#include <stdio.h>
#include <stdbool.h>
int main() {
  int age = 47;
  double height = 9.8;
  bool result = (age >= 18) && (height > 6.0);
  printf("%d ", result);
  return 0;
}
output
1

30.
#include<stdio.h>
#include<stdbool.h>
int main(){
  int age =16;
  double height =5.2;
  bool result =(age > 18) && (height > 6.0);
  printf("%d", result);
  return 0;
}
output
0

31.
#include <stdio.h>
#include <stdbool.h>
int main() {
  int age = 16;
  double height = 6.3;
  bool value = (age >= 18) || (height >= 6.0);
  printf("%d ", value);
  return 0;
}
output
1

32.
#include<stdio.h>
#include<stdbool.h>
int main(){
  int age =11;
  double height =4.20;
  bool value =(age >= 18) || (height >= 6.0);
  printf("%d", value);
  return 0;
}
output
0

33.
#include <stdio.h>
#include <stdbool.h>
int main() {
  int age = 16;
  bool value = !(age >= 18);
  printf("%d ", value);
  return 0;
}
output
1

34.
#include<stdio.h>
#include<stdbool.h>
int main(){
int  age =15;
bool value =!(age>=18);
printf("%d", value);
return 0;
}
output
1

35.
#include <stdio.h>
int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  if (age >= 18) {
    printf("You are eligible to vote");
  }
  return 0;
}
output
Enter your age: 14

36.
#include<stdio.h>
int main(){
  int number;
  printf("enter the number: ");
  scanf("%d", &number);
  if(number >= 55){
    printf("you are eligible to vote");
  }
  return 0;
}
output
enter the number: 15

37.
#include <stdio.h>
int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  if (age >= 18) {
    printf("You are eligible to vote");
  }
  if (age < 18) {
    printf("Sorry, you are not eligible to vote");
  }
  return 0;
}
output
Enter your age: 40
You are eligible to vote

38.
#include<stdio.h>
int main(){
  int number;
  printf("enter the number:");
  scanf("%d", &number);
  if(number >= 99 ){
    printf("you are eligible to vote");
  }
  if(number < 99){
    printf("sorry,you are not eligible to vote");
  }
  return 0;
  }
  output
Enter the number: 12
sorry,you are not eligible to vote

39.
#include<stdio.h>
int main(){
int number;
printf("enter the number:");
scanf("%d" ,&number);
if(number < 12) {
  printf("sorry,you are not eligible");
}
return 0;
} 
output
Enter the number: 8
sorry,you are not eligible

40.
#include<stdio.h>
int main(){
  int age =14;
  if(age >= 18) {
    printf("you are eligible to vote");
  }
  else{
    printf("sorry,you are not eligible to vote");
  }
  return 0;
}
output
sorry,you are not eligible to vote18
dash: 2: 18: not found

41.
#include<stdio.h>
int main(){
  int age =100;
  if(age >= 180) {
    printf("invalid age");
  }
  else if(age < 0) {
    printf("invalid age");
  }
  else if(age > 18) {
    printf("you are eligibal to vote:");
  }
  else{
    printf("sorry,you are not eligibal to vote:");
  }
  return 0;
}
output
you are eligibal to vote:50
dash: 2: 50: not found

42.
#include<stdio.h>
int main(){
  int age =80;
  if(age >= 100) {
    printf("invalid age");
  }
  else if(age < 0) {
    printf("invalid age");
  }
  else if(age == 18) {
    printf("you are eligibal to vote:");
  }
  else{
    printf("sorry,you are not eligibal to vote:");
  }
  returm 0;
  }
  output
you are eligibal to vote:20
dash: 2: 20: not found

  43.
#include <stdio.h>
int main() {
  int age = -5;
  if (age > 150 || age < 0) {
    printf("Invalid Age");
  }
else if (age >= 18) {
    printf("You are eligible to vote:");
  }
  else {
    printf("Sorry, you are not eligible to vote:");
  }
  return 0;
}
output
Invalid Age:-1
dash: 2: -1: not found

44.
#include<stdio.h>
int main(){
int age =-10;
if(age >= 80 || age < 5){
  printf("invalid age: ");
}
else if(age < 18){
  printf("you are eligibal to vote: ");
}
else{
  printf("sorry,you are eligibal to vote: ");
}
return 0;
}
output
invalid age: -5
dash: 2: -5: not found

45.
#include <stdio.h>
int main() {
  int age = 15;
  (age >= 18) ? printf("You can vote") : printf("You cannot vote");
  return 0;
}
output
You cannot vote4
dash: 2: 4: not found

46.
#include<stdio.h>
int main(){
  int age =14;
  (age >= 18) ? printf("you can vote"): printf("you cannot vote");
  return 0;
}
output
you cannot vote10
dash: 2: 10: not found

47.
#include <stdio.h>
int main() {
  char operator = '+';
  int num1 = 8;
  int num2 = 7;
  (operator == '+') ? (num1 + num2) : (num1 - num2);
  printf("%d", result);
  return 0;
}
output
  15

48.
#include<stdio.h>
int main(){
  char operator ='-';
  int num1 =10;
  int num2 =15;
  (operator == '-') ? (num1 + num2) : (num1 - num2);
  printf("%d", result);
  return 0;
  }
  output

  49.
  #include <stdio.h>
int main() {
  int number;
  printf("Enter a number between 1 to 7: ");
  scanf("%d", &number);
  switch(number) {
    case 1:
      printf("Sunday");
      break;
   case 2:
      printf("Monday");
      break;
    case 3:
      printf("Tuesday");
      break;
    case 4:
      printf("Wednesday");
      break;
   case 5:
      printf("Thursday");
      break;
    case 6:
      printf("Friday");
      break;
    case 7:
      printf("Saturday");
      break;
    default:
      printf("Invalid Number");
  }
return 0;
}
output
Enter a number between 1 to 7: 5
Thursday

49.
#include <stdio.h>
int main() {
  int number;
  printf("Enter a number between 1 to 7: ");
  scanf("%d", &number);
  switch(number) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      printf("Weekday");
      break;
          case 1:
       case 7:
      printf("Weekend");
      break;
      default:
      printf("Invalid Number");
  }
return 0;
}
output
Enter a number between 1 to 7: 3
Weekday

50.
#include<stdio.h>
int main(){
  int number;
  printf("enter the number:");
  scanf("%d", &number);
  switch(number){
    case 1:
    printf("case 1 is match");
  break;
  case 2:
  printf("case 2 is match");
  break;
  case 3:
  printf("case 3 is match");
  break;
  case 4:
  printf("case 4 is match");
  break;
  case 5:
  printf("case 5 is match");
  break;
  case 6:
  printf("case 6 is match");
  break;
  case 7:
  printf("case 7 is match");
  break;
  default:
  printf("default case is match");
  }
  return 0;
  }
output
enter the number:4
4

51.
#include <stdio.h>
int main() {
  char operator;
  printf("Choose an operator ['+', '-', '*', '/']: ");
  scanf("%c", &operator);
  double num1, num2;
  printf("Enter first number: ");
  scanf("%lf", &num1);
  printf("Enter second number: ");
  scanf("%lf", &num2);
  double result;
  switch(operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    default:
      printf("Invalid Operator");
  }
  printf("%.2lf", result);
return 0;
}
output
Choose an operator ['+', '-', '*', '/']: +
Enter first number: 14
Enter second number: 55
69.00

51.
#include <stdio.h>
int main() {
  while (3 < 5) {
    printf("while loop in C \n");
  }
  return 0;
}
output
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 
while loop in C 


52.
#include <stdio.h>
int main() {
  int count = 1;
  while (count < 5) {
    printf("while loop in C \n");
    printf("Count = %d \n", count);
    count = count + 1;
  }
  return 0;
}
output
while loop in C 
Count = 1 
while loop in C 
Count = 2 
while loop in C 
Count = 3 
while loop in C 
Count = 4 


53.
#include<stdio.h>
int main(){
  int count =2;
  while (count > 1) {
    printf("while loop in c \n");
    printf("count =%d \n", count);
    count = count + 1;
    }
    return 0;
}
output
while loop in c 
count =2 
while loop in c 
count =3 
while loop in c 
count =4 
while loop in c 
count =5 
while loop in c 
count =6 
while loop in c 
count =7 
while loop in c 
count =8 
while loop in c 
count =9 
while loop in c 
count =10 
while loop in c 
count =11 
while loop in c 
count =12 
while loop in c 
count =13 
while loop in c 
count =14 
while loop in c 
count =15 
while loop in c 
count =16 
while loop in c 
count =17 
while loop in c 
count =18 
while loop in c 
count =19 
while loop in c 
count =20 
while loop in c 
count =21 
while loop in c 
count =22 
while loop in c 
count =23 
while loop in c 
count =24 
while loop in c 
count =25 
while loop in c 
count =26 
while loop in c 
count =27 
while loop in c 
count =28 
while loop in c 
count =29 
while loop in c 
count =30 
while loop in c 
count =31 
while loop in c 
count =32 
while loop in c 
count =33 
while loop in c 
count =34 
while loop in c 
count =35 
while loop in c 
count =36 
while loop in c 
count =37 
while loop in c 
count =38 
while loop in c 
count =39 
while loop in c 
count =40 
while loop in c 
count =41 
while loop in c 
count =42 
while loop in c 
count =43 
while loop in c 
count =44 
while loop in c 
count =45 
while loop in c 
count =46 
while loop in c 
count =47 
while loop in c 
count =48 
while loop in c 
count =49 
while loop in c 
count =50 
while loop in c 
count =51 
while loop in c 
count =52 
while loop in c 
count =53 
while loop in c 
count =54 
while loop in c 
count =55 
while loop in c 
count =56 
while loop in c 
count =57 
while loop in c 
count =58 
while loop in c 
count =59 
while loop in c 
count =60 
while loop in c 
count =61 
while loop in c 
count =62 
while loop in c 
count =63 
while loop in c 
count =64 
while loop in c 
count =65 
while loop in c 
count =66 
while loop in c 
count =67 
while loop in c 
count =68 
while loop in c 
count =69 
while loop in c 
count =70 
while loop in c 
count =71 
while loop in c 
count =72 
while loop in c 
count =73 
while loop in c 
count =74 
while loop in c 
count =75 
while loop in c 
count =76 
while loop in c 
count =77 
while loop in c 
count =78 
while loop in c 
count =79 
while loop in c 
count =80 
while loop in c 
count =81 
while loop in c 
count =82 
while loop in c 
count =83 
while loop in c 
count =84 
while loop in c 
count =85 
while loop in c 
count =86 
while loop in c 
count =87 
while loop in c 
count =88 
while loop in c 
count =89 
while loop in c 
count =90 
while loop in c 
count =91 
while loop in c 
count =92 
while loop in c 
count =93 
while loop in c 
count =94 
while loop in c 
count =95 
while loop in c 
count =96 
while loop in c 
count =97 
while loop in c 
count =98 
while loop in c 
count =99 
while loop in c 
count =100  

54.
#include<stdio.h>
int main(){
  int count =2;
  while (count < 6) {
    printf("while loop in c \n");
    printf("count = %d \n", count);
    count = count + 1;
  }
  return 0;
}
output
while loop in c 
count 2 
while loop in c 
count 3 
while loop in c 
count 4 
while loop in c 
count 5 


55.
#include <stdio.h>
int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  int count = 10;
  while (count <= 30) {
    int product = number * count;
    printf(" %d * %d = %d \n", number, count, product);
    count = count + 5;
  }
  return 0;
}
output
Enter the number: 5
5 * 10 = 50 
 5 * 15 = 75 
 5 * 20 = 100 
 5 * 25 = 125 
 5 * 30 = 150 


56.
#include<stdio.h>
int main(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  int count =52;
  while  (count <= 80) {
    int product =number-count;
    printf("%d - %d = %d\n", number, count, product );
    count = count + 10;
  }
  return 0;
}
output
  Enter the number:8
8 - 52 = -44
8 - 62 = -54
8 - 72 = -64


   57.
   #include<stdio.h>
   int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int count =22;
    while  (count / 2) {
      int product = number/count;
      printf("%d / %d = %d\n", number, count, product);
      count = count + 10;
    }
    return 0;
   } 
   output
Enter the number:12
12 / 22 = 0
12 / 24 = 0
12 / 26 = 0
12 / 28 = 0
12 / 30 = 0
12 / 32 = 0
12 / 34 = 0
12 / 36 = 0
12 / 38 = 0
12 / 40 = 0
12 / 42 = 0
12 / 44 = 0
12 / 46 = 0
12 / 48 = 0
12 / 50 = 0

   58.
   #include<stdio.h>
   int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    int count =1;
    while  (count + 5) {
      int product = number + count;
      printf("%d + %d = %d\n", number, count, product);
      count = count + 2;
    }
    return 0;
   }
   output
Enter the number:4
4 / 22 = 0
4 / 23 = 0
4 / 24 = 0
4 / 25 = 0
4 / 26 = 0
4 / 27 = 0
4 / 28 = 0
4 / 29 = 0
4 / 30 = 0
4 / 31 = 0
4 / 32 = 0
4 / 33 = 0
4 / 34 = 0
4 / 35 = 0
4 / 36 = 0
4 / 37 = 0
4 / 38 = 0
4 / 39 = 0
4 / 40 = 0
4 / 41 = 0
4 / 42 = 0
4 / 43 = 0
4 / 44 = 0
4 / 45 = 0
4 / 46 = 0
4 / 47 = 0
4 / 48 = 0
4 / 49 = 0
4 / 50 = 0

   59.
   #include <stdio.h>
  int main() {
  int count = 1;
  do {
    printf("%d \n", count);
    count = count + 1;
  } 
  while (count < 5);
  return 0;
}
output
1 
2 
3 
4 

60.
#include<stdio.h>
int main(){
  int count =5;
  do {
    printf("%d \n", count);
    count = count + 10;
  }
  while (count < 2);
  return 0;
}
output

61.
#include<stdio.h>
int main(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  int count =10;
  while (count <= 1) {
    printf("%d \n", count);
    count = count + 1;
  }
  return 0;
}
output

62.
#include<stdio.h>
int main(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  int count =10;
  while (count <= 50) {
    printf("%d\n", number);
    count = count + 1;
  }
  return 0;
}
output
Enter the number:2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2

63.
#include <stdio.h>
int main() {
  for (int i = 0; i < 10; i++) {
    printf("%d", i);
  }
  return 0;
}
output
0123456789

64.
#include<stdio.h>
int main() {
  for(i = 1; i <=10; i++) {
    printf("%d", i);
  }
  return 0;
}
output
12345678910

65.
#include<stdio.h>
int main(){
  for(int i = 5; i <= 15; i++) {
    printf("%d", i);
  }
  return 0;
}
output
56789101112131415

66.
#include <stdio.h>
int main() {
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum = sum + i;
  }
  printf("Sum: %d", sum);
  return 0;
}
output
Sum: 5050

67.
#include<stdio.h>
int main() {
  int sum = 1;
  for(int i = 10; i <= 150; i++) {
    sum = sum + 1;
  }
  printf("sum: %d", sum);
}
output
sum: 142

68.
#include<stdio.h>
int main() {
int sum = 0;
for(int i = 2; i <=11; i++) {
  sum = sum + 1;
}
printf("sum: %d", sum);
return 0;
}
output
sum: 10

69.
#include <stdio.h>
int main() {
  int sum = 0;
  for (int i = 2; i <= 100; i = i + 2) {
    sum = sum + i;
  }
  printf("Sum: %d", sum);
  return 0;
}
output
Sum: 2550

70.
#include<stdio.h>
int main() {
  int sum =1;
  for(int i = 5; i <= 50; i = i + 3){
    sum = sum + 1;
  }
  printf("sum: %d", sum);
  return 0;
  }
output
sum: 17

71.
#include<stdio.h>
int main() {
  int sum = 12;
  for(int i = 3; i <= 60; i = i + 2){
    sum = sum + 1;
  }
  printf("sum: %d", sum);
  return 0;
}
output
sum: 41

72.
#include <stdio.h>
int main() {
  for (int i = 1; i <= 5; i++) {
    printf("%d \n", i);
    break;
  }
  return 0;
}
output
1

73.
#include<stdio.h>
int main() {
  for(int i = 2; i <= 40; i++){
    printf("%d \n", i);
    break;
  }
return 0;
}
output
2

74.
#include<stdio.h>
int main(){
  for (int i = 0; i <= 90; i++){
    printf("%d \n", i);
    break;
  }
  return 0;
}
output
0

74.
#include <stdio.h>
int main() {
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      break;
    }
    printf("%d \n", i);
  }
  return 0;
}
output
1
2

75.
#include<stdio.h>
int main() {
  for(int i = 4; i <=30; i++){
    if (i == 8) {
    break;
    }
    printf("%d \n", i);
  }
  return 0;
}
output
4
5
6
7

76.
#include<stdio.h>
int main() {
  for (int i = 40; i <= 400; i++) {
    if (i == 60) {
      break;
    }
    printf("%d \n", i);
  }
  return 0;
  }
  output
40 
41 
42 
43 
44 
45 
46 
47 
48 
49 
50 
51 
52 
53 
54 
55 
56 
57 
58 
59 
60 

77.
#include <stdio.h>
int main() {
  while (1) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
      break;
    }
    printf("%d \n", number);
  }
  return 0;
}
output
Enter a number: 22
22 
Enter a number: 88
88 
Enter a number: -44

78.
#include<stdio.h>
int main() {
  while (2) {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
      if (number > 4){
        break;
      }
      printf("%d \n", number);
  }
  return 0;
}
   output
Enter the number: 42
42 
Enter the number: 87
87 
Enter the number: -99

   79.
   #include<stdio.h>
   int main() {
    while (3) {
      int number;
      printf("Enter the number: ");
      scanf("%d", &number);
      if (number < 1) {
        break;
      }
      printf("%d \n", number);
    }
    return 0;
   } 
   output
Enter the number: 63
63 
Enter the number: -78


81.
#include<stdio.h>
int main(){
    int months;
    printf("enter a number between 1 to 12");
    scanf("%d", &months);
    switch (months){
        case 1:
        printf("januvary");
        break;
        case 2:
        printf("februvary");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("augest");
        break;
        case 9:
        printf("saptember");
        break;
        case 10:
        printf("octomber");
        break;
        case 11:
        printf("november");
        break;
        case 12:
        printf("december");
        break;
        default:
        printf("enter the number between 1 to 12");
        
    }
    return 0;
}
output
enter a number between 1 to 12: 8
augest

82.
#include <stdio.h>
int main() { 
  while (1) { 
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    if (number < 0 && number % 2 != 0)  {
      printf("%d", number);
    }
    else if (number >=0) {
        printf("positive value");
        break;
    }
    else {
        printf("negetive even number");
        continue;
    }
  }
  return 0;
}
output
Enter a number: 45
positive value

83.
#include<stdio.h>
int main() {
  int age = 8;
  if (age > 100 || age <= 0) {
    printf("invalid age:");
  }
    else if (age >= 18) {
    printf("you are eligible to vote:");
    }
    else {
    printf("sorry,you are eligible to vote:");
  }
  return 0;
}
output
sorry,you are eligible to vote:52
dash: 2: 52: not found

84.
#include<stdio.h>
int main() {
  int age = -10;
  if (age > 60 || age <= 5) {
    printf("invalid age:");
  }
  else if (age >= 18){
    printf("you are eligible to vote:");
  }
  else {
    printf("sorry,you are eligible to vote:");
  }
  return 0;
}
output
invalid age:4
dash: 2: 4: not found
2
dash: 3: 2: not found
5
dash: 4: 5: not found

85.
#include<stdio.h>
int main(){
  int age = 25;
  if (age > 60 || age <= 2) {
    printf("invalid age:");
  }
  else if (age >= 18) { 
    printf("you are eligible to vote:");
  }
  else {
    printf("sorry,you are eligible to vote:");
  }
  return 0;
}
output
you are eligible to vote:45
dash: 2: 45: not found
74
dash: 3: 74: not found
55
dash: 4: 55: not found

86.
#include<stdio.h>
int main() {
  int age = 1;
  if (age > 26 || age < 0) {
    printf("invalid age:");
  }
  else if (age <= 6) {
    printf("you are eligible to vote:");
  }
  else {
    printf("sorry,you are eligible to vote:");
  }
  return 0;
}
output
you are eligible to vote:12
dash: 2: 12: not found
-9
dash: 3: -9: not found

87.
#include <stdio.h>
void greet() {
  printf("Good Morning\n");
}
int main() {
  greet();
  greet();
  greet();
  return 0;
}
output
Good Morning
Good Morning
Good Morning

88.
#include<stdio.h>
void good () {
  printf("good night\n");
}
int main() {
  good () ;
  good () ;
  good () ;
  good ();
  return 0;
}
output
good night
good night
good night
good night

89.
#include<stdio.h>
void names () {
  printf("priti, radha, mohini\n");
}
int main() {
  names () ;
  names () ;
  names () ;
  names () ;
  return 0;
}
output
priti, radha, mohini
priti, radha, mohini
priti, radha, mohini
priti, radha, mohini

90.
#include <stdio.h>
void calculateSquare(int number) {
  int square = number * number;
  printf("Square of %d is %d \n", number, square);
}
int main() {
  calculateSquare(5);
  return 0;
}
output
Square of 5 is 25 

91.
#include<stdio.h>
int calculateadd(int number) {
  int add = number + number;
  printf("add of %d is %d \n", number, add);
}
int main() {
  calculateadd(6);
  return 0;
}
output
add of 6 is 12 

92.
#include<stdio.h>
int sub (int number) {
  int sub = number - number;
  printf("sub of %d is %d \n", number);
}
int main() {
  sub(2);
  return 0;
}
output
sub of 2 is -1486605672 

93.
#include<stdio.h>
int div (int number){
  int div = number / number;
  printf("div of %d is %d \n", number, div);
}
int main() {
  div (10);
  return 0;
}
output
div of 10 is 1 

94.
#include <stdio.h>
void addNumbers(int number1, int number2) {
  int sum = number1 + number2;
  printf("Sum of %d and %d is %d", number1, number2, sum);
}
int main() {
  addNumbers(8, 9);
  return 0;
}
output
Sum of 8 and 9 is 17

95.
#include<stdio.h>
int divnumbers(int num1, int num2) {
  int sum = num1 / num2;
  printf("sum of %d and %d is %d", num1, num2, sum);
}
int main() {
  divnumbers(4,2);
  return 0;
}
output
sum of 4 and 2 is 2

96.
#include<stdio.h>
int mulnumbers(int num1, int num2) {
  int sum = num1 * num2;
  printf("sum of %d and %d is %d", num1, num2, sum);
}
int main() {
  mulnumbers(6,5);
  return 0;
}
output
sum of 6 and 5 is 30

96.
#include <stdio.h>
int addNumbers(int number1, int number2) {
  int sum = number1 + number2;
  return sum;
}
int main() {
  int result = addNumbers(8, 9);
  printf("Result = %d", result);
  return 0;
}
output
Result = 17

97.
#include<stdio.h>
int subnumbers(int num1, int num2) {
  int sum = num1 - num2;
  return sum;
}
int main() {
  int result = subnumbers(2,8);
  printf("result = %d", result);
  return 0;
}
output
result = -6

98.
#include<stdio.h>
int divnumbers(int num1, int num2) {
  int sum = num1 / num2;
  return sum;
}
int main() {
  int result = divnumbers(5,10);
  printf("result = %d", result);
  return 0;
}
output
result = 0

99.
#include <stdio.h>
#include <math.h>
int main() {
  float result = sqrt(25);
  printf("Square Root is %f", result);
  return 0;
}
output
Square Root is 5.000000

100.
#include<stdio.h>
#include<math.h>
int main() {
  float result = sqrt(35);
  printf("square root is %f", result);
  return 0;
}
output
square root is 5.916080

101.
#include<stdio.h>
#include<math.h>
int main() {
  double result = sqrt(50);
  printf("square root of %lf", result);
  return 0;
}
output
square root of 7.071068

102.
#include<stdio.h>
#include<math.h>
int main() {
  double result = sqrt(20);
  printf("square root of %lf", result);
  return 0;
}
output
square root of 4.472136

103.
#include <stdio.h>
void number() {
    printf("the number is odd or even\n");
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
output
Enter an integer:44
44 is even.

104.
#include <stdio.h>
int main() {
    int dividend, divisor,quotient, remainder;
    printf("Enter the dividend:");
    scanf("%d", &dividend);
    printf("Enter the divisor:");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    printf("%d", quotient);
    remainder = dividend % divisor;
    printf("%d", remainder);
    return 0;
}
output
   Enter the dividend:25
Enter the divisor:5
50

105.
#include <stdio.h>
int main() {
    int a, b, result;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    result = a + b;
    printf("Add a and b: %d", result);
    result = a-b;
    printf("\nSub a and b: %d", result);
    result =a*b;
    printf("\nMul a and b:%d", result);
    result =a/b;
    printf("\nDiv a and b: %d", result);
    return 0;
}
output
Enter the value of a and b: 15 30
Add a and b: 45
Sub a and b: -15
Mul a and b: 450
Div a and b: 0

106.
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
output
Enter an alphabet: d
d is a consonant.

107.
#include <stdio.h>
int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  float num1;
  printf("Enter the number: ");
  scanf("%d", &num1);
  double num2;
  printf("Enter the num2: ");
  scanf("%d", &num2);
  char letter;
  printf("Enter the letter: ");
  scanf("%d", &letter);
  printf("%d %f %lf %c", number, num1, num2, letter);
  return 0;
}
output

108.
#include <stdio.h>
int main() {
  int c, d, result;
  printf("Enter the number of a and b: ");
  scanf("%d %d", &a, &b);
  result = c+d;
  printf("Add a and b: %d", result)
  result = c-d;
  printf("\nSub a and b: %d", result)
  result = c*d;
  printf("\nMula and b: %d", result)
  result = c/d;
  printf("\nDiv a and b: %d", result)
   return 0;
 } 
 output

109.
#include <stdio.h>
int sum(int n);
int main() {
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
  printf("sum = %d", result);
    return 0;
}
int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 
    else
        return n;
}
output

110.
#include <stdio.h>
int sum(int n);
int main() {
  int number, result;
  printf("Enter a integer: ");
  scanf("%d", &number);
  result =sum(number);
  printf("sum =%d", result);
  return 0;
}
int sum(int n) {
  if(n >= 0) 
  return n =sum(n-1);
  else
  return n;
}
output

111.
#include <stdio.h>
int sum(int n);
int main() {
  int number, result;
  printf("Enter a integer: ");
  scanf("%d", &number);
  result =sum(number);
  printf("sum =%d", result)
  return0;
}
int sum(int n){
if(n <= 0)
return n = sum(n - 1);
else
return n;
}
output

112.
#include <stdio.h>
int factorial(int number){
    if(number == 1 || number == 0) 
         return 1;
    else
         return (number * factorial(number - 1));
}
int main() {
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}
output

113.
#include <stdio.h>
int fact(int n);
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("fact of %d is %d\n", num);
  return 1;
}
int fact(int n) {
  if (num == 1 || num == 0)
  return 1;
else 
return(num * fact(n - 1));
}
output

114.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nAverage Mark = %0.2f", avg);
    getch();
    return 0;
}
output

115.
#include <stdio.h>
int main() {
  int values[5];
  printf("Enter 5 integers: ");
// taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }
  printf("Displaying integers: ");
  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
output

116.
#include <stdio.h>
int main() {
  int value[5];
  printf("Enter a integer:");
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &value[i]);
  }
  printf("displaying integer: ");
  for(int i = 0; i < 5; ++i) {
    printf("%d\n", value[i]);
  }
  return 0;
}
output

117.
#include <stdio.h>
int main() {
  int marks[10], i, n, sum = 0;
  double average;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }
  // explicitly convert sum to double
  // then calculate average
  average = (double) sum / n;
  printf("Average = %.2lf", average);
  return 0;
}
output

118.
#include<stdio.h>
int main() {
  int marks[5], i, n, sum=0;
  printf("Enter the number of element:");
  scanf("%d", &n);
  for(i = 0; i < 5; ++i){
    printf("Enter a number%d: i+1");
    scanf("%d", &marks);
    sum += marks[i];
  }
aver = (double)sum / n;
printf("aver = %.2lf", aver);
return 0;
}
output

119.
#include <stdio.h>
int main() {
  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };
  printf("%d\n", arr[0][0]);
  printf("%d", arr[1][2]);
  return 0;
}
output
1
6

120.
#include<stdio.h>
int main() {
  int arr[2][4] = {{1, 2, 5, 7},{ 4, 3, 41, 9}};
  printf("%d\n", arr[0][1]);
  printf("%d", arr[1][3]);
  return 0;
}
output

121.
#include<stdio.h>
int main() {
  int arr[5] ={1, 8, 6, 7, 2};
  printf("%d\n", arr[3]);
  return 0;
}
output

122.
#include <stdio.h>
int main() {
  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };
  arr[0][2] = 7;
  arr[1][1] = 8;
  printf("%d\n", arr[0][2]);
  printf("%d", arr[1][1]);
  return 0;
}
output
7
8

124.
#include <stdio.h>
int main() {
  int arr[3][4] ={{4, 1, 2, 8},{7, 6, 2, 5},{4, 6, 7, 8}};
  arr[0][3] =1;
  arr [2][2] =8;
  printf("%d\n", arr[0][3]);
  printf("%d", arr[2][2]);
  return 0;
  }
output
1
8

125.
#include <stdio.h>
int main() {
  int arr[4][5] ={{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};
   arr [3][4] =5;
   arr [4][1] =1;
   printf("%d\n", arr[3][4]);
   printf("%d", arr[4][1]);
   return 0;
}
output
5
1

126.
#include <stdio.h>
int main() {
  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };
  for (int i = 0; i < 2; ++i) {
    for(int j = 0; j < 3; ++j) {
      printf("%d    ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
output
1    2
3    4
5    6

127.
#include <stdio.h>
int main() {
  int arr[2][2] ={{1, 5},{8, 9}};
  for(int i = 0; i < 2; ++i) {
    for(int j = 0; j < 2; ++j) {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
output
1   9
8   5
128.
#include <stdio.h>
int main() {
  char str[20];
  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);
  printf("%s", str);
  return 0;
}
output

129.
#include <stdio.h>
int main() {
  char str[] = "Programiz";
  printf("%c\n", str[0]);
  printf("%c\n", str[1]);
  printf("%c\n", str[2]);
  printf("%c", str[3]);
  return 0;
}
output

130.
#include <stdio.h>
int main() {
  char str[] = "Programiz";
  str[2] = 'O';
  str[4] = 'R';
  printf("%s", str);
  return 0;
}
output

131.
#include <stdio.h>
int main() {
  char str[20];
  printf("Enter your name: ");
  scanf("%s", str);
  printf("%s", str);
  return 0;
}
output

132.
#inclide<stdio.h>
int main{
  char str[10];
  printf("Enter your name:");
  scanf("%s", str);
  printf("%s", str);
return 0;
}

133.
#include<stdio.h>
int main() {
  //create a variable
  int tirupati, priti;
  printf("Enter age of tirupati: ");  //geting user input
  scanf("%d", &tirupati);  scanning or storeing the input
  printf("Enter age of priti: ");  //asking the input
  scanf("%d", &priti);
  printf("%d %d", tirupati, priti);
  return 0;
}
output
Enter age of tirupati: 15
Enter age of priti: 16
15 16

134.
#include<stdio.h>
int main() {
  char str[]="ram sita"
  str [0]='R';
  str[4]='S';
  printf("%s\n", str[0]);
  printf("%s", str[4]);
  return 0;
}
output
Ram Sita

135.
#include<strio.h>
int main() {
  char str1[]="narayan"
  char str2[]="laxmi"
  for(int i = 0, i < 7, ++i){
    for(int j = 0, i < 5, ++j){
      printf("%s", str1, str2);
    }
    return 0;
  }

}
output

136.
#include<stdio.h>
int main() {
  char str[]="john williams"
  str[0]='x';
  printf("%s\n", str[0]);
  return 0;
}
output
xohn williams

137.
#include<stdio.h>
int main() {
  char str[]="julie bing"
  str[0]='x';
  printf("%s\n", str[0]);
  return 0;
}
output
xulie bing

138.
#include<stdio.h>
#include<string.h>
int main() {
  char food1[]="banana"
  char food2[]="apple"
  if(food1 > food2){
    printf("food1 is larger than food2");
  }
  else{
    printf("food2 is larger than food1");
  }
  printf("%s\n", food1, food2);
  return 0;
}
output
banana
food1 is larger than food2

139.
#include<stdio.h>
int main() {
  double *ptr;
  printf("Enter a salary:");
  scanf("%lf", &salary);
  double *ptr = &salary;
  double my_salary;
  printf("my_salary%p\n", *ptr);
  double new_salary;
  int result=*ptr*salary;
  printf("new_salary%d\n", *ptr);
  return 0;
}
output
Enter a salary:50000
my_salary 50000
new_salary 10000

140.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nAverage Mark = %0.2f", avg);
    getch();
    return 0;
}
output

141.
#include <stdio.h>
int factorial(int number)
{
    if(number ==1 || number ==0)
    {
         return 1;
    }
    else{
         return (number * factorial(number - 1));
    }
}
int main() 
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}
output

142.
#include<stdio.h>
int main() {
  int *ptr, age;
  age = 45;
  printf("%p\n", age);
  printf("%d", *ptr);
  return 0;
}
output

143.
#include<stdio.h>
int main() {
  char greetings[] = "hellow world";
  greetings[0] = 'j';
  printf("%s, greetings");
  return 0;
}
output

144.
#include<stdio.h>
int main() {
  int time = 20;
  if (time < 18) {
    printf("good bye");
  }
  else {
    printf("good evening");
  }
  return 0;
}
output

145.
#include<stdio.h>
int main() {
  int time = 20;
  if(time < 20) {
    printf("good night");
  } else if (time >20){
    printf("good moring");
  }else {
    printf(good bye);
  }
  return 0;
}
output

146.
#include<stdio.h>
int main () {
  int days = 5;
  switch(days) {
    case 3: printf("wednesday"); break;
    case 4: printf("thursday"); break;
    default :
    printf("weekend");
  }
  return 0;
}
output

147.
  #include<stdio.h>
int main () {
  int myage = 43;
  printf("%p", &myage);
  return 0;
}
output

148.
#include<stdio.h>
int main () {
  int mynumbers[] = {25, 30, 35, 40, 45};
  mynumbers[0] = 30;
  printf("%d, mynumbers[0]");
  return 0;
}
output

149.
#include<stdio.h>
int main () {
  int nmu1 = 5;
  int num2 = 4;
  int result= num1 + num2;
  printf("%d, result");
  return 0;
}
output

150.
#include<stdio.h>
int main() {
  int arr[5] = {1,2,3,4,5,6};
  int*ptr;
  int larger = *ptr;
  printf("%d", *ptr);
  for(int i = 0; i < 6; ++i)
    if(larger < *(arr+i)){
      (larger = *(arr+i)){
        printf("%d\n", &larger);
      }
    }
  printf("%p", *ptr);
  return 0;
}
  output

  151.
  #include<stdio.h>
    int addnumber(int *num1, int *num2, int *sum){
      *sum = *num1 + *num2;
      return sum;
    }
    int main() {
      int number1 =14;
      int number2 =54;
      int sum;
      int *result =addnumber(*number, *number2, *sum);
      printf("%d\n", *result);
      printf("%p", &result);
      return 0;
    }
    output

    152.
    #include<stdio.h>
    int subnumber(int *num1, int *num2, int *sum){
      *sum = *num1 - *num2;
      return sum;
    }
    int main() {
      int number1 =24;
      int number2 =4;
      int sum;
      int *result =subnumber(*number, *number2, *sum);
      printf("%d\n", *result);
      printf("%p", &result);
      return 0;
    }
output

153.
#include <stdio.h>
int main() {
 int x[4];
 int i;
 for(i = 0; i < 4; ++i) {
 printf("&x[%d] = %p\n", i, &x[i]);
 }
 printf("Address of array x: %p", x);
 return 0;  
}
output

154.
#include<stdio.h>
int main() {
  int x[5];
  int i;
  for(int i = 0; i < 5; ++i){
    printf("&x[%d] = %p\n", i, &x[i]);
  }
  printf("address of array x: %p", x);
  return 0;
  }
output
  
155.
#include<stdio.h>
int main() {
  int arr =[4];
  int* ptr;
  int*ptr = arr;
  printf("%d\n", ptr);
  printf("%p", *ptr);
  return 0;
}
output

156.

#include<stdio.h>
int main() {
  int i, x[6], sum = 0;
  printf("Enter 6 numbers:");
  for(i = 0; i < 6; ++i){
    scanf("%d", x+i);
    printf("sum = %d", sum);
    return 0;
  }  

#include <stdio.h>
#include <stdbool.h>

int main(){
  int age = 18;
  float cgpa = 9.3;
  double perccentage = 93.7352783879;
  char initial = 'M';
  char name[] = "Harshita";

  printf("Hello %c. %s. Your age is %d. Your cgpa is %.2f, and your percentage is %lf. ", initial, name, age, cgpa, perccentage);
  bool isStudent = true;
  if(isStudent == true){
    printf("You are a student in KL University. ");
  }
}
#include <stdio.h>

int main(){
  int rank;
  // output 
  printf("Enter a Star from 1 to 10 \n");
  // input
  scanf("%d",&rank);
  // &rank mean its storing input in the variable and & is showing location of memory for storing data
  printf("You given %d rank",rank);
  return 0;
}
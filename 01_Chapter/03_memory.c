#include <stdio.h>

int main(){
  // int
  int Gdev_age = 21;
  printf("%d \n",Gdev_age); 
  // \n for next line and %d for int type memory location
  printf("%d \n",sizeof(Gdev_age));
  // sizeof for checking int memory byte
  // 2 or 4 byte

  // float 
  float percentes = 71.50;
  printf("%f \n",percentes);
  // %f for float memory byte location
  printf("%d \n",sizeof(float));
  // 4 byte

  // charactor
  char hashtag = '#';
  printf("%c \n",hashtag);
  // %c for charactor memory location
  printf("%c",sizeof(hashtag));
  //  0 byte
  return 0;
}
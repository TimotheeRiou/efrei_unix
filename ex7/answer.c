
#include "unistd.h"

//You have to create a C function that displays the alphabet in one line and ends with a new line.

void alphabet(char o) {

  //print o
  write(1, &o, 1);

}

int main(){

  char o = 'a';

  while(o<='z'){

    alphabet(o);
    o++;
  }

  return(0);

}

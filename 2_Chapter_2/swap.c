#include <stdio.h>
#include <stdlib.h> 

void swap(int *pa, int*pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
}

int main(void) { 
  int a = 21;
  int b = 17;

  printf("main pre-swap: a: %d, b: %d \n", a, b);
  swap(&a, &b);
  printf("main post-swap: a: %d, b: %d \n", a, b);
}

// C is a call-by-value (also called a pass-by-value) language, 
// which means that when you provide an argument to a function, 
// the value of that argument is copied into a distinct variable for use within the function. 
// IN OTHER WORDS, ARGUMENTS ARE NOT IN-PLACE WRITABLE


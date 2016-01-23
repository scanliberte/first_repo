#include "func.h"

void gugudan_dy() {
  int i=0, k=0;
  
  for(i=1; i<10; i++) { //for1
    for(k=START; k<=END; k++) { //for1_1
      printf("%2d x%2d=%3d\t", k, i, k*i);
    }//end for1_1
    printf("\n");
  }//end for1
}

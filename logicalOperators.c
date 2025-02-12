#include <stdio.h>
int main() {
    /*
         And
      T T -> T
      T F -> F
      F T -> F
      F F -> F

         OR
      T T -> T
      T F -> T
      F T -> T
      F F -> F

    */

    int i = 5;
    int j = 7;

    int result1 = (i!=j) && (i<j);  //And --> && 
    printf("%d\n", result1);

    int result2 = (i!=j) || (i<j); //OR --> ||
    printf("%d\n", result2);

    return 0;
}
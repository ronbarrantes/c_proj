#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand(int limit) {
  srand(time(NULL));
  return (rand() % limit) + 1;
}

bool check(int rand_num, int num) {
  if (rand_num > num) {
    printf("Random number is bigger\n");
  }
  if (rand_num < num) {
    printf("Random number is smaller\n");
  }

  if (rand_num == num) {
    printf("Correct!\n");
    return true;
  }

  printf("number is %d\n", num);
  return false;
}

int main() {
  int number;
  int limit = 100;

  int rand_num = getRand(limit);

  while (true) {
    printf("Get the number: ");
    if (scanf("%d", &number) != 1) {
      printf("You're dumb, that is not a number\n");
      printf("Do you even know what a number is\n");

      int c;
      while ((c = getchar()) != '\n' && c != EOF)
        ;

      continue;
    }

    if (check(rand_num, number)) {
      break;
    }
  }

  return 0;
}

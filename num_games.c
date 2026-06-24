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

bool isNum(int *n) {
  if (scanf("%d", n) != 1) {
    printf("you're dumb, that is not a number\n");
    printf("do you even know what a number is\n");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  } else
    return false;

  return true;
}

int main() {
  int number;
  int limit = 100;

  int rand_num = getRand(limit);

  while (true) {
    printf("Get the number: ");

    if (isNum(&number)) {
      continue;
    }

    if (check(rand_num, number)) {
      break;
    }
  }

  return 0;
}

#include <stdio.h>
// #include <stdlib.h>

// INIT fn
// Check if file exist

int init() {
  FILE *filePointer;
  // check if file exist
  //
  //
  // if it doesn't then create it
  filePointer = fopen("file.csv", "r");

  if (filePointer == NULL) {
    printf("Did not open file\n");
    return 1;
  }

  fclose(filePointer);
  return 0;
}

// READ/WRITE Mechanism
// should be able to read and write from anywhere
// it can be like a csv
// id, is_completed, task

// CRUD Mechanism
// use for the inputs and pass the values to the correct read/write

// Start and Stop
// go into some kind of loop

int main(void) {
  if (!init()) {
    printf("Opened the file well\n");
  };

  printf("Todo app\n");
  return 0;
}

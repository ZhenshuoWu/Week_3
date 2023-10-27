#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
 char date[11];
 char time[6];
 int steps;
} FITNESS_DATA;

// This is your helper function. Do not change it in any way.
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        
        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);
}

// Complete the main function
int main() {
 FILE* file = fopen("FitnessData_2023.csv", "r");
 if (file == NULL) {
  printf("Could not open file\n");
  return 1;
 }

 FITNESS_DATA data[1000];  // most 1000 records
 char line[256];
 int count = 0;

 while (fgets(line, sizeof(line), file)) {
  char date[11], time[6], steps[10];
  tokeniseRecord(line, ",", date, time, steps);

  strcpy(data[count].date, date);
  strcpy(data[count].time, time);
  data[count].steps = atoi(steps);

  count++;
 }

 fclose(file);

 printf("Number of records in file: %d\n", count);

 for (int i = 0; i < 3; i++) {
  printf("%s/%s/%d\n", data[i].date, data[i].time, data[i].steps);
 }

 return 0;
}
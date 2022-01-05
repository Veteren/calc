#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./operations.h"

void usage(FILE *stream, char *program)
{
    fprintf(stream, "USAGE %s <operation> <arg1> <arg2> <arg3> ...\n    <operations>\n            + => add numbers to each other\n            - => subtract numbers to each other\n            x => multiply numbers to each other\n            x => divide numbers to each other\n", program);  
}


int main(int argc, char **argv)
{
  char *program = *argv++;
  if (*argv == NULL) {
	usage(stderr, program);
	fprintf(stderr, "ERROR: no operation is provided\n");
	exit(1);
  }
  char *op = *argv++;
  if (strcmp(op, "help") == 0) {
    usage(stderr, program);
	exit(1);
  } else if (strcmp(op, "+") == 0) {
	printf("result :%d\n", add(argv));
  } else if (strcmp(op, "-") == 0) {
    printf("result :%d\n", subtract(argv));
  } else if (strcmp(op, "x") == 0) {
    printf("result :%d\n", multiply(argv));
  } else if (strcmp(op, "/") == 0) {
    printf("result :%.2f\n", divide(argv));
  } else {
	fprintf(stderr, "ERROR: unknown operation %s\n", op);
	exit(1);
  }
  
  return 0;
}

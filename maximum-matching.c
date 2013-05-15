/*
 * =====================================================================================
 *
 *       Filename:  maximum-matching.c
 *
 *    Description:  Maximum Matching
 *
 *        Version:  1.0
 *        Created:  15/05/2013 10:26:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Vitor Freitas (vfs), vitorfs@gmail.com
 *                  Rodrigo Martins (rfm), drg.martins@gmail.com
 *        Company:  Universidade Federal de Juiz de Fora (UFJF)
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

char* ERROR_MESSAGE;

/*
 * The read_graph function takes a pointer to char as parameter which represents
 * the name of the file which contains the information of the graph we want 
 * to work. After reading the information, this function converts the text to 
 * a valid graph representation.
 * This function will return 0 in case of success or -1 if any error occur. 
 */
int read_graph(char* filename) {
  FILE *PTRFILE;
  
  PTRFILE = fopen(filename, "rt");
  
  if (PTRFILE == NULL) {
    ERROR_MESSAGE = "File doesn't exist.";
    return -1;
  }
  
  else {
    
  }

  return 0;
}

/*
 * The display_error procedure displays the error message for the user
 */
void display_error() {
  printf("%s\n", ERROR_MESSAGE);
  ERROR_MESSAGE = ""; // Clear the error handling variable for future usage
}

int main(int argc, char* argv[]) {
  int r;
  if (read_graph("graph") == -1) {
    display_error();
  }
  return 0;
}

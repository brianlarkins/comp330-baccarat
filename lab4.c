#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

#include <pthread.h>

#define NTHREADS  3
#define PLAYER    0
#define BANKER    1
#define CROUPIER  2

#define MAXCARDS  3

typedef enum { Go, Stop, Draw } cmd_t;
typedef enum { Unread, Read   } bufstate_t;


/* function prototypes */
void *player(void *arg);
void *banker(void *arg);
void  croupier(int nrounds);

/* global shared variables */

// add your variables here


void *player(void *arg) {
  return NULL;
}


void *banker(void *arg) {
  return NULL;
}


void croupier(int nrounds) {
}


int main(int argc, char **argv) {
  int nrounds = 0;

  if (argc != 2) {
    fprintf(stderr, "usage: %s <nrounds>\n", argv[0]);
    exit(1);
  }

  nrounds = atoi(argv[1]);

  if (nrounds <= 0)
    return 0;

  // create player and banker threads
  // call croupier() to run the game

  // join threads and clean up
}

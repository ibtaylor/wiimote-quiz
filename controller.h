#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "ending.h"
#include "rqueue.h"

struct controller_run_args {
  ending_t ending;
  rqueue_t buttonsq;
  rqueue_t commandsq;
};

void *controller_run(void *);

#endif

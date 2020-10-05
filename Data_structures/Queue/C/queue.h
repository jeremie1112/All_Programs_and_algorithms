#ifndef QUEUE_H
#define QUEUE_H
/*
 * Title: queue.h
 * Author: William Gherman
 * Date: 2020-10-04
 *
 * Description: Defines header file for the queue_t datatype with an int as the
 *              item type. Item type can be altered by changing the typedef.
 */

#include <stdbool.h>  /* C99+ only */

typedef int Item;
typedef struct queue_t *Queue;

Queue queue_create(void);
void queue_destroy(Queue q);
void queue_append(Queue, Item i);
void queue_remove_head(Queue q);
Item queue_head(Queue q);
Item queue_last(Queue q);
bool queue_is_empty(Queue q);

#endif

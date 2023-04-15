#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) return 0;
    node *hare = head;
    node *tortoise = head;

    while (1) {
        hare = hare->next;
        if (hare == NULL) {
            return 0;
        }
        hare = hare->next;
        if (hare == NULL) {
            return 0;
        }
        tortoise = tortoise->next;
        if (hare == tortoise) {
            return 1;
        }
    }
    return 0;
}
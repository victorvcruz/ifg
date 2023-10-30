# include <stdio.h>
# include <stdlib.h>
# include "list.h"

void append(List ** head, int val);
int remove_first(List ** head);
int removeByValue(List *head, int val);

int main() {
    List * head = (List *) malloc(sizeof(List));
    if (head == NULL) {
        return -1;
    }

    append(&head, 1503);
    append(&head, 1515);
    append(&head, 1500);
    append(&head, 1489);

    printf("%d\n", removeByValue(head, 1500));
}

void append(List ** head, int val) {
    List * next;
    next = (List *) malloc(sizeof(List));

    next->value = val;
    next->next = *head;
    *head = next;
}

int remove_first(List ** head) {
    int value;
    List * next = NULL;

    if (*head == NULL) {
        return -1;
    }

    next = (*head)->next;
    value = (*head)->value;
    free(*head);
    *head = next;

    return value;
}

int removeByValue(List *head, int val) {

    if (head->value == val) {
        free(head);
        return val;
    }

    List * current = head;
    List * next = NULL;
    while(current->next->value != val) {
        current = current->next;
    }

    next = current->next->next;
    free(current->next);
    current->next = next;
    return val;
}
# include <stdio.h>
# include <stdlib.h>
# include "list.h"

void push (List * head, int value);
int pop(List * head);

int main() {
    List * head = NULL;
    head = (List *) malloc(sizeof(List));
    if(head == NULL) {
        return 1;
    }

    push(head, 1);
    push(head, 2);
    push(head, 3);

    printf("%d\n", pop(head));
    printf("%d\n", pop(head));
    printf("%d\n", pop(head));
}

void push(List * head, int value) {
    head->total++;
    List * current = head;

    while(current->next != NULL) {
        current = current->next;
    }
    current->next = (List*) malloc(sizeof(List));
    current->next->value = value;
    current->next->next = NULL;
}

int pop(List * head) {
    int value;
    if (head->next == NULL) {
        value = head->value;
        free(head);
        return value;
    }

    List * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    value = current->next->value;
    free(current->next);
    current->next = NULL;
    return value;
}
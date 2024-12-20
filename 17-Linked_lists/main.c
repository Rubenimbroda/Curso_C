#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {     // función para describir una estructura
    int val;
    struct node_t * next;
} node_t;

void print_list(node_t * head) {    // función para crear una lista
    node_t * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) {       // función para remover (poping) una fila (mas abajo escogemos cual vamos a eliminar)
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_by_value(node_t ** head, int val) {
    node_t *previous, *current;

    if (*head == NULL) {  
        return -1;
    }

    if ((*head)->val == val) {  
        return pop(head);
    }

    previous = *head;
    current = (*head)->next;
    while (current) {
        if (current->val == val) {
            previous->next = current->next;
            free(current);
            return val;
        }
        previous = current;
        current = current->next;
    }

    return -1;
}

void delete_list(node_t * head) {  
    node_t * current = head;
    node_t * next = NULL;

    while (current) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->next->val = 5;
    test_list->next->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);
    print_list(test_list);
    delete_list(test_list);

    return EXIT_SUCCESS;
}
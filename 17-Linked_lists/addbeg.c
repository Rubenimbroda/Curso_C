#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
    int val;
    struct node_t * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push_front(node_t ** head, int value) {
    node_t * new_mode = (node_t *) malloc(sizeof(node_t));

    new_mode->val = value;      // asignar valo al nuevo nodo
    new_mode->next = *head;     // el nuevo nodo apunta al nodo actual de la cabecera
    *head = new_mode;           // actualizar la cabecera para que apunte al nuevo nodo
}

int main() {                                                        // creo la lista
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

    push_front(&test_list, 6);  // llamo a la función push_front y le asigno un valor
    print_list(test_list);      // imprimo la lista
    

    return EXIT_SUCCESS;
}
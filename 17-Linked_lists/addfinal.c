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

void push(node_t * head) {      // función para añadir un nodo al final de la lista
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = 6;     // valor del nodo a añadir
    current->next->next = NULL;
}

int main() {                                                    // creo la lista
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

    push(test_list);        // llamo a la función push para que se ejecute
    print_list(test_list);  // imprimo la lista
    

    return EXIT_SUCCESS;
}


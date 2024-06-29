#include <stdio.h>
#include <stdlib.h>

// Alejandro Garcia Rucavado C03187

// Se define el tipo nodo
typedef struct node {
    int val;
    struct node * next;
} nodo;

void imprimir_lista(nodo *head){
    nodo *current = head;

    // Recorre la lista, imprimiendo cada elemento
    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

// Funcion que agrega elemento al final de la lista
void enqueue(nodo *head, int val){
    nodo *current = head; // Current es el primer elemento de la lista

    // Lleva a current hasta el final
    while(current->next != NULL){
        current = current->next;
    }

    // Crea elemento que le sigue a current y le asigna un valor
    current->next = (nodo *) malloc(sizeof(nodo));
    current->next->val = val;
    current->next->next = NULL;
}

// Funcion que elimina el ultimo elemento de la lista
void dequeue(nodo *head){
    if(head == NULL){
        printf("La lista esta vacia, no hay nada para eliminar.\n");
        return;
    }
    else if(head->next == NULL){
        free(head);
        return;
    }

    nodo *current = head;

    // Lleva a current hasta el penulimo elemento
    while(current->next->next != NULL){
        current = current->next;
    }

    // Libera el ultimo elemento
    free(current->next);
    current->next = NULL;
}


int main(){

    // Se define el primer elemento
    nodo *head = NULL;
    head = (nodo *) malloc(sizeof(nodo));
    if (head == NULL){
        return 1;
    }
    head ->val = 1;
    head->next = NULL;

    // Se prueban las funciones
    enqueue(head, 2);
    enqueue(head, 3);
    enqueue(head, 4);
    imprimir_lista(head);
    printf("--------\n");

    dequeue(head);
    dequeue(head);
    imprimir_lista(head);

    return 0;

}
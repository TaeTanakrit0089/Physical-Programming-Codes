#include "stdio.h"

struct linked_list {
    int data;
    struct linked_list *next;
};

int main() {
    int size, temp_data;
    scanf("%d", &size);
    struct linked_list sook[size], *temp_pointer;
    struct linked_list head_node = {0, &sook[0]};
    for (int i = 0; i < size; i++) {
        scanf(" %d", &temp_data);
        sook[i].data = temp_data;
        sook[i].next = &sook[i + 1];
    }
    sook[size - 1].next = 0;

//    Insertion
    int new_position, new_data;
    scanf("%d\n%d", &new_position, &new_data);
    struct linked_list new_node = {new_data, 0};
    temp_pointer = head_node.next;
    if (new_position == 0) {
        new_node.next = head_node.next;
        head_node.next = &new_node;
    } else {
        for (int i = 0; i < new_position - 1; i++)
            temp_pointer = temp_pointer->next;
        new_node.next = temp_pointer->next;
        temp_pointer->next = &new_node;
    }


//    Traversal
    temp_pointer = head_node.next;
    while (temp_pointer->next != 0) {
        printf("%d ", temp_pointer->data);
        temp_pointer = temp_pointer->next;
    }
    printf("%d ", temp_pointer->data);


}

#include <stdio.h>
#include <stdlib.h>
#include "../../include/List.h"


int main(){
    List node;
    node = List_init(23);
    node.next = malloc(sizeof(List));
    printf("> %p\n", node.next);
    return 0;
}
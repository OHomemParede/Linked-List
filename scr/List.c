#include <stdlib.h>
#include "../include/List.h"

List List_init(int n){
    List p;
    p.value = n;
    p.next = NULL; 
    return p;
}

void Lista_add(int n, List node){
}
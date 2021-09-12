#include <stdlib.h>
#include "../include/List_Core.h"
#include "../include/List_Module_Control.h"


List* List_vectorToList(CONTENT_TYPE* vector, unsigned long vector_size){
    unsigned long count;
    List* k = List_init(0);
    for(count=0; count<vector_size; count++){
        k->content = vector[count];
        // Dont append a new node when reach the last value of the vector
        if( !((vector_size -1) == count) )
            k = List_append(0, k);
    }
    return k;
}


CONTENT_TYPE* List_listToVector(List* k){
    CONTENT_TYPE* vector;
    vector = malloc(sizeof(CONTENT_TYPE) * List_size(k));
    unsigned int i=0;
    while(k != NULL){
        vector[i] = k->content;
        i++;
        k = k->next;
    }
    return vector;
}


List* List_min(List* k){
    List* min = k;
    while(k != NULL){
        if(k->content < min->content)
            min = k;
        k = k->next;
    }
    return min;
}


List* List_max(List* k){
    List* max = k;
    while(k != NULL){
        if(k->content > max->content)
            max = k;
        k = k->next;
    }
    return max;
}


unsigned int List_size(List* k){
    unsigned int size = 0;
    while(k != NULL){
        size++;
        k = k->next;
    }
    return size;
}


short List_comparison(List* a, List* b){
    while(1){
        if(a->content != b->content)
            return 0;
        
        if((a->next==NULL || b->next==NULL) && !(a->next==NULL && b->next==NULL))
            return 0;
        
        if(a->next==NULL && b->next==NULL)
            return 1;

        else{
            a = a->next;
            b = b->next;
        }
    }
}


List* List_copy(List* k){
    List *copy = List_init(k->content);
    k = k->next;
    while(k != NULL){
        copy = List_append(k->content, copy);
        k = k->next;
    }
    return copy;
}


void List_free(List *k){
    List *p;
    while(k != NULL){
        p = k->next;
        free(k);
        k = p;
    }   
}

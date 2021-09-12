#include <stdlib.h>
#include "../include/Core.h"
#include "../include/add_on.h"


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


unsigned long List_size(List* k){
    unsigned long size = 0;
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


List* List_find(CONTENT_TYPE n, List* k){
    while(k != _NULL_){
        if(k->content == n)
            return k;
        else
            k = k->next;
    }
    return  _NULL_;
}


List* List_binarySearch(CONTENT_TYPE n, List* k){    
    unsigned long min, max, walk, index;
    List* head = k;
    max = List_size(k);
    max = max -1;       
    min = 0;            

    // walk is not my middle point index, but how much do I have to 'walk' to get there.
    walk = (max - min)/2;
    while(k != NULL){

        if(max < min)
            return NULL;
        
        // since index = 0, repet the loop `walk` times. --> k[min + walk] 
        for(index=0; index<walk; index++)
            k = k->next;
        
        
        if(k->content == n)
            return k;
        
        else if(max == min)
            return NULL;
        
        if(n > k->content){
            min = min + walk+1;
            walk = (max - min)/2;
            k = k->next;
        }
                
        else if(n < k->content){
            max = min + walk-1;
            k = head;
            for(index=0; index<min; index++)
                k = k->next;
            walk = (max - min)/2;
        }
    }
    return NULL;
}
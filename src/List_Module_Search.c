#include "../include/List_Core.h"
#include "../include/List_Module_Search.h"


List *List_find(CONTENT_TYPE n, List *k){
    while(k != _NULL_){
        if(k->content == n)
            return k;
        else
            k = k->next;
    }
    return  _NULL_;
}

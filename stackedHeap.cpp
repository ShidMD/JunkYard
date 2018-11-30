#include "stackedHeap.h"

template <unsigned long memSize>
int stackedHeap<memSize>::retrnBalue(){
    return sizeof(this->memZone);
}
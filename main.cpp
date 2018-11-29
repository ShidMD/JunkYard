#include <iostream>
using namespace std;

template <int8_t memSize>
class stackedHeap {
    private:
    int16_t size;
    int16_t pStart[memSize],
    int16_t * pNext;
    bool isFragmented;
    public:
    stackedHeap():
    size(memSize),
    isFragmented(false){

    
    }


};



//----------------MAIN----------------//
int main (){
    
}
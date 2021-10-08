#include <iostream>

using namespace std;

class RMM {
    int regionSize;
    void* pool;
    int free_offset;

    public:
    RMM(int size_in_MB = 10);
    ~RMM();

    void* allocate(int size_in_bytes);
    void reset();

    void print_status();
};

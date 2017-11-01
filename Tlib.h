#include <arduino.h>




class tlib {
public:
    bool good;
    uint8_t count;
    char initialize();
    uint8_t add();
private:
    char _str;
};

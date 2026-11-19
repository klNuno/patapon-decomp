#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x1D8008];
    virtual void unk_08(s16);
};

class G {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_08916DE8(T *arg0, G *arg1) {
    G *temp = arg1;
    T *temp2 = arg0;
    if (temp2 != NULL) {
        temp2->unk_08(-1);
        temp->unk_10(temp2);
    }
}

}

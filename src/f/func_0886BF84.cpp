#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x50];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C(s8);
};

typedef struct {
    u8 pad_00[0x1508];
    T *unk_1508;
    s8 unk_150C;
} U;

void func_0886BF84(U *arg0, s8 arg1) {
    T *temp = arg0->unk_1508;
    if (temp != NULL) {
        temp->unk_3C(arg1);
    }
    arg0->unk_150C = arg1;
}

}

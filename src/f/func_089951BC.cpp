#include "common.h"

extern "C" {

void func_08995CEC(void *);

class U {
public:
    u8 pad_00[0x1058];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0x1070];
    U unk_1070;
    u8 pad_20CC[0xAA90 - 0x20CC];
    U unk_AA90;
    u8 pad_BAEC[0x46180 - 0xBAEC];
    u8 unk_46180;
} T;

void func_089951BC(T *arg0) {
    U *temp;

    func_08995CEC(&arg0->unk_46180);
    temp = &arg0->unk_AA90;
    temp->unk_14();
    arg0->unk_1070.unk_14();
}

}

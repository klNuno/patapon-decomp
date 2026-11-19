#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x74];
    s32 unk_74;
    u8 pad_78[0x18];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
} U;

typedef struct {
    u8 pad_00[0x30];
    U unk_30;
    U unk_58;
} V;

s32 func_08880338(void *);

void func_088825A4(V *arg0, T *arg1) {
    U *temp;
    if (arg1->unk_74 != 0) {
        temp = &arg0->unk_30;
    } else {
        temp = &arg0->unk_58;
    }
    if ((void *)temp != (void *)arg1 && func_08880338(arg1) != 0) {
        temp->unk_20--;
    }
    arg1->unk_0C();
}
}

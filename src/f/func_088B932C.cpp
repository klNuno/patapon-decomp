#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x80];
    virtual void unk_v08();
    virtual void unk_v0C(s32);
};

typedef struct {
    u8 pad_00[0x70];
    u8 unk_70;
    u8 pad_71[0x11F];
    s32 unk_190;
} T;

void func_088CED30(void *, s32);

void func_088B932C(T *arg0, s32 arg1) {
    u32 temp;
    T *temp2;

    func_088CED30(arg0, arg1);
    temp = 0;
    temp2 = arg0;
    do {
        if (arg0->unk_190 != 0) {
            ((V *)&temp2->unk_70)->unk_v0C(arg1);
            ++temp;
        } else {
            ++temp;
        }
        arg0 = (T *)((u8 *)arg0 + sizeof(s32));
        temp2 = (T *)((u8 *)temp2 + 0x90);
    } while (temp < 2);
}

}

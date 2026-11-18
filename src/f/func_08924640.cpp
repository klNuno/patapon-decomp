#include "common.h"

extern "C" {

class C_08924640 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32, s32);
};

typedef struct {
    C_08924640 **unk_00;
    s32 unk_04;
} Vec_08924640;

typedef struct {
    u8 pad_00[0x28];
    Vec_08924640 unk_28;
} Obj_08924640;

void func_08924640(Obj_08924640 *arg0, s32 arg1, s32 arg2) {
    C_08924640 **p;
    s32 *sz;
    C_08924640 ***dp;

    p = arg0->unk_28.unk_00;
    dp = &arg0->unk_28.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_28.unk_04)) {
        sz = &arg0->unk_28.unk_04;
        do {
            (*p)->unk_10(arg1, arg2);
            p++;
        } while (p != *dp + *sz);
    }
}

}

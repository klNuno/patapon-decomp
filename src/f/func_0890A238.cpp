#include "common.h"

extern "C" {

struct T {
    u8 pad_00[0x28];
    virtual void unk_08(s32);
};

struct U {
    u8 pad_00[0x100];
    T *unk_100;
    u8 pad_104[4];
    s32 unk_108;
};

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
T *func_0890A724(void *, s32, s32, s32, f32 *, f32);

void func_0890A238(U *arg0, s32 arg1, s32 arg2, f32 *arg3, f32 arg4) {
    T *temp;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->unk_08(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    temp = (T *)((u32)arg0 + ((u32)arg0 & 0xF));
    if (temp != NULL) {
        temp = func_0890A724(temp, arg0->unk_108, arg1, arg2, arg3, arg4);
    }
    arg0->unk_100 = temp;
}

}

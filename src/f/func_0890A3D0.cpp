#include "common.h"

extern "C" {

struct U {
    u8 pad_00[0x28];
    virtual void unk_08(s32);
};

typedef struct {
    u8 unk_00[0x100];
    U *unk_100;
    u8 pad_104[4];
    s32 unk_108;
} T;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
U *func_08918A44(U *, s32, s32, s32, s32, f32, f32);

void func_0890A3D0(T *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    U *temp;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->unk_08(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    temp = (U *)((u32)arg0 + ((u32)arg0 & 0xF));
    if (temp != NULL) {
        temp = func_08918A44(temp, arg0->unk_108, arg1, arg2, arg3, arg4, arg5);
    }
    arg0->unk_100 = temp;
}

}

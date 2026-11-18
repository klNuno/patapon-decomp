#include "common.h"

extern "C" {

struct Obj_0890A494_C {
    u8 pad_00[0x28];
    virtual void v0(s32);
};

struct T0890A494 {
    u8 pad_00[0x100];
    Obj_0890A494_C *unk_100;
    u8 pad_104[4];
    s32 unk_108;
};

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
void *func_08909AC8(void *, s32, s32, s32, s32);

void func_0890A494(T0890A494 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->v0(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    p = (void *)((u32)arg0 + ((u32)arg0 & 0xF));
    if (p != NULL) {
        p = func_08909AC8(p, arg0->unk_108, arg1, arg2, arg3);
    }
    arg0->unk_100 = (Obj_0890A494_C *)p;
}

}

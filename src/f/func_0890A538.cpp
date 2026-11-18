#include "common.h"

extern "C" {

struct Obj_0890A538_M {
    u8 pad_00[0x28];
    virtual void v0(s32);
};

typedef struct {
    u8 pad_00[0x100];
    Obj_0890A538_M *unk_100;
    u8 pad_104[4];
    s32 unk_108;
} Obj_0890A538;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
Obj_0890A538_M *func_08913AF8(void *, s32, s32, s32, s32, s32);

void func_0890A538(Obj_0890A538 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *p;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->v0(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    p = (void *)(((u32)arg0 & 0xF) + (u32)arg0);
    if (p != NULL) {
        p = func_08913AF8(p, arg0->unk_108, arg1, arg2, arg3, arg4);
    }
    arg0->unk_100 = (Obj_0890A538_M *)p;
}

}

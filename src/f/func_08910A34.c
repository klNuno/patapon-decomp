#include "common.h"

typedef struct Obj_08910A34 {
    u8 pad_00[0xD90];
    u8 unk_D90[0x1C20 - 0xD90];
    u8 unk_1C20[0x32A0 - 0x1C20];
    u8 unk_32A0[0x170414 - 0x32A0];
    u8 unk_170414[4];
} Obj_08910A34;

void func_0880416C(void *);
void func_0890B384(void *, s32);
void func_0890D140(void *, s32);
void func_0890FD98(void *, s32);
void func_08910368(void *, s32);
void func_08925D14(void *, s32);

Obj_08910A34 *func_08910A34(Obj_08910A34 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08925D14(arg0->unk_170414, -1);
        func_0890B384(arg0->unk_32A0, -1);
        func_0890FD98(arg0->unk_1C20, -1);
        func_0890D140(arg0->unk_D90, -1);
        func_08910368(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

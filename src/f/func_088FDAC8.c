#include "common.h"

typedef struct Obj3_088FDAC8 {
    u8 pad_00[0x14];
    s32 unk_14;
} Obj3_088FDAC8;

typedef struct Obj2_088FDAC8 {
    u8 pad_00[0x14A0];
    Obj3_088FDAC8 *unk_14A0;
} Obj2_088FDAC8;

typedef struct Obj_088FDAC8 {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088FDAC8;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088DDF78(s32, s32);
extern Obj2_088FDAC8 *D_08AD1F14[];

void func_088FDAC8(Obj_088FDAC8 *arg0, void *arg1) {
    s32 temp;
    s32 val;
    Obj2_088FDAC8 *p;

    temp = func_08852EB8(arg1);
    if (temp == 0) {
        val = *func_0885356C(arg1, 0, 1, 4);
        p = D_08AD1F14[0];
        p = (p != NULL) ? p : NULL;
        p->unk_14A0->unk_14 = val;
        func_088DDF78(arg0->unk_10, 0);
        func_08852EDC(arg1, temp + 1);
    }
}

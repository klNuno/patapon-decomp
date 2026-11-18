#include "common.h"

typedef struct Obj_088094BC {
    u8 pad_00[1];
    u8 unk_01;
    u8 pad_02[2];
    s32 *unk_04;
} Obj_088094BC;

void func_0880416C(void *);
s32 func_088092B4(s32, s32);
s32 func_088092BC(s32);
s32 func_088092C4(s32);
void func_088093BC(s32 *);

Obj_088094BC *func_088094BC(Obj_088094BC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (func_088092C4(*arg0->unk_04) == 0 && func_088092B4(func_088092BC(*arg0->unk_04), 0x2000) != 0 && arg0->unk_01 == 0) {
            func_088093BC(arg0->unk_04);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

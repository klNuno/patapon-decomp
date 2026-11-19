#include "common.h"

typedef struct Obj_088620E8 {
    u8 pad_00[0x38];
    s32 unk_38;
} Obj_088620E8;

void func_088620E8(Obj_088620E8 *arg0, s32 arg1);
extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSemaCB(s32, s32, s32);

void func_0886207C(Obj_088620E8 *arg0, s32 arg1, s32 arg2)
{
    if (arg2 != 0) {
        sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    }
    func_088620E8(arg0, arg1);
    if (arg2 != 0) {
        sceKernelSignalSema(arg0->unk_38, 1);
    }
}

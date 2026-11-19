#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} S;

typedef struct {
    u8 pad_00[0x428];
    S *unk_428;
} T;

void func_088E3E78(T *, s32, s32);
extern s32 func_088E5034(s32);
void func_088E4F98(u8 *, s32);

void func_088E3E24(T *arg0, s32 arg1, s32 arg2) {
    u8 *temp;
    if (arg2 != 0) {
        func_088E3E78(arg0, arg1, arg1 + 1);
        return;
    }
    temp = ((S *)((u8 *)arg0->unk_428 + arg1 * 0x10))->unk_08;
    func_088E4F98(temp, func_088E5034((s32)temp) + 1);
}

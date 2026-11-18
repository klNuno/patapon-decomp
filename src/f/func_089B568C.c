#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04[0x34];
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[0x288];
    s32 unk_2C8;
    s32 unk_2CC;
} T089B568C;

void func_0881F5C0(void *, s32, s32);
void func_0885A274(s32, void *);
s32 func_0885A27C(s32);
void func_08914C0C(s32, void *);
s32 sceUtilityMsgDialogInitStart(void *);

s32 func_089B568C(T089B568C *arg0, s32 arg1) {
    if (func_0885A27C(arg0->unk_2CC) != 0) {
        return 0;
    }
    if (arg0->unk_2C8 != 0) {
        return 0;
    }
    func_0881F5C0(arg0->unk_04, 0, 0x2C4);
    func_08914C0C(0x2C4, arg0->unk_04);
    arg0->unk_3C = arg1;
    arg0->unk_38 = 0;
    if (sceUtilityMsgDialogInitStart(arg0->unk_04) != 0) {
        return 0;
    }
    func_0885A274(arg0->unk_2CC, arg0);
    arg0->unk_2C8 = 1;
    return 1;
}

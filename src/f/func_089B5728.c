#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[0x34];
    s32 unk_38;
    u8 pad_3C[4];
    u8 unk_40[0x200];
    s32 unk_240;
    u8 pad_244[0x84];
    s32 unk_2C8;
    s32 unk_2CC;
} T089B5728;

s32 func_0885A27C(s32);
void func_0881F5C0(void *, s32, s32);
void func_08914C0C(s32, void *);
void func_0881F120(void *, void *, s32);
s32 sceUtilityMsgDialogInitStart(void *);
void func_0885A274(s32, void *);

s32 func_089B5728(T089B5728 *arg0, void *arg1, s32 arg2) {
    if (func_0885A27C(arg0->unk_2CC) != 0) {
        return 0;
    }
    if (arg0->unk_2C8 != 0) {
        return 0;
    }
    func_0881F5C0(arg0->unk_04, 0, 0x2C4);
    func_08914C0C(0x2C4, arg0->unk_04);
    arg0->unk_38 = 1;
    arg0->unk_240 = arg2;
    func_0881F120(arg0->unk_40, arg1, 0x200);
    if (sceUtilityMsgDialogInitStart(arg0->unk_04) != 0) {
        return 0;
    }
    func_0885A274(arg0->unk_2CC, arg0);
    arg0->unk_2C8 = 1;
    return 1;
}

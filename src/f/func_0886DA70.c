#include "common.h"

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x1520 - 0x1504];
    u8 unk_1520[4];
} Obj_0886DA70;

s32 func_0887ED78(s32, s32);
void func_08887B10(void *, s32, s32);

s32 func_0886DA70(Obj_0886DA70 *arg0, s32 arg1) {
    if (func_0887ED78(arg0->unk_1500, 8) && func_0887ED78(arg0->unk_1500, 0x200) && func_0887ED78(arg0->unk_1500, 0x100)) {
        return 0x10001;
    }
    func_08887B10(arg0->unk_1520, arg0->unk_1500, arg1);
    return 0x10000;
}

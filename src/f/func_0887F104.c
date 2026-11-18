#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
} S_0887F104;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);

S_0887F104 *func_0887F104(S_0887F104 *arg0, S_0887F104 *arg1) {
    func_08866B54(arg0, 0, func_08866B80(arg1, 0));
    func_08866B54(arg0, 1, func_08866B80(arg1, 1));
    func_08866B54(arg0, 2, func_08866B80(arg1, 2));
    func_08866B54(arg0, 3, func_08866B80(arg1, 3));
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_44 = arg1->unk_44;
    arg0->unk_48 = arg1->unk_48;
    arg0->unk_4C = arg1->unk_4C;
    return arg0;
}

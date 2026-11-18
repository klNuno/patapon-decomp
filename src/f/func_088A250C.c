#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x70];
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    s32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
} S_088A250C;

void func_08827B84(s32, s32);
void func_088A25C8(s32, s32);
void func_088A25F8(s32, s32);
void func_088A2628(s32, s32);
void func_088A2658(s32, s32);

s32 func_088A250C(S_088A250C *arg0, s32 arg1) {
    func_088A2658(arg0->unk_84, arg1);
    arg0->unk_84 = 0;
    func_088A2628(arg0->unk_88, arg1);
    arg0->unk_88 = 0;
    func_088A25F8(arg0->unk_8C, arg1);
    arg0->unk_8C = 0;
    func_088A25F8(arg0->unk_90, arg1);
    arg0->unk_90 = 0;
    func_08827B84(arg0->unk_94, arg1);
    arg0->unk_94 = 0;
    func_088A25F8(arg0->unk_9C, arg1);
    arg0->unk_80 = 0;
    if (arg0->unk_0C != 0) {
        func_088A25C8(arg0->unk_0C, arg1);
        arg0->unk_0C = 0;
    }
    if (arg0->unk_08 != 0) {
        func_088A25C8(arg0->unk_08, arg1);
        arg0->unk_08 = 0;
    }
    return 1;
}

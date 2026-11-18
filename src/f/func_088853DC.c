#include "common.h"

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
    u8 unk_110;
    u8 unk_111;
} S_088853DC;

extern s32 D_089DDF30[];
extern s32 D_089F9E90[];
extern s32 D_089F9E98[];
extern u8 D_089F9E9C[];
void func_08858F88(S_088853DC *, s32, s32, void *, s32, s32, s32);
void func_088854D4(S_088853DC *, s32, s32);

void func_088853DC(S_088853DC *arg0, s32 arg1, s32 arg2) {
    arg0->unk_100 = D_089DDF30[arg0->unk_104];
    switch (arg0->unk_108) {
    case 2:
        func_088854D4(arg0, 0xE, 0x12);
    case 1:
        arg0->unk_100 = D_089DDF30[arg0->unk_104];
        func_08858F88(arg0, arg1 + 5, arg2 + 2, D_089F9E9C, arg0->unk_10C,
                      arg0->unk_110 ? D_089F9E90[0] : D_089F9E98[0],
                      arg0->unk_111 ? D_089F9E90[0] : D_089F9E98[0]);
        break;
    }
    arg0->unk_100 = D_089DDF30[0];
}

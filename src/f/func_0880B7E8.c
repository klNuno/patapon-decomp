#include "common.h"
typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 *unk_28;
    s32 *unk_2C;
    s32 *unk_30;
    s32 *unk_34;
    u8 pad_38[8];
    s32 unk_40;
    u8 pad_44[5];
    u8 unk_49;
} T;
extern s32 func_0880A57C(T *, s32, s32);
extern s32 func_0880A58C(T *, s32 *, s32 *, s32 *);
void func_0880B7E8(T *arg0) {
    s32 n;
    s32 *p;
    func_0880A57C(arg0, 0, 0);
    func_0880A58C(arg0, arg0->unk_28, arg0->unk_28, arg0->unk_28);
    p = arg0->unk_28 + arg0->unk_24;
    arg0->unk_34 = p;
    arg0->unk_30 = p;
    arg0->unk_2C = p;
    if (arg0->unk_49 == 0) {
        n = arg0->unk_40;
        n = n <= 0 ? 1 : (n < 5 ? n : 4);
        arg0->unk_2C = (s32 *)((u8 *)arg0->unk_2C - (arg0->unk_24 - 1) * n);
    }
}

#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0x4];
    u8 unk_48;
} T_0880A7FC;

s32 func_08808980(void);
s32 func_08808B04(s32);
s32 func_0880A0C8(T_0880A7FC *);
extern s32 func_0880A0E8(T_0880A7FC *);
s32 func_0880A0F0(T_0880A7FC *);
s32 func_0880A28C(T_0880A7FC *);
extern s32 func_0880A57C(T_0880A7FC *, s32, s32);
extern s32 func_0880A8FC(T_0880A7FC *);
void func_0880B7E8(T_0880A7FC *);
s32 func_0880B890(T_0880A7FC *);
s32 func_0880D0F0(T_0880A7FC *);

s32 func_0880A7FC(T_0880A7FC *arg0) {
    u32 n;

    if (func_0880A28C(arg0) == 0) {
        return func_08808980();
    }
    if (func_0880A0F0(arg0) != 0) {
        arg0->unk_48 = arg0->unk_40 < 0;
        if (func_0880D0F0(arg0) < 0) {
            return func_08808980();
        }
        func_0880A57C(arg0, 0, 0);
    }
    if (func_0880A0C8(arg0) == 0) {
        func_0880B7E8(arg0);
    }
    n = func_0880A0E8(arg0);
    if (n >= (u32)func_0880A8FC(arg0) && func_0880B890(arg0) <= 0) {
        return func_08808980();
    }
    return func_08808B04(func_0880A0E8(arg0));
}

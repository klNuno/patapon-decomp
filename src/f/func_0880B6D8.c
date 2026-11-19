#include "common.h"

extern s32 func_0880B048(s32);
extern s8 func_0880AFFC(s32);
extern s32 func_0880AFB0(s32);
extern s32 func_0880D388(s32);
typedef struct {
    u8 pad_00[0x3C];
    s32 unk_3C, unk_40, unk_44;
    u8 pad_48;
    s8 unk_49;
} T;

void func_0880B6D8(T *arg0, s32 arg1) {
    s32 temp = func_0880B048(arg1);
    arg0->unk_44 = temp;
    arg0->unk_49 = func_0880AFFC(temp);
    arg0->unk_40 = func_0880AFB0(arg0->unk_44);
    arg0->unk_3C = func_0880D388(arg0->unk_44);
}

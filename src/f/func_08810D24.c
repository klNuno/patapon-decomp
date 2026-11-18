#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 *unk_0C;
} T_08810D24;

T_08810D24 *func_08810DEC(s32 *);
s32 func_08810DF4(s32, u16 *);
s32 func_08810E50(s32 *);
s32 func_08810E58(s32 *, s32 *);
void func_08810E98(s32 *, void *);
void func_08810F20(s32 *, void *);
void func_08811AC8(s32 *, s32, s32, u16 *);

u8 *func_08810D24(void *arg0, u16 *arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 temp;

    func_08810F20(&sp18, arg0);
    func_08810E98(&sp14, arg0);
    func_08811AC8(&sp1C, sp18, sp14, arg1);
    func_08810E98(&sp10, arg0);
    if (func_08810E58(&sp1C, &sp10) != 0 || func_08810DF4(func_08810E50(&sp1C), arg1) != 0) {
        return NULL;
    }
    temp = *arg1 * func_08810DEC(&sp1C)->unk_08;
    return func_08810DEC(&sp1C)->unk_0C + temp;
}

#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u16 unk_08;
    u8 pad_0A[2];
    u16 unk_0C;
} E_08811458;

E_08811458 *func_08811520(s32 *);
s32 func_08811528(s32, u16 *);
s32 func_08811584(s32 *);
s32 func_0881158C(s32 *, s32 *);
void func_088115CC(s32 *, void *);
void func_08811654(s32 *, void *);
void func_08811798(s32 *, s32, s32, u16 *);

s32 func_08811458(void *arg0, u16 *arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    func_08811654(&sp18, arg0);
    func_088115CC(&sp14, arg0);
    func_08811798(&sp1C, sp18, sp14, arg1);
    func_088115CC(&sp10, arg0);
    if (func_0881158C(&sp1C, &sp10) || func_08811528(func_08811584(&sp1C), arg1)) {
        return 0;
    }
    return func_08811520(&sp1C)->unk_0C + *arg1 * func_08811520(&sp1C)->unk_08;
}

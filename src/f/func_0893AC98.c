#include "common.h"

typedef struct {
    u8 unk_00[0x28];
    s32 unk_28;
} E_0893AC98;

void *func_088E2050(void *, s8 *);
void func_0893AD34(s32 *, void *, E_0893AC98 *);
void func_0893AE80(void *, s32, s32);
s32 func_0893AE9C(s32 *, s32 *);
void func_0893AEB4(s32 *, void *);
void func_0893AEC0(s32 *, void *, E_0893AC98 *);

void func_0893AC98(u8 *arg0, s8 *arg1, s32 arg2) {
    s32 sp48[2];
    E_0893AC98 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    func_088E2050(&sp1C, arg1);
    sp1C.unk_28 = arg2;
    func_0893AEC0(&sp18, arg0 + 4, &sp1C);
    func_0893AEB4(&sp14, arg0 + 4);
    if (func_0893AE9C(&sp18, &sp14) != 0) {
        func_0893AE80(sp48, sp18, 0);
    } else {
        func_0893AD34(&sp10, arg0 + 4, &sp1C);
        func_0893AE80(sp48, sp10, 1);
    }
}

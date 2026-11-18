#include "common.h"

typedef void *(*Fn_088C00E0)(s32);

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8C];
    void *unk_90;
    u8 pad_94[0x14];
    u8 unk_A8[1];
} T088C00E0;

void func_0881F5C0(void *, s32, s32);
Fn_088C00E0 func_088C560C(s32);
void *func_088C5614(s32);
s32 func_088BF97C(void *, u16, s32, Fn_088C00E0, void *);
void func_088C019C(T088C00E0 *);

s32 func_088C00E0(T088C00E0 *arg0, s32 arg1, u16 arg2) {
    s32 temp;

    func_0881F5C0(&arg0->unk_90, 0, 0x18);
    if (func_088BF97C(arg0->unk_A8, arg1, 4, func_088C560C(arg0->unk_00), func_088C5614(arg0->unk_00)) == 0) {
        return 0;
    }
    temp = arg2 * 4;
    arg0->unk_90 = func_088C560C(arg0->unk_00)(temp);
    if (arg0->unk_90 == NULL) {
        func_088C019C(arg0);
        return 0;
    }
    return temp;
}

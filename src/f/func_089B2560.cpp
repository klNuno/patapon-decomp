#include "common.h"
extern "C" {
struct T0 {
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    virtual void unk_20(s32);
};
struct T : T0 {
    u8 pad_5C[4];
    u8 unk_60[0x720];
    u8 unk_780;
};
struct T1 { u8 pad_00[0x19CE0]; s32 unk_19CE0; };
struct T2 { u8 pad_00[0x1498]; T1 *unk_1498; };
struct T3 { u8 pad_00[0x42820]; T2 *unk_42820; };
extern void *D_08AD1E28[];
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDA8(s32, s32);
extern s32 func_089B22B0(s32);
struct T089B3450;
void func_089B3450(T089B3450 *arg0, s32 arg1, s32 arg2);
s32 func_089B3748(T *);
void func_0891259C(u8 *, s32, s32);
s32 func_089127D0(u8 *);

static inline T3 *func_inline() {
    T3 *temp = (T3 *)D_08AD1E28[0];
    return temp != NULL ? temp : NULL;
}

void func_089B2560(T *arg0, s32 arg1, s32 arg2) {
    T1 *temp;
    func_089B3450((T089B3450 *)arg0, arg1, arg2);
    if ((u8)arg0->unk_1C()) {
        if (arg0->unk_780 == 1) {
            temp = func_inline()->unk_42820->unk_1498;
            temp->unk_19CE0 = func_089127D0(arg0->unk_60);
            func_089B22B0(func_089B3748(arg0));
            arg0->unk_20(0);
            arg0->unk_780 = 0;
        } else {
            func_0891259C(arg0->unk_60, arg1, arg2);
            if (func_0887EDA8(arg2, 0x2000) != 0) {
                arg0->unk_20(0);
            } else if (func_0887EDA8(arg2, 0x4000) != 0) {
                arg0->unk_780 = 1;
                func_08878864(func_089B53D8(func_088586E8()), 0, 2, 1.0f, 0.0f, 0.0f);
            }
        }
    }
}
}

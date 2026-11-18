#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[4];
    u8 unk_48;
} T_08809E4C;

u8 func_08809928(T_08809E4C *);
s32 func_0880ADB8(void);
s32 func_0880975C(T_08809E4C *);
s32 func_0880CDE8(T_08809E4C *);
void func_08809C00(T_08809E4C *, s32, s32);
s32 func_08809734(T_08809E4C *);
void func_0880C044(T_08809E4C *);
u8 *func_08809754(T_08809E4C *);
u8 *func_08809F4C(T_08809E4C *);
s32 func_0880C0E8(T_08809E4C *);
s32 func_0880ADC0(u8 *);

s32 func_08809E4C(T_08809E4C *arg0) {
    if (!func_08809928(arg0)) {
        return func_0880ADB8();
    }
    if (func_0880975C(arg0)) {
        arg0->unk_48 = arg0->unk_40 < 0;
        if (func_0880CDE8(arg0) < 0) {
            return func_0880ADB8();
        }
        func_08809C00(arg0, 0, 0);
    }
    if (!func_08809734(arg0)) {
        func_0880C044(arg0);
    }
    if (func_08809754(arg0) >= func_08809F4C(arg0) && func_0880C0E8(arg0) <= 0) {
        return func_0880ADB8();
    }
    return func_0880ADC0(func_08809754(arg0));
}

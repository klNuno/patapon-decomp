#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
} Obj_0880CB18;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    Obj_0880CB18 *unk_04;
} S_0880CB18;

s32 func_0880CC78(s32);
s32 func_0880CC70(s32);
void func_08809124(s32);
void func_08806144(s32, s32);
s32 func_088063DC(s32);
s32 func_0880639C(s32, s32);
s32 func_08809308(s32);
void func_088063A4(s32, s32);
s32 func_08809300(s32);

S_0880CB18 *func_0880CB18(S_0880CB18 *arg0, Obj_0880CB18 *arg1) {
    s32 t;

    arg0->unk_00 = 0;
    arg0->unk_01 = 0;
    arg0->unk_04 = arg1;
    try {
        if (func_0880CC78(arg0->unk_04->unk_00) != 0) {
            if (func_0880CC70(arg0->unk_04->unk_00) != 0) {
                func_08809124(func_0880CC70(arg0->unk_04->unk_00));
            }
            if (func_0880CC78(arg0->unk_04->unk_00) != 0) {
                arg0->unk_00 = 1;
            } else {
                func_08806144(arg0->unk_04->unk_00, 4);
            }
        } else {
            func_08806144(arg0->unk_04->unk_00, 4);
        }
    } catch (...) {
        if (func_0880639C(func_088063DC(arg0->unk_04->unk_00), 4) == 0) {
            func_088063A4(func_08809308(arg0->unk_04->unk_00), 1);
        }
        t = func_08809300(arg0->unk_04->unk_00);
        if (func_0880639C(t, func_088063DC(arg0->unk_04->unk_00)) != 0) {
            throw;
        }
    }
    return arg0;
}

}

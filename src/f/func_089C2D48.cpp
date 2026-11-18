#include "common.h"

extern "C" {

struct A_089C2D48 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_089C2D48 {
    s32 unk_00;
    A_089C2D48 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_0886A45C(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x290 - 0x4];
    u8 unk_290[0x3FC - 0x290];
    u8 unk_3FC[0x408 - 0x3FC];
    u8 unk_408;
} T_089C2D48;

s32 func_089C2EA0(T_089C2D48 *, s32);
void func_08945F18(void *, s32, s32);
u8 *func_08947BA8(void *, s32);
s32 func_088C6484(s32);
s32 func_088BCF94(s32);
void func_08865FEC(void *, s32, s32);
void func_089912C8(H_089C2D48 *, s32, void *);

void func_089C2D48(T_089C2D48 *arg0, s32 arg1) {
    H_089C2D48 h;
    s32 t;
    u8 *e;

    if (arg1 == 0) {
        return;
    }
    t = func_089C2EA0(arg0, arg1);
    func_08945F18(arg0->unk_3FC, t, 1);
    e = func_08947BA8(arg0->unk_3FC, t);
    func_089912C8(&h, func_088BCF94(func_088C6484((s32)&arg0->unk_00[0x506F0])), e + 0x28);
    func_08865FEC(arg0->unk_290, h.unk_08, 1);
    h.release();
    arg0->unk_408 = 1;
}

}

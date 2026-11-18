#include "common.h"

extern "C" {

struct T08988064_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct T08988064_H {
    s32 unk_00;
    T08988064_A *unk_04;
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

typedef struct Unk_08988064 {
    u8 *unk_00;
    u8 pad_04[0x18];
    u8 unk_1C[4];
} Unk_08988064;

s32 func_088BCF94(s32);
s32 func_088C6484(void *);
u8 *func_08945908(char *, s32);
void func_089912C8(T08988064_H *, s32, u8 *);

s32 func_08988064(Unk_08988064 *arg0, s32 arg1) {
    T08988064_H h;
    u8 *temp;
    s32 ret;

    if (arg1 >= 0) {
        temp = func_08945908((char *)arg0->unk_1C, arg1);
        func_089912C8(&h, func_088BCF94(func_088C6484(&arg0->unk_00[0x506F0])), temp + 0x28);
        ret = *(volatile s32 *)&h.unk_08;
        h.release();
        return ret;
    }
    return 0;
}

}

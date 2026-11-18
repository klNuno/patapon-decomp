#include "common.h"

extern "C" {

class T08936458_O {
public:
    u8 pad_00[0x10];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1C();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2C();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3C();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual s32 vfunc_48(u8 *);
};

typedef struct T08936458_B {
    u8 pad_00[0xD30];
    T08936458_O *unk_D30;
} T08936458_B;

typedef struct T08936458_S {
    u8 pad_00[0x14];
    T08936458_B *unk_14;
} T08936458_S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, u8 *);

void func_08936458(T08936458_S *arg0, void *arg1) {
    u8 sp10[0x100];
    s32 *temp;
    T08936458_B *b;
    u8 *p;
    s32 n;

    temp = func_0885356C(arg1, 0, 1, 4);
    p = sp10;
    n = 0x100;
    if (p != NULL) {
        do { *p++ = 0; } while (--n);
    }
    func_08853894(arg1, sp10);
    b = arg0->unk_14;
    *temp = -1;
    *temp = b->unk_D30->vfunc_48(sp10);
    func_08852F00(arg1, 0);
}

}

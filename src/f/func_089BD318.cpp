#include "common.h"

extern "C" {

class T089BD318_M {
public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
};

typedef struct T089BD318_B {
    void *unk_00;
} T089BD318_B;

typedef struct T089BD318_S {
    T089BD318_B unk_00;
    u8 pad_04[0x8];
    T089BD318_M unk_0C;
    u8 pad_10[0xA34];
    u8 unk_A44[0x4];
} T089BD318_S;

extern u8 D_08A478D8[];
extern u8 D_08A48024[];
extern u8 D_08A48B6C[];
void func_0880416C(void *);
void func_0886B11C(T089BD318_M *, s32);
void func_089BD77C(void *, s32);

T089BD318_S *func_089BD318(T089BD318_S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00.unk_00 = D_08A48B6C;
        func_089BD77C(arg0->unk_A44, -1);
        if (&arg0->unk_0C != NULL) {
            *(void **)&arg0->unk_0C = D_08A48024;
            arg0->unk_0C.vfunc_14();
            func_0886B11C(&arg0->unk_0C, 0);
        }
        if (&arg0->unk_00 != NULL) {
            arg0->unk_00.unk_00 = D_08A478D8;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

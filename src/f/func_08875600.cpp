#include "common.h"

extern "C" {

class A_08875600 {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10(s32);
};

typedef struct {
    s32 unk_00;
    A_08875600 *unk_04;
} M_08875600;

typedef struct {
    u8 pad_00[0x4];
    void *unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x1450];
    u8 unk_1460[0x30];
    M_08875600 unk_1490;
    M_08875600 unk_1498;
    M_08875600 unk_14A0;
    u8 unk_14A8[0xFB8];
    u8 unk_2460[4];
} S_08875600;

extern u8 D_08A45134[];
extern u8 D_08A45140[];
void func_08876C58(S_08875600 *);
void func_089A8A2C(void *, s32);
void func_0896B928(void *, s32);
void func_0887552C(void *);
void func_08804000(void *, void (*)(void *), s32, s32);
void func_0885C534(void *, s32);
void func_0880416C(void *);

S_08875600 *func_08875600(S_08875600 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_08A45134;
        func_08876C58(arg0);
        func_089A8A2C(arg0->unk_2460, -1);
        func_0896B928(arg0->unk_14A8, -1);
        if (&arg0->unk_14A0 != NULL) {
            if (arg0->unk_14A0.unk_00 != 0) {
                arg0->unk_14A0.unk_04->func_10(arg0->unk_14A0.unk_00);
            }
        }
        if (&arg0->unk_1498 != NULL) {
            if (arg0->unk_1498.unk_00 != 0) {
                arg0->unk_1498.unk_04->func_10(arg0->unk_1498.unk_00);
            }
        }
        if (&arg0->unk_1490 != NULL) {
            if (arg0->unk_1490.unk_00 != 0) {
                arg0->unk_1490.unk_04->func_10(arg0->unk_1490.unk_00);
            }
        }
        func_08804000(arg0->unk_1460, func_0887552C, 0x10, 3);
        func_0885C534(arg0->unk_10, -1);
        if (arg0 != NULL) {
            arg0->unk_04 = D_08A45140;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

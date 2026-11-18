#include "common.h"

extern "C" {

class B_0887E2E8 {
public:
    u8 pad_00[0x8];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
};

class A_0887E2E8 {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10(s32);
};

typedef struct {
    s32 unk_00;
    A_0887E2E8 *unk_04;
} M_0887E2E8;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x14];
    M_0887E2E8 unk_20;
    u8 unk_28[4];
} S_0887E2E8;

extern u8 D_08A452D0[];
void func_0887E924(void *);
void func_08804000(void *, void (*)(void *), s32, s32);
void func_0895EFE4(void *, s32);
void func_0880416C(void *);

S_0887E2E8 *func_0887E2E8(S_0887E2E8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A452D0;
        ((B_0887E2E8 *)arg0)->func_18();
        func_08804000(arg0->unk_28, func_0887E924, 0xC4, 1);
        if (&arg0->unk_20 != NULL) {
            if (arg0->unk_20.unk_00 != 0) {
                arg0->unk_20.unk_04->func_10(arg0->unk_20.unk_00);
            }
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

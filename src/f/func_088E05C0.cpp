#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_088E05C0;

struct V_088E05C0 {
    E_088E05C0 *unk_00;
    s32 unk_04;
    E_088E05C0 *begin() { return unk_00; }
    s32 size() { return unk_04; }
};

typedef struct {
    u8 pad_00[0xC004];
    V_088E05C0 unk_C004;
} I_088E05C0;

class B_088E05C0 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_088E05C0 unk_04;
} S_088E05C0;

extern u8 D_08A46498[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

S_088E05C0 *func_088E05C0(S_088E05C0 *arg0, s16 arg1) {
    E_088E05C0 *p;
    V_088E05C0 *b;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46498;
        ((B_088E05C0 *)arg0)->func_0C();
        if (&arg0->unk_04 != NULL) {
            p = arg0->unk_04.unk_C004.unk_00;
            b = &arg0->unk_04.unk_C004;
            if ((u32)p != (u32)(*(E_088E05C0 **)b + arg0->unk_04.unk_C004.unk_04)) {
                n = &arg0->unk_04.unk_C004.unk_04;
                do {
                    p++;
                } while (p != b->unk_00 + *n);
            }
            arg0->unk_04.unk_C004.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44C14;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_088E07A8;

struct V_088E07A8 {
    E_088E07A8 *unk_00;
    s32 unk_04;
};

typedef struct {
    u8 pad_00[0xC004];
    V_088E07A8 unk_C004;
} I_088E07A8;

class B_088E07A8 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_088E07A8 unk_04;
} M_088E07A8;

typedef struct {
    u8 pad_00[0x3014];
    u8 unk_3014[4];
} N_088E07A8;

typedef struct {
    u8 pad_00[0x2034];
    u8 unk_2034[0x406C - 0x2034];
    M_088E07A8 unk_406C;
    N_088E07A8 unk_1007C;
} S_088E07A8;

extern u8 D_08A46498[];
extern u8 D_08A44C14[];
void func_0880416C(void *);
void func_088E0E74(S_088E07A8 *);
void func_088E03D0(void *, s32);
void func_088E055C(void *, s32);
void func_0893AC34(void *, s32);
void func_088E1B60(S_088E07A8 *, s32);

S_088E07A8 *func_088E07A8(S_088E07A8 *arg0, s16 arg1) {
    E_088E07A8 *p;
    V_088E07A8 *b;
    s32 *n;

    if (arg0 != NULL) {
        func_088E0E74(arg0);
        if (&arg0->unk_1007C != NULL) {
            func_088E03D0(arg0->unk_1007C.unk_3014, 0);
            func_088E055C(&arg0->unk_1007C, 0);
        }
        if (&arg0->unk_406C != NULL) {
            arg0->unk_406C.unk_00 = D_08A46498;
            ((B_088E07A8 *)&arg0->unk_406C)->func_0C();
            if (&arg0->unk_406C.unk_04 != NULL) {
                p = arg0->unk_406C.unk_04.unk_C004.unk_00;
                b = &arg0->unk_406C.unk_04.unk_C004;
                if ((u32)p != (u32)(*(E_088E07A8 **)b + arg0->unk_406C.unk_04.unk_C004.unk_04)) {
                    n = &arg0->unk_406C.unk_04.unk_C004.unk_04;
                    do {
                        p++;
                    } while (p != b->unk_00 + *n);
                }
                arg0->unk_406C.unk_04.unk_C004.unk_04 = 0;
            }
            if (&arg0->unk_406C != NULL) {
                arg0->unk_406C.unk_00 = D_08A44C14;
            }
        }
        func_0893AC34(arg0->unk_2034, -1);
        func_088E1B60(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

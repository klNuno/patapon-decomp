#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
} E_0893DD44;

typedef struct {
    E_0893DD44 *unk_00;
    s32 unk_04;
} V_0893DD44;

typedef struct {
    u8 pad_00[0x1814];
    u8 unk_1814[0x4];
} M_0893DD44;

typedef struct {
    u8 pad_00[0xA004];
    V_0893DD44 unk_A004;
    M_0893DD44 unk_A00C;
} O_0893DD44;

void func_0880416C(void *);
void func_0893DB54(void *, s32);
void func_0893DCE0(void *, s32);

O_0893DD44 *func_0893DD44(O_0893DD44 *arg0, s16 arg1) {
    E_0893DD44 *p;
    V_0893DD44 *v;
    s32 *n;

    if (arg0 != NULL) {
        if (&arg0->unk_A00C != NULL) {
            func_0893DB54(arg0->unk_A00C.unk_1814, 0);
            func_0893DCE0(&arg0->unk_A00C, 0);
        }
        if (arg0 != NULL) {
            p = arg0->unk_A004.unk_00;
            v = &arg0->unk_A004;
            if ((u32)p != (u32)(*(E_0893DD44 **)&v->unk_00 + arg0->unk_A004.unk_04)) {
                n = &arg0->unk_A004.unk_04;
                do {
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_A004.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

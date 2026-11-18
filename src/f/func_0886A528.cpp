#include "common.h"

extern "C" {

void func_0881F120(void *, void *, s32);
extern s8 D_089F8D68[];

struct S_0886A528 {
    u32 unk_00;
    char unk_04[0x28];
    void assign(S_0886A528 *o) {
        u32 n = o->unk_00;
        if (n > 0x24U) {
            n = 0x24;
        }
        if (this != o) {
            func_0881F120(unk_04, o->unk_04, n);
            unk_00 = n;
            unk_04[n] = D_089F8D68[0];
        }
    }
};

typedef struct T_0886A528 {
    S_0886A528 unk_00;
    S_0886A528 unk_2C;
    s32 unk_58;
    s32 unk_5C;
} T_0886A528;

T_0886A528 *func_0886A528(T_0886A528 *arg0, T_0886A528 *arg1) {
    arg0->unk_00.assign(&arg1->unk_00);
    arg0->unk_2C.assign(&arg1->unk_2C);
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_5C = arg1->unk_5C;
    return arg0;
}

}

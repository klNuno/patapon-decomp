#include "common.h"

extern "C" {

class A_08990DC4 {
public:
    virtual void func_08();
    virtual void func_0C(s32, s32 *, s32);
};

void func_0886A45C(s32, s32);

struct H_08990DC4 {
    s32 unk_00;
    A_08990DC4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

typedef struct E_08990DC4 {
    H_08990DC4 unk_00;
    u8 pad_10[0x28];
} E_08990DC4;

typedef struct V_08990DC4 {
    E_08990DC4 *unk_00;
    s32 unk_04;
} V_08990DC4;

typedef struct S_08990DC4 {
    u8 pad_00[0x3810];
    V_08990DC4 unk_3810;
} S_08990DC4;

void func_08990DC4(S_08990DC4 *arg0) {
    E_08990DC4 *p;
    s32 *sz;
    V_08990DC4 *v;
    s32 n;

    p = arg0->unk_3810.unk_00;
    v = &arg0->unk_3810;
    if ((u32)p != (u32)(p + arg0->unk_3810.unk_04)) {
        sz = &arg0->unk_3810.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    if (&p->unk_00 != NULL) {
                        s32 *h = &p->unk_00.unk_08;
                        if (p->unk_00.unk_08 != 0) {
                            --*p->unk_00.unk_0C;
                            if (p->unk_00.unk_0C != NULL) {
                                n = *p->unk_00.unk_0C;
                            } else {
                                n = 0;
                            }
                            if (n == 0) {
                                p->unk_00.unk_04->func_0C(*h, p->unk_00.unk_0C, p->unk_00.unk_00);
                                func_0886A45C(*h, p->unk_00.unk_00);
                            }
                        }
                    }
                }
            }
            p++;
        } while (p != v->unk_00 + *sz);
    }
    arg0->unk_3810.unk_04 = 0;
}

}

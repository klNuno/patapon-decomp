#include "common.h"

extern "C" {

class B_089AF9E8 {
public:
    virtual void v08();
    virtual void v0C(void *, s32 *, s32);
};

void func_089B0B00(void *, s32);
void func_088FC800(void *, s32);
void func_089458C8(void *, s32);
void func_089B3344(void *, s32);
void func_0880416C(void *);
extern u8 D_08A488FC[];

class E_089AF9E8 {
public:
    s32 unk_00;
    B_089AF9E8 *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void destroy() {
        void **temp;
        s32 temp3;

        if (this != NULL && (temp = &unk_08, *temp != NULL)) {
            --*unk_0C;
            if (unk_0C != NULL) {
                temp3 = *unk_0C;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v0C(*temp, unk_0C, unk_00);
                func_089B0B00(*temp, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x84];
    E_089AF9E8 *unk_84;
    s32 unk_88;
} C_089AF9E8;

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    u8 pad_5C[8];
    C_089AF9E8 unk_64;
    C_089AF9E8 unk_F0;
    u8 unk_17C[0x14];
    u8 unk_190[4];
} S_089AF9E8;

S_089AF9E8 *func_089AF9E8(S_089AF9E8 *arg0, s16 arg1) {
    E_089AF9E8 *p;
    E_089AF9E8 **d;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_58 = D_08A488FC;
        func_088FC800(arg0->unk_190, -1);
        func_089458C8(arg0->unk_17C, -1);
        if (&arg0->unk_F0 != NULL) {
            p = arg0->unk_F0.unk_84;
            d = &arg0->unk_F0.unk_84;
            if ((u32)p != (u32)(p + arg0->unk_F0.unk_88)) {
                n = &arg0->unk_F0.unk_88;
                do {
                    if (p != NULL) {
                        p->destroy();
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_F0.unk_88 = 0;
        }
        if (&arg0->unk_64 != NULL) {
            p = arg0->unk_64.unk_84;
            d = &arg0->unk_64.unk_84;
            if ((u32)p != (u32)(p + arg0->unk_64.unk_88)) {
                n = &arg0->unk_64.unk_88;
                do {
                    if (p != NULL) {
                        p->destroy();
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_64.unk_88 = 0;
        }
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

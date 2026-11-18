#include "common.h"

extern "C" {

class S1 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40(s32 *, s32);
};

typedef struct {
    u8 pad_00[3];
    u8 unk_03;
    u32 unk_04;
    s32 unk_08;
    u32 unk_0C;
    u8 pad_10[4];
    s32 unk_14[1];
} S2;

typedef struct {
    S2 *unk_00;
    s32 unk_04;
} S3;

typedef struct {
    S2 *unk_00;
    s32 *unk_04;
    u8 pad_08[4];
    S1 unk_0C;
} S0;

void func_08926678(S0 *arg0, S3 *arg1) {
    S3 a = *arg1;
    s32 b = *(volatile s32 *)&a.unk_04;
    S2 *p;
    u32 n;
    s32 *t;
    u32 i;
    u8 *u;
    s32 m;
    s32 x;

    arg0->unk_0C.unk_0C();
    arg0->unk_0C.unk_40(&b, 0);
    p = *(S2 *volatile *)&a.unk_00;
    arg0->unk_00 = p;
    n = p->unk_0C;
    if (p->unk_03 == 0x4C) {
        t = p->unk_14;
        if (p->unk_04 >= 0x20U) {
            m = 12;
        } else {
            m = 2;
        }
        u = (u8 *)(t + n);
        i = 0;
        if (n != 0) {
            do {
                x = *t;
                if (x != -1) {
                    *t = (s32)(u + x * (m * arg0->unk_00->unk_08));
                }
                ++i;
                ++t;
            } while (i < n);
        }
        p->unk_03 = 0x40;
    }
    arg0->unk_04 = (*(S2 *volatile *)&a.unk_00)->unk_14;
}

}

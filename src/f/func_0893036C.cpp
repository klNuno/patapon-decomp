#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x10];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual f32 unk_24(s32);
    virtual f32 unk_28(s32);
};

typedef struct {
    T *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    s32 unk_0C;
} E;

typedef struct {
    u8 pad_00[0x98];
    E unk_98[6];
} S;

f32 func_08866564(u32, u32, f32);

void func_0893036C(S *arg0, s32 arg1, u32 arg2) {
    if (arg1 < 0) {
        s32 i;
        S *p;

        p = arg0;
        i = 0;
        do {
            if (p->unk_98[0].unk_00 != NULL) {
                f32 t = p->unk_98[0].unk_00->unk_28(p->unk_98[0].unk_0C);
                p->unk_98[0].unk_08 += t * func_08866564(arg2, 0x12C0, 1.0f);
                f32 u = p->unk_98[0].unk_00->unk_24(p->unk_98[0].unk_0C);
                if (u < p->unk_98[0].unk_08) {
                    p->unk_98[0].unk_08 = 0.0f;
                }
            }
            ++i;
            p = (S *)((u8 *)p + sizeof(E));
        } while (i < 6);
    } else {
        S *p = (S *)((arg1 << 4) + (u32)arg0);
        if (p->unk_98[0].unk_00 != NULL) {
            s32 &i = p->unk_98[0].unk_0C;
            T *&o = p->unk_98[0].unk_00;
            f32 &v = p->unk_98[0].unk_08;
            f32 t = o->unk_28(i);
            v += t * func_08866564(arg2, 0x12C0, 1.0f);
            f32 u = o->unk_24(i);
            if (u < v) {
                v = 0.0f;
            }
        }
    }
}

}

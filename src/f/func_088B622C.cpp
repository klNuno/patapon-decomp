#include "common.h"

extern "C" {

class D {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_088899D8(s32, s32);
void func_088B7284(s32, f32);

struct S {
    s32 unk_00;
    D *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    void addref() {
        if (unk_08 != 0) {
            ++**(s32 **)((u8 *)this + 0xC);
        }
    }

    void release() {
        if (*(volatile s32 *)&unk_08 != 0) {
            --**(s32 *volatile *)&unk_0C;
            s32 *p = *(s32 *volatile *)&unk_0C;
            s32 n;
            if (p != NULL) {
                n = *p;
            } else {
                n = 0;
            }
            if (n == 0) {
                unk_04->vf_0C(unk_08, p, unk_00);
                func_088899D8(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x24];
    S *unk_24;
    u32 unk_28;
} T;

void func_088B622C(T *arg0, f32 arg1) {
    S temp;
    u32 i;
    u32 off;
    S **p;
    S *lp;
    u32 count = arg0->unk_28;

    i = 0;
    if (count != 0) {
        lp = &temp;
        if (count != 0) {
            off = 0;
            p = &arg0->unk_24;
            do {
                S *s = (S *)((u8 *)*p + off);
                temp = *s;
                lp->addref();
                func_088B7284(temp.unk_08, arg1);
                temp.release();
                i++;
                off += sizeof(S);
            } while (i < arg0->unk_28);
        }
    }
}

}

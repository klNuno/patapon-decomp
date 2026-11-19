#include "common.h"

extern "C" {

struct A_089B0414 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_089B0B00(s32, s32);
s32 func_088FD044(s32);
void func_088FD04C(s32, s32);

struct H_089B0414 {
    s32 unk_00;
    A_089B0414 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void addref() {
        s32 *&c = unk_0C;
        if (unk_08 != 0) {
            ++*c;
        }
    }
    void release() {
        if (unk_08 != 0) {
            *(s32 *)*(s32 *volatile *)&unk_0C -= 1;
            s32 *q = unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                unk_04->v0C(unk_08, q, unk_00);
                func_089B0B00(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    H_089B0414 *unk_00;
    u32 unk_04;
} V_089B0414;

typedef struct {
    u8 pad_00[0x174];
    V_089B0414 unk_174;
    u8 pad_17C[8];
    s32 *unk_184;
} Obj_089B0414;

void func_089B0414(Obj_089B0414 *arg0) {
    u32 i;
    s32 j;
    V_089B0414 *v;
    H_089B0414 h;
    H_089B0414 *lp;

    i = 0;
    if (arg0->unk_174.unk_04 != 0) {
        lp = &h;
        if (arg0->unk_174.unk_04 != 0) {
            j = 0;
            v = &arg0->unk_174;
            do {
                h = *(H_089B0414 *)((u8 *)v->unk_00 + j);
                lp->addref();
                if (func_088FD044(h.unk_08) == -1) {
                    h.release();
                } else {
                    ((s8 *)&arg0->unk_184[func_088FD044(h.unk_08)])[4]++;
                    func_088FD04C(h.unk_08, -1);
                    h.release();
                }
                j += sizeof(H_089B0414);
            } while (++i < arg0->unk_174.unk_04);
        }
    }
}

}

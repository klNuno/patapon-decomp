#include "common.h"

extern "C" {

struct V0_088D2DCC {
    virtual s32 *v08(s32, s32);
    virtual void v0C(s32, s32 *, s32);
};

struct RC_088D2DCC {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

V0_088D2DCC *func_08827AD4(void);

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct H_088D2DCC {
    s32 unk_00;
    V0_088D2DCC *unk_04;
    s32 unk_08;
    RC_088D2DCC unk_0C;

    H_088D2DCC(s32 a, s32 p) {
        unk_00 = a;
        unk_04 = func_08827AD4();
        unk_08 = p;
        unk_0C.unk_00 = unk_04->v08(p, *(volatile s32 *)&unk_00);
        *unk_0C.unk_00 = 1;
    }
    H_088D2DCC(const H_088D2DCC &o) {
        unk_00 = *(volatile s32 *)&o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = *(volatile s32 *)&o.unk_08;
        unk_0C.unk_00 = o.unk_0C.unk_00;
        if (unk_08 != 0) {
            ++*unk_0C.unk_00;
        }
    }
} H_088D2DCC;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x1C];
} En_088D2DCC;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x404];
    H_088D2DCC *unk_408;
    s32 unk_40C;
    s32 unk_410;
    s32 unk_414;
} Obj_088D2DCC;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} Hdr_088D2DCC;

s32 func_08827A50(s32, s32);
s32 func_088D26D0(s32, void *);
s32 func_088D2A14(s32, u32, void *, s32, s32);
void func_088D3204(s32, s32);

void func_088D2DCC(Obj_088D2DCC *arg0, Hdr_088D2DCC *arg1) {
    u32 *base;
    u32 n;
    u32 i;
    En_088D2DCC *e;
    s32 a;
    s32 p;
    H_088D2DCC *d;

    i = 0;
    base = (u32 *)((u8 *)arg1 + arg1->unk_18);
    n = *base;
    e = (En_088D2DCC *)(base + 1);
    if (n != 0) {
        do {
            a = arg0->unk_00;
            p = func_08827A50(0x38, a);
            if (p != 0) {
                p = func_088D2A14(p, i, e, arg0->unk_410, func_088D26D0(arg0->unk_414, e->unk_10));
            }
            H_088D2DCC h(a, p);
            new (arg0->unk_408 + arg0->unk_40C) H_088D2DCC(h);
            arg0->unk_40C++;
            if (h.unk_08 != 0) {
                *(s32 *)*(volatile s32 *)&h.unk_0C.unk_00 -= 1;
                s32 *q = h.unk_0C.unk_00;
                if ((q != NULL ? *q : 0) == 0) {
                    h.unk_04->v0C(h.unk_08, h.unk_0C.unk_00, h.unk_00);
                    func_088D3204(h.unk_08, h.unk_00);
                }
            }
            i++;
            e++;
        } while (i < n);
    }
}

}

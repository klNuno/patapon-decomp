#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class Del_088B5C38 {
public:
    virtual s32 *vf_08(void *, s32);
    virtual void vf_0C(void *, s32 *, s32);
};

void func_088899D8(void *, s32);
Del_088B5C38 *func_08827AD4(void);

class Ptr_088B5C38 {
public:
    s32 unk_00;
    Del_088B5C38 *unk_04;
    void *unk_08;
    s32 *unk_0C;
    Ptr_088B5C38(void *t, s32 a)
        : unk_00(a), unk_04(func_08827AD4()), unk_08(t), unk_0C(unk_04->vf_08(t, *(volatile s32 *)&unk_00)) {
        *unk_0C = 1;
    }
    Ptr_088B5C38(const Ptr_088B5C38 &o) {
        unk_00 = *(volatile s32 *)&o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = *(void *volatile *)&o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != NULL) {
            ++*unk_0C;
        }
    }
    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->vf_0C(unk_08, c, unk_00);
                func_088899D8(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x24];
    Ptr_088B5C38 *unk_24;
    s32 unk_28;
} Obj_088B5C38;

typedef struct {
    s32 unk_00;
    char unk_04[0x1C];
} N_088B5C38;

typedef struct {
    u8 pad_00[0x24];
    N_088B5C38 unk_24;
} I_088B5C38;

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
} A4_088B5C38;

s32 func_08822BC4(char *);
void *func_08827A50(s32, s32);
void *func_088B6710(void *, N_088B5C38 *, s32, s32);

void func_088B5C38(Obj_088B5C38 *arg0, s32 arg1, s32 arg2, I_088B5C38 *arg3, A4_088B5C38 *arg4) {
    u32 i;
    N_088B5C38 *n;
    void *o;

    for (i = 0; i < 2; i++) {
        n = &arg3[i].unk_24;
        if (func_08822BC4(n->unk_04) == 0) {
            return;
        }
        o = func_08827A50(0x370, arg1);
        if (o != NULL) {
            o = func_088B6710(o, n, arg2, arg4->unk_28);
        }
        Ptr_088B5C38 h(o, arg1);
        new (&arg0->unk_24[arg0->unk_28]) Ptr_088B5C38(h);
        arg0->unk_28++;
        h.release();
    }
}

}

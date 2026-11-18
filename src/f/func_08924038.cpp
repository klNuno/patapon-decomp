#include "common.h"

extern "C" {

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x24];
    V unk_24;
} M;

typedef struct {
    void *unk_00;
} B;

typedef struct {
    B unk_00;
    M unk_04;
} C;

class A {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

class O : public A {
public:
    u8 pad_04[0x18];
    C unk_1C;
};

extern u8 D_08A458F8[];
extern u8 D_08A45908[];
extern u8 D_08A46DF8[];
extern u8 D_08A46E04[];
void func_0880416C(void *);

O *func_08924038(O *arg0, s16 arg1) {
    s32 *p;
    V *v;

    if (arg0 != NULL) {
        *(void **)arg0 = D_08A46DF8;
        arg0->unk_1C.unk_00.unk_00 = D_08A46E04;
        arg0->v7();
        if (&arg0->unk_1C != NULL) {
            arg0->unk_1C.unk_00.unk_00 = D_08A458F8;
            if (&arg0->unk_1C.unk_04 != NULL) {
                v = &arg0->unk_1C.unk_04.unk_24;
                p = arg0->unk_1C.unk_04.unk_24.unk_00;
                if ((u32)p != (u32)(p + arg0->unk_1C.unk_04.unk_24.unk_04)) {
                    do {
                        p++;
                    } while (p != v->unk_00 + arg0->unk_1C.unk_04.unk_24.unk_04);
                }
                arg0->unk_1C.unk_04.unk_24.unk_04 = 0;
            }
            if (&arg0->unk_1C.unk_00 != NULL) {
                arg0->unk_1C.unk_00.unk_00 = D_08A45908;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}

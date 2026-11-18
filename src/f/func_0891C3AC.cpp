#include "common.h"

extern "C" {

class C {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5(void *);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(void *);
};

typedef struct E {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 unk_44[0x20];
} E;

typedef struct S {
    u8 pad_00[0x44];
    u8 unk_44[0x20];
} S;

typedef struct O {
    u8 pad_00[0x644];
    E *unk_644;
    u8 pad_648[4];
    C unk_64C;
} O;

void *func_08868D9C(void *, s32, s32, s32);
s32 func_08822BC4(S *);
void func_0881F120(void *, void *, s32);
extern void *D_08AD1E28[];
extern s32 D_08A00B20[];
extern S D_089E5F20[];

void func_0891C3AC(O *arg0) {
    u32 i;
    S *s;
    E *e;
    E **pp;
    s32 off;

    arg0->unk_64C.v15(func_08868D9C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 1, D_08A00B20[0], 1));
    i = 0;
    s = D_089E5F20;
    off = 0;
    pp = &arg0->unk_644;
    for (; i < 9; i++) {
        if (func_08822BC4(s) != 0) {
            e = (E *)((u8 *)*pp + off);
            e->unk_40 = arg0->unk_64C.v5(s);
        } else {
            ((E *)((u8 *)*pp + off))->unk_40 = -1;
        }
        func_0881F120(((E *)((u8 *)*pp + off))->unk_44, s->unk_44, 0x20);
        s++;
        off += sizeof(E);
    }
}

}

#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0x10];
} E_08944624;

class C_08944624 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0x20];
    E_08944624 *unk_34;
    u32 unk_38;
    u8 pad_3C[0x354];
    u8 unk_390[4];
};

typedef struct {
    u8 pad_00[0x10];
} T_08944624;

void *func_08827A50(u32, s32);
s32 func_08858B9C(void);
void *func_088E5EAC(void *, s32, s32, s32, s32, s32, s32);
void *func_088A8B20(void *);
void func_0894485C(T_08944624 *, void *, s32);
void func_08944818(T_08944624 *, u8 *);
void func_08943FE0(T_08944624 *, s32);
void func_089447B4(T_08944624 *, void *, s32);
void func_08944770(T_08944624 *, u8 *);
void func_08853B50(T_08944624 *, s32);

void func_08944624(C_08944624 *arg0) {
    T_08944624 a;
    T_08944624 b;
    u32 i;
    void *p;
    s32 al;
    u8 *e;

    arg0->v48();
    for (i = 0; i < arg0->unk_38; i++) {
        al = arg0->unk_10;
        p = func_08827A50(0x4B4, al);
        if (p != NULL) {
            p = func_088E5EAC(p, func_08858B9C(), 0x48, 0x48, 0x48, 0x48, 1);
        }
        e = arg0->unk_34[i].unk_20;
        func_0894485C(&a, p, al);
        func_08944818(&a, e);
        func_08943FE0(&a, -1);
    }
    al = arg0->unk_10;
    if ((p = func_08827A50(0x10, al)) != NULL) {
        p = func_088A8B20(p);
    }
    func_089447B4(&b, p, al);
    func_08944770(&b, arg0->unk_390);
    func_08853B50(&b, -1);
    arg0->v54();
}

}

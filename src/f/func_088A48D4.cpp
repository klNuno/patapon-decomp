#include "common.h"

extern "C" {

class C_088A48D4 {
public:
    u8 pad_00[8];
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
    virtual void v58();
};

typedef struct {
    u8 *unk_00;
    s32 unk_04;
} V_088A48D4;

typedef struct {
    u8 pad_00[0x184];
    V_088A48D4 unk_184;
    s32 unk_18C;
} M3A4_088A48D4;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
} M1110_088A48D4;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[0x2C];
    s32 unk_3A0;
    M3A4_088A48D4 unk_3A4;
    u8 pad_534[0xC];
    u8 unk_540[0x10F0 - 0x540];
    s32 unk_10F0;
    u8 pad_10F4[0x1C];
    M1110_088A48D4 unk_1110;
    u8 pad_1124[0x1AC0 - 0x1124];
    s32 unk_1AC0;
} S_088A48D4;

extern u8 D_08A456A8[];
extern u8 D_08A459A0[];
extern u8 D_08A459BC[];
extern u8 D_08A459D4[];
extern u8 D_08A459E4[];
extern u8 D_08A45A30[];

s32 func_0893D430(s32 *);
void func_08969254(S_088A48D4 *, s32, s32);
u8 *func_088A4B38(M3A4_088A48D4 *);
u8 *func_088A4B30(M3A4_088A48D4 *);
u8 *func_088A4A88(M3A4_088A48D4 *);
void *func_08807190(s32, u8 *);
void func_088A4A9C(void *);
void func_088B3898(void *, s32, s32, s32, s32);
void func_0885C520(M1110_088A48D4 *);
void func_088930FC(void *);
void func_088930D8(void);
void func_08893068(void);
void func_0880406C(void *, void (*)(void), void (*)(void), s32, s32);
void func_08892FA8(void *);
void func_08892F68(void *);
void func_08892D94(M1110_088A48D4 *);

S_088A48D4 *func_088A48D4(S_088A48D4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp = arg1;
    u8 *p;
    void *q;
    M1110_088A48D4 *s;

    func_08969254(arg0, arg2, func_0893D430(&temp));
    arg0->unk_08 = D_08A459A0;
    arg0->unk_58 = D_08A459BC;
    arg0->unk_7C = D_08A459D4;
    arg0->unk_CC = D_08A459E4;
    arg0->unk_370 = D_08A45A30;
    arg0->unk_3A0 = arg4;
    arg0->unk_3A4.unk_184.unk_00 = func_088A4B38(&arg0->unk_3A4);
    arg0->unk_3A4.unk_184.unk_04 = 3;
    for (p = func_088A4B30(&arg0->unk_3A4); p != func_088A4A88(&arg0->unk_3A4); p += 0x80) {
        q = func_08807190(0x80, p);
        if (q != NULL) {
            func_088A4A9C(q);
        }
    }
    arg0->unk_3A4.unk_18C = 0;
    func_088B3898(arg0->unk_540, arg1, arg2, arg3, arg4);
    arg0->unk_10F0 = 0;
    s = &arg0->unk_1110;
    func_0885C520(s);
    s->unk_00 = D_08A456A8;
    func_088930FC((u8 *)s + 0x10);
    func_0880406C((u8 *)s + 0x11C, func_088930D8, func_08893068, 0x20, 0x40);
    func_08892FA8((u8 *)s + 0x91C);
    func_08892FA8((u8 *)s + 0x944);
    func_08892F68((u8 *)s + 0x96C);
    func_08892D94(s);
    s->unk_10 = 0x40;
    arg0->unk_1AC0 = 0;
    ((C_088A48D4 *)arg0)->v58();
    return arg0;
}

}

#include "common.h"

extern "C" {
class B {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};
typedef struct { u8 pad_00[0x2E3C0]; u8 unk_2E3C0[1]; } C;
typedef struct { u8 pad_00[0x8D0]; u8 unk_8D0; } Obj2_089991B0;
typedef struct A {
    C *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    u8 pad_164[0x24C];
    Obj2_089991B0 *unk_3B0;
    u8 pad_3B4[0x68];
    u8 unk_41C;
    u8 pad_41D[3];
    u8 unk_420[11];
} A;

extern void *D_08AD1E28[];
extern void *D_08AD8DD8[];
extern s32 D_08A090F4[];
extern char D_08A09240[];
s32 *func_08868E8C(void *, s32, s32);
void func_089579E8(s32, s32, s32, f32);
void func_089D3BB8(void *, const void *, s32);
s32 func_089C2E40(A *);
extern void *func_08958954(u8 *);
extern s32 func_08985828(s32, s32);
void func_0898AD00(s32);
Obj2_089991B0 *func_0892E894(void *);

void func_089C1F98(A *arg0, f32 arg1) {
    s32 temp2 = *func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 7, D_08A090F4[0]);
    func_089579E8((s32)arg0->unk_00->unk_2E3C0, temp2, 4, arg1);
    func_089D3BB8(arg0->unk_420, D_08A09240, 11);
    s32 temp3 = (u8)func_089C2E40(arg0);
    ((B *)func_08958954(arg0->unk_00->unk_2E3C0))->unk_1C(temp3);
    func_0898AD00(func_08985828((s32)arg0, 0));
    func_0898AD00(func_08985828((s32)arg0, 2));
    arg0->unk_41C = 1;
    Obj2_089991B0 *temp4 = func_0892E894(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL);
    if ((arg0->unk_3B0 = temp4) != NULL) {
        temp4->unk_8D0 = 1;
    }
    arg0->unk_160 = 1;
}
}

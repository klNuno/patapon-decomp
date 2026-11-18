#include "common.h"

extern "C" {
extern s32 D_08A057F8[];
extern char D_08A05838[];
extern char D_08A05844[];
extern char D_08A05854[];
extern char D_08A05864[];
extern char D_08A05870[];
extern void *D_08AD1E28[];

void func_08991614(void *);
void func_089794B0(void *, s32, void *, s32);
void func_0899169C(void *, void *, char *, f32, f32, f32);
void func_08865FE4(void *, s32);
s32 func_08868CAC(void *, s32, char *, s32);

class S {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x460];
    s32 unk_470;
    u8 pad_474[0x109CC];
    u8 unk_10E40[0x90];
    u8 unk_10ED0[0x90];
    u8 unk_10F60[0x90];
    u8 unk_10FF0[0x90];
} T;

static inline void *unk_00() {
    void *temp = D_08AD1E28[0];
    return temp != NULL ? temp : NULL;
}

void func_08977A5C(T *arg0) {
    u8 temp[0x100];
    func_08991614(arg0->unk_10);
    func_089794B0(arg0, D_08A057F8[0], temp, 2);
    func_0899169C(arg0->unk_10, temp, D_08A05838, 1.0f / 6.0f, 53.5666656494140625f, 2.0f);
    func_08865FE4(arg0->unk_10E40, func_08868CAC(unk_00(), 3, D_08A05844, 1));
    func_08865FE4(arg0->unk_10ED0, func_08868CAC(unk_00(), 3, D_08A05854, 1));
    ((S *)arg0->unk_10ED0)->unk_14(0, 1);
    func_08865FE4(arg0->unk_10F60, func_08868CAC(unk_00(), 3, D_08A05864, 1));
    func_08865FE4(arg0->unk_10FF0, func_08868CAC(unk_00(), 3, D_08A05870, 1));
    arg0->unk_470 = 1;
}
}

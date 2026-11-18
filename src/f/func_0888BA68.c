#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0x48];
    u8 unk_5C[0x25C - 0x5C];
    u8 unk_25C[0x28];
    u8 unk_284[0x28];
    u8 unk_2AC[4];
} T;

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
    u8 pad_374[0x10];
    void *unk_384;
    u8 pad_388[0x18];
    s32 unk_3A0;
    u8 pad_3A4[0xC];
    T unk_3B0;
    u8 pad_3B0_[0x694 - 0x3B0 - sizeof(T)];
    s32 unk_694;
    u8 pad_698[8];
    u8 unk_6A0[0x960 - 0x6A0];
    s32 unk_960;
    u8 pad_964[0xC];
    u8 unk_970[0x14C0 - 0x970];
    u8 unk_14C0[0x18];
    u8 unk_14D8[0x173C - 0x14D8];
    u8 unk_173C[0x18C4 - 0x173C];
    s32 unk_18C4;
    s32 unk_18C8;
    s32 unk_18CC;
    u8 pad_18D0[4];
    s32 unk_18D4;
    u8 pad_18D8[0xC];
    s32 unk_18E4;
    s32 unk_18E8;
} S;

extern u8 D_08A454B4[];
extern u8 D_08A454D0[];
extern u8 D_08A454E8[];
extern u8 D_08A454F8[];
extern u8 D_08A45544[];
extern u8 D_08A45580[];
extern u8 D_089FA2E0[];

s32 func_0893D430(s32 *);
void func_08969254(S *, s32, s32);
void func_0885C520(T *);
void func_0888CAEC(void *);
void func_0888CAC8(void *);
void func_0888CA58(void *, s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_0888C998(void *);
void func_0888C958(void *);
void func_0888C784(T *);
void func_08976744(void *);
void func_088A75FC(void *, s32, s32, s32, S *);
void func_0888C500(void *);
void func_0888C420(void *);
void func_08890E34(void *);
void func_0888CC08(S *);

S *func_0888BA68(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    T *t;
    s32 k;

    k = arg1;
    func_08969254(arg0, arg2, func_0893D430(&k));
    arg0->unk_08 = D_08A454B4;
    arg0->unk_58 = D_08A454D0;
    arg0->unk_7C = D_08A454E8;
    arg0->unk_CC = D_08A454F8;
    arg0->unk_370 = D_08A45544;
    arg0->unk_3A0 = 0;
    t = &arg0->unk_3B0;
    func_0885C520(t);
    t->unk_00 = D_08A45580;
    func_0888CAEC(t->pad_04 + 0xC);
    func_0880406C(t->unk_5C, func_0888CAC8, func_0888CA58, 0x20, 0x10);
    func_0888C998(t->unk_25C);
    func_0888C998(t->unk_284);
    func_0888C958(t->unk_2AC);
    func_0888C784(t);
    t->unk_10 = 0x10;
    arg0->unk_694 = 0;
    func_08976744(arg0->unk_6A0);
    arg0->unk_960 = 0;
    func_088A75FC(arg0->unk_970, arg1, arg2, arg3, arg0);
    func_0888C500(arg0->unk_14D8);
    func_0888C420(arg0->unk_173C);
    func_08890E34(arg0->unk_14C0);
    arg0->unk_18C4 = 0;
    arg0->unk_18C8 = 0;
    arg0->unk_18CC = 0;
    arg0->unk_18D4 = 0;
    arg0->unk_18E4 = 0;
    arg0->unk_18E8 = 0;
    arg0->unk_384 = D_089FA2E0;
    func_0888CC08(arg0);
    return arg0;
}

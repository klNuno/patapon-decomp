#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C[0x174];
    u8 unk_190[0x50];
    s32 unk_1E0;
    u8 pad_1E4[0x128];
    u8 unk_30C[0x22E8];
    u8 unk_25F4;
} S_089506F8;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xA90];
    s32 unk_A98;
    u8 pad_A9C[0x10];
    char unk_AAC[0x44];
    u8 unk_AF0[0x1260];
    S_089506F8 unk_1D50;
    u8 pad_4348[8];
    u8 unk_4350[0x70];
    u8 unk_43C0[0x1E6B0 - 0x43C0];
    u8 unk_1E6B0[0x20010 - 0x1E6B0];
    u8 unk_20010[0x22060 - 0x20010];
    char unk_22060[0x118];
    u8 unk_22178[5];
    u8 unk_2217D;
} U;

void func_0881F5C0(void *, s32, s32);
void func_0894B5BC(char *, void *);
f32 func_0894BB94(void *, s32);
void func_0894C1A4(void *);
void func_0894DA4C(void *, f32);
void func_0894DB50(void *, s32);
void func_089506F8(S_089506F8 *, void *, void *, void *, void *);
extern void func_08950BB4(char *, s32);
void func_08952E30(void *);
void func_0895403C(void *, U *, void *);
void func_089570E0(char *, void *);
void func_08957870(U *);
void func_08958C60(void *, void *);

void func_08955B14(U *arg0) {
    u8 *temp = arg0->unk_20010;

    arg0->unk_A98 = 0;
    arg0->unk_04 = 0;
    func_089506F8(&arg0->unk_1D50, arg0->unk_AAC, temp, arg0->unk_4350, arg0->unk_22060);
    func_08950BB4((char *)&arg0->unk_1D50, (s32)arg0);
    func_0894C1A4(arg0->unk_20010);
    func_0894B5BC(arg0->unk_22060, arg0->unk_AAC);
    func_089570E0((char *)arg0, arg0->unk_22060);
    func_08958C60(arg0->unk_4350, arg0->unk_AAC);
    func_0894DA4C(arg0->unk_43C0, func_0894BB94(arg0->unk_22060, 4));
    func_0894DB50(arg0->unk_43C0, 0);
    func_0895403C(arg0->unk_1E6B0, arg0, arg0->unk_AAC);
    func_08952E30(arg0->unk_AF0);
    func_0881F5C0(arg0->unk_22178, 0, 5);
    func_08957870(arg0);
    arg0->unk_2217D = 1;
}

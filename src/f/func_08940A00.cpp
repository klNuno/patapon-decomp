#include "common.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" {

typedef struct {
    s32 unk_00;
} W_08940A00;

struct V_08940A00 {
    s32 *unk_00;
    s32 unk_04;
    void push(const volatile s32 &x) {
        new (unk_00 + unk_04) s32(x);
        unk_04++;
    }
};

typedef struct {
    u8 pad_00[0x84];
    V_08940A00 unk_84;
} E_08940A00;

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
    u8 pad_1C[0x3C0 - 0x1C];
    s32 unk_3C0;
    s32 unk_3C4;
    E_08940A00 unk_3C8[0x20];
    s32 unk_1548[0x24];
} S_08940A00;

extern u8 D_08A47430[];
extern u8 D_08A47448[];
extern volatile s32 D_08A03B20[];

void func_089437CC(void *, s32, s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_08940B74(void);
void func_08862BA8(void);

S_08940A00 *func_08940A00(S_08940A00 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 j;
    u32 i;

    func_089437CC(arg0, arg2, arg4);
    arg0->unk_00 = D_08A47430;
    arg0->unk_18 = D_08A47448;
    arg0->unk_3C0 = arg1;
    arg0->unk_3C4 = arg3;
    func_0880406C(arg0->unk_3C8, (void *)func_08940B74, (void *)func_08862BA8, 0x8C, 0x20);
    arg0->unk_1548[0] = 0;
    arg0->unk_1548[1] = 0;
    arg0->unk_1548[2] = 0;
    arg0->unk_1548[3] = 0;
    arg0->unk_1548[4] = 0;
    arg0->unk_1548[5] = 0;
    arg0->unk_1548[6] = 0;
    arg0->unk_1548[7] = 0;
    arg0->unk_1548[8] = 0;
    arg0->unk_1548[9] = 0;
    arg0->unk_1548[10] = 0;
    arg0->unk_1548[11] = 0;
    arg0->unk_1548[12] = 0;
    arg0->unk_1548[13] = 0;
    arg0->unk_1548[14] = 0;
    arg0->unk_1548[15] = 0;
    arg0->unk_1548[16] = 0;
    arg0->unk_1548[17] = 0;
    arg0->unk_1548[18] = 0;
    arg0->unk_1548[19] = 0;
    arg0->unk_1548[20] = 0;
    arg0->unk_1548[21] = 0;
    arg0->unk_1548[22] = 0;
    arg0->unk_1548[23] = 0;
    arg0->unk_1548[24] = 0;
    arg0->unk_1548[25] = 0;
    arg0->unk_1548[26] = 0;
    arg0->unk_1548[27] = 0;
    arg0->unk_1548[28] = 0;
    arg0->unk_1548[29] = 0;
    arg0->unk_1548[30] = 0;
    arg0->unk_1548[31] = 0;
    arg0->unk_1548[32] = 0;
    arg0->unk_1548[33] = 0;
    arg0->unk_1548[34] = 0;
    arg0->unk_1548[35] = 0;
    for (j = 0; j < 0x20; j++) {
        for (i = 0; i < 0x20; i++) {
            arg0->unk_3C8[i].unk_84.push(D_08A03B20[0]);
        }
    }
    return arg0;
}

}

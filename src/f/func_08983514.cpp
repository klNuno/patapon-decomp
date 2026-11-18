#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0x14C];
    s32 unk_190;
    u8 pad_194[0xC];
} U;

typedef struct {
    u8 pad_00[0x1D90];
    T unk_1D90;
} V;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} X;

typedef struct {
    u8 pad_00[0x3DAC];
    s32 unk_3DAC;
    u8 pad_3DB0[0x98];
    X *unk_3E48;
} S;

void func_08865FE4(void *, s32);
void func_08974410(T *, void *, f32);
void func_08974440(char *arg0, f32 farg0);
void func_08974648(T *, f32, f32);
void func_0897470C(T *, f32, f32, f32, f32);

void func_08983514(S *arg0, u32 arg1) {
    s32 temp = 0;
    s32 temp2 = 0;
    u8 *temp3 = (u8 *)arg0;
    f32 temp4 = 0.2f * (f32)arg1;
    do {
        if (*(s32 *)(temp3 + 0x440) != 0) {
            s32 temp5 = *(s32 *)(temp3 + 0x590);
            if (temp5 == 4) {
                goto label;
            }
            if (temp5 == 5) {
            label:
                func_08974410((T *)(temp3 + 0x400), (u8 *)arg0 + arg0->unk_3DAC * 0x40 + 0x2E10, temp4 / 8.0f);
                *(s32 *)(temp3 + 0x590) = 6;
                temp = 1;
            }
        }
        temp2++;
        temp3 += sizeof(U);
    } while (temp2 < 8);
    if (temp != 0) {
        func_08974440((char *)((u8 *)arg0 + arg0->unk_3DAC * 0x190 + 0x1D90), temp4 / 8.0f);
        func_08865FE4(((u8 *)arg0 + arg0->unk_3DAC * 0x190 + 0x1D90), arg0->unk_3E48->unk_48);
        ((V *)((u8 *)arg0 + arg0->unk_3DAC * 0x190))->unk_1D90.unk_14(0, 1);
        s32 temp8 = arg0->unk_3DAC;
        func_08974410((T *)((u8 *)arg0 + temp8 * 0x190 + 0x1D90), (u8 *)arg0 + temp8 * 0x40 + 0x2E10, 0.0f);
        func_08974648((T *)((u8 *)arg0 + arg0->unk_3DAC * 0x190 + 0x1D90), 0.0f, 0.0f);
        func_08974648((T *)((u8 *)arg0 + arg0->unk_3DAC * 0x190 + 0x1D90), 6.2831855f, 1.0f);
        func_0897470C((T *)((u8 *)arg0 + arg0->unk_3DAC * 0x190 + 0x1D90), 1.0f, -1.0f, 1.0f, 0.0f);
    }
}

}

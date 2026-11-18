#include "common.h"

extern "C" {

class S2_089C0A48 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};

typedef struct {
    u8 pad_00[0x2E3C0];
    char unk_2E3C0[1];
} S1_089C0A48;

typedef struct {
    S1_089C0A48 *unk_00;
    u8 pad_04[0xB90];
    s32 unk_B94;
    u8 pad_B98[8];
    s32 unk_BA0;
    u8 unk_BA4;
    u8 pad_BA5[3];
    s32 unk_BA8;
    s32 unk_BAC;
    u8 pad_BB0[4];
    s32 unk_BB4;
    s32 unk_BB8;
    s32 unk_BBC;
} S0_089C0A48;

s32 func_08958954(char *arg0);
extern s32 func_08985828(s32, s32);
void func_0898AD00(s32);
void func_0898ABB8(s32, f32, s32, s32);
s32 func_089BED28(char *arg0);

void func_089C0A48(S0_089C0A48 *arg0, s32 arg1) {
    func_0898AD00(func_08985828((s32)arg0, 0));
    func_0898AD00(func_08985828((s32)arg0, 1));
    if (arg1 == 0) {
        func_0898ABB8(func_08985828((s32)arg0, 0), 0.0f, 0xB, 1);
        func_0898ABB8(func_08985828((s32)arg0, 1), 0.0f, 1, 1);
        ((S2_089C0A48 *)func_08958954(arg0->unk_00->unk_2E3C0))->unk_1C(0);
        arg0->unk_BA8 = arg1;
    } else if (arg1 == 1) {
        func_0898ABB8(func_08985828((s32)arg0, 0), 0.0f, 0xA, 1);
        ((S2_089C0A48 *)func_08958954(arg0->unk_00->unk_2E3C0))->unk_1C(4 - arg0->unk_BB4);
        arg0->unk_BA8 = arg1;
        arg0->unk_BB8 = *(s32 *)func_089BED28((char *)func_08958954(arg0->unk_00->unk_2E3C0)) - 2;
    }
    arg0->unk_B94 = 1;
    arg0->unk_BAC = -1;
    arg0->unk_BA0 = 0;
    arg0->unk_BBC = -1;
    arg0->unk_BA4 = 0;
    arg0->unk_BB4 = 0;
}

}

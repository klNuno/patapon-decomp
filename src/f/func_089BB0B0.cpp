#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} UnkPair;

typedef struct {
    UnkPair unk_00;
    UnkPair unk_08;
    u8 pad_10[8];
} UnkBlock;

struct V4 {
    f32 unk_00, unk_04, unk_08, unk_0C;
};

struct V_0898E100 {
    f32 unk_00, unk_04, unk_08, unk_0C;

    V_0898E100(const V4 &arg0) {
        u8 *temp = (u8 *)this;
        s32 temp2 = 0x10;
        if (temp != NULL) {
            do {
                *temp++ = 0;
            } while (--temp2);
        }
        f32 temp00 = arg0.unk_00;
        f32 temp04 = arg0.unk_04;
        f32 temp08 = arg0.unk_08;
        f32 temp0C = arg0.unk_0C;
        unk_00 = temp00;
        unk_04 = temp04;
        unk_08 = temp08;
        unk_0C = temp0C;
    }
};

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(f32, UnkPair *, UnkPair *);
};

typedef struct {
    u8 pad_00[0x120];
    u8 unk_120[0x44];
    s32 unk_164;
    u8 pad_168[0x48];
    u8 unk_1B0[0x44];
    s32 unk_1F4;
    u8 pad_1F8[0x48];
    u8 unk_240[0x44];
    s32 unk_284;
    u8 pad_288[0x58];
    u8 unk_2E0[4];
} S;

extern UnkBlock D_089F2500[];
extern UnkBlock D_089F2510[];
extern f32 D_089F2520[];
extern f32 D_089F2524[];
extern f32 D_089F2528[];
extern f32 D_089F252C[];
extern f32 D_089F2530[];
extern f32 D_089F2538[];
extern f32 D_089F2540[];
extern f32 D_089F2544[];

void func_08854F60(f32, V4 *, V4 *);
s32 func_08856400(V_0898E100 *);
void func_089BB3A8(void *, UnkPair *, volatile UnkBlock *, s32);
void func_089BB5A0(void *, UnkPair *, UnkPair *);

void func_089BB0B0(S *arg0, UnkPair *arg1, s32 arg2) {
    UnkPair temp, temp2;
    UnkPair temp3, temp4;
    UnkPair temp5, temp6;
    UnkPair temp7, temp8;
    V4 temp9;
    V4 temp10;
    f32 temp11;
    f32 temp12;

    func_089BB3A8(arg0, arg1, arg2 != 0 ? D_089F2510 : D_089F2500, arg2);
    temp11 = arg2 != 0 ? 1.0f : 0.6f;
    temp2.unk_00 = 1.0f;
    temp2.unk_04 = 1.0f;
    temp12 = arg1->unk_04 + D_089F2524[0];
    temp.unk_00 = arg1->unk_00 + D_089F2520[0];
    temp.unk_04 = temp12;
    ((T *)arg0->unk_2E0)->unk_1C(temp11, &temp, &temp2);
    temp9.unk_00 = 1.0f;
    temp9.unk_04 = 1.0f;
    temp9.unk_08 = 1.0f;
    temp9.unk_0C = 1.0f;
    temp10.unk_00 = D_089F2530[0];
    temp10.unk_04 = D_089F2530[1];
    temp10.unk_08 = D_089F2538[0];
    temp10.unk_0C = D_089F2538[1];
    if ((u8)arg2 == 0) {
        func_08854F60(0.75f, &temp9, &temp9);
        temp9.unk_0C = 0.6f;
        func_08854F60(0.75f, &temp10, &temp10);
        temp10.unk_0C = 0.6f;
    }
    V_0898E100 temp13(temp9);
    arg0->unk_164 = func_08856400(&temp13);
    V_0898E100 temp14(temp9);
    arg0->unk_284 = func_08856400(&temp14);
    V_0898E100 temp15(temp10);
    arg0->unk_1F4 = func_08856400(&temp15);
    temp4.unk_00 = 1.0f;
    temp4.unk_04 = 1.0f;
    temp12 = arg1->unk_04 + D_089F252C[0];
    temp3.unk_00 = arg1->unk_00 + D_089F2528[0];
    temp3.unk_04 = temp12;
    func_089BB5A0(arg0->unk_120, &temp3, &temp4);
    temp6.unk_00 = 1.0f;
    temp6.unk_04 = 1.0f;
    temp12 = arg1->unk_04 + D_089F252C[0];
    temp5.unk_00 = arg1->unk_00 + D_089F2528[0];
    temp5.unk_04 = temp12;
    func_089BB5A0(arg0->unk_1B0, &temp5, &temp6);
    temp8.unk_00 = 1.0f;
    temp8.unk_04 = 1.0f;
    temp12 = arg1->unk_04 + D_089F2544[0];
    f32 temp16 = arg1->unk_00 + D_089F2540[0];
    temp7.unk_04 = temp12;
    temp7.unk_00 = temp16;
    func_089BB5A0(arg0->unk_240, &temp7, &temp8);
}

}

#include "common.h"

f32 func_08855060(void *, void *);
void func_088155BC(s32);
void func_08930664(void *, void *);

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
} V;

typedef struct {
    u8 pad_00[0x3E4];
    V *unk_3E4;
} U;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x3C];
    V *unk_40;
    u8 pad_44[0x4C];
    u8 unk_90[0x360];
    U *unk_3F0;
    u8 pad_3F4[0x4C];
    u8 unk_440[0x100];
    u8 unk_540[0x74];
    u8 unk_5B4;
} S;

static inline s32 func_0(S *arg0) {
    V *temp0;
    f32 temp1;
    u8 *temp2;
    u32 temp4;
    V *temp3;
    V *temp5;

    temp0 = arg0->unk_40;
    temp1 = -(temp0 != NULL ? temp0->unk_0C : 0.0f);
    temp2 = arg0->unk_90;
    temp3 = arg0->unk_3F0->unk_3E4;
    temp4 = 0;
    temp5 = temp3;
    do {
        f32 temp6 = func_08855060(temp2, temp3);
        temp6 += temp5->unk_0C;
        if (((temp6 <= temp1) ^ 1) == 0) {
            return 0;
        }
        ++temp4;
        ++temp3;
        ++temp5;
    } while (temp4 < 2);
    return 1;
}

void func_0889D798(S *arg0) {
    if (arg0->unk_5B4 != 0 && func_0(arg0) == 0) {
        return;
    }
    func_088155BC(((u32)arg0->unk_00 >> 31) ^ 1);
    func_08930664(arg0->unk_440, arg0->unk_540);
    func_088155BC(1);
}

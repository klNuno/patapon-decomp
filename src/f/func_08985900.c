#include "common.h"

typedef struct {
    u8 pad_00[0x54];
} E_08985900;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    u8 unk_08[0x2A04];
    E_08985900 *unk_2A0C;
    u32 unk_2A10;
    E_08985900 *unk_2A14;
    u8 pad_2A18[0x2C];
    s32 unk_2A44;
    u8 unk_2A48[0x2E8];
    s32 unk_2D30[4];
    u8 pad_2D40[4];
    s32 unk_2D44;
    u8 pad_2D48[4];
    s32 unk_2D4C;
    s32 unk_2D50;
    u8 pad_2D54[8];
    s32 unk_2D5C;
    s32 unk_2D60;
    s32 unk_2D64;
    u8 unk_2D68;
    u8 unk_2D69;
    u8 pad_2D6A[6];
    s32 unk_2D70;
    s32 unk_2D74;
    s32 unk_2D78;
    s32 unk_2D7C;
} Obj_08985900;

void func_088D6974(void *);

Obj_08985900 *func_08985900(Obj_08985900 *arg0, s32 arg1, s32 arg2) {
    s32 *p;

    arg0->unk_00 = 1;
    arg0->unk_04 = arg1;
    arg0->unk_2A0C = (E_08985900 *)(((u32)arg0->unk_08 & 3) + (u32)arg0 + 0x08);
    arg0->unk_2A10 = 0;
    arg0->unk_2A44 = arg2;
    func_088D6974(arg0->unk_2A48);
    p = arg0->unk_2D30;
    do {
        *p = -1;
        p++;
    } while (p < arg0->unk_2D30 + 4);
    arg0->unk_2D4C = -1;
    arg0->unk_2D50 = 0;
    arg0->unk_2D5C = 0;
    arg0->unk_2D60 = 0;
    arg0->unk_2D64 = 0;
    arg0->unk_2D68 = 0;
    arg0->unk_2D69 = 0;
    arg0->unk_2D70 = 0;
    arg0->unk_2D74 = 0;
    arg0->unk_2D78 = 0;
    arg0->unk_2D7C = 0;
    arg0->unk_2A14 = arg0->unk_2A0C + arg0->unk_2A10;
    arg0->unk_2D44 = 0;
    return arg0;
}

#include "common.h"
typedef struct T T;
struct T {
    s32 unk_00;
    s32 unk_04;
    T *unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 unk_40;
    u8 unk_41;
    u8 pad_42[2];
    s32 unk_44;
    s32 unk_48;
    T *unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    u8 pad_5C[4];
    u8 unk_60[0x20];
    u8 unk_80[0x20];
};
extern void func_0881F5C0(void *, s32, s32);
extern void func_08880530(void *, T *);
void func_08882EC0(T *arg0) {
    struct { T *unk_00; } h;
    h.unk_00 = arg0;
    h.unk_00->unk_20 = 0;
    h.unk_00->unk_24 = 0;
    h.unk_00->unk_28 = 0;
    h.unk_00->unk_2C = 0;
    h.unk_00->unk_30 = -2;
    h.unk_00->unk_34 = 0;
    h.unk_00->unk_38 = 0;
    h.unk_00->unk_3C = 0;
    h.unk_00->unk_40 = 0;
    h.unk_00->unk_41 = 0;
    h.unk_00->unk_44 = 0;
    h.unk_00->unk_48 = 0;
    h.unk_00->unk_4C = h.unk_00;
    h.unk_00->unk_50 = -1;
    h.unk_00->unk_54 = -1;
    h.unk_00->unk_58 = -1;
    if (h.unk_00->unk_0C != NULL) {
        func_08880530(h.unk_00->unk_0C, h.unk_00);
    }
    h.unk_00->unk_0C = NULL;
    h.unk_00->unk_04 = 0;
    h.unk_00->unk_00 = 0;
    h.unk_00->unk_08 = h.unk_00;
    func_0881F5C0(h.unk_00->unk_60, 0, 0x20);
    func_0881F5C0(h.unk_00->unk_80, 0, 0x20);
}

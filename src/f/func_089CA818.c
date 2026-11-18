#include "common.h"

extern u8 D_08A48DCC[];
extern u8 D_08A48DE4[];

typedef struct Obj_089CA818 {
    u8 pad_00[0x28];
    void *unk_28;
    u8 unk_2C[0x1C];
    void *unk_48;
    u8 pad_4C[0x14];
    u8 unk_60[4];
} Obj_089CA818;

void func_0880416C(void *);
extern int func_08865F78(s32, s32);
void func_088CE530(void *, s32);
void func_089CA6FC(void *);

Obj_089CA818 *func_089CA818(Obj_089CA818 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A48DCC;
        func_08865F78((s32)arg0->unk_60, -1);
        if (arg0->unk_2C != NULL) {
            arg0->unk_48 = D_08A48DE4;
            func_089CA6FC(arg0->unk_2C);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

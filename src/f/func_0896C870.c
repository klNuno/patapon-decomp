#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} Sub_0896C870;

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
    u8 pad_20[0x4];
    Sub_0896C870 unk_24;
} Obj_0896C870;

extern u8 D_08A44BE0[];
extern u8 D_08A44BF0[];
extern u8 D_08A47ED8[];

void func_0880416C(void *);
void func_08867CBC(void *);
void func_08867F04(void *);
void func_088683A8(void *, s32);

Obj_0896C870 *func_0896C870(Obj_0896C870 *arg0, s16 arg1) {
    Sub_0896C870 *temp_a0;

    if (arg0 != NULL) {
        arg0->unk_1C = D_08A47ED8;
        temp_a0 = &arg0->unk_24;
        if (temp_a0 != NULL) {
            arg0->unk_24.unk_24 = D_08A44BF0;
            func_08867F04(temp_a0);
            func_088683A8(&arg0->unk_24, -1);
        }
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A44BE0;
            func_08867CBC(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

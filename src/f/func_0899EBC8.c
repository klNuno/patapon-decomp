#include "common.h"

typedef struct Sub_0899EBC8 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 *unk_18;
} Sub_0899EBC8;

typedef struct Obj_0899EBC8 {
    u8 pad_00[0xC];
    Sub_0899EBC8 unk_0C;
    u8 unk_28[0x28 * 0x12];
} Obj_0899EBC8;

void func_08804000(void *, void (*)(void *), s32, s32);
void func_0880416C(void *);
void func_0885DE4C(Sub_0899EBC8 *);
void func_0899EB24(void *);
extern u8 D_08A44AD8[];

Obj_0899EBC8 *func_0899EBC8(Obj_0899EBC8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08804000(arg0->unk_28, func_0899EB24, 0x28, 0x12);
        if (arg0 != NULL) {
            if (&arg0->unk_0C != NULL) {
                arg0->unk_0C.unk_18 = D_08A44AD8;
                func_0885DE4C(&arg0->unk_0C);
                arg0->unk_0C.unk_0C = 0;
                arg0->unk_0C.unk_14 = 0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
    u8 pad_84[0x60];
    u8 unk_E4[0x8C];
    u8 unk_170[4];
} Obj;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_08888360(void *, s32);
void func_08927800(void *, s32);
extern u8 D_08A47CDC[];

Obj *func_08967328(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_80 = D_08A47CDC;
        func_08927800(arg0->unk_170, -1);
        if (arg0->unk_E4 != NULL) {
            func_08888360(arg0->unk_E4, -1);
        }
        func_08865F78(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

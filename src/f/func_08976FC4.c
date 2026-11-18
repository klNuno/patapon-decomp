#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x11C];
    u8 unk_120[0x100];
    u8 unk_220[0x28];
    u8 unk_248[0x10];
} Sub;

typedef struct {
    u8 pad_00[0x10];
    Sub unk_10;
    u8 pad_268[0x48];
    void *unk_2B0;
} Obj;

extern u8 D_08A47F88[];
extern u8 D_08A47FB0[];

void func_08977074(Obj *);
void func_08976C30(Sub *);
void func_08976AFC(void *, s32);
void func_08976EF4(void *);
void func_08804000(void *, void (*)(void *), s32, s32);
void func_0885BDA0(Sub *, s32);
void func_0880416C(void *);

Obj *func_08976FC4(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_2B0 = D_08A47F88;
        func_08977074(arg0);
        if (&arg0->unk_10 != NULL) {
            arg0->unk_10.unk_00 = D_08A47FB0;
            func_08976C30(&arg0->unk_10);
            func_08976AFC(arg0->unk_10.unk_248, -1);
            func_08976AFC(arg0->unk_10.unk_220, -1);
            func_08804000(arg0->unk_10.unk_120, func_08976EF4, 0x20, 8);
            func_0885BDA0(&arg0->unk_10, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[0x8800];
    u8 unk_8820[0x1000];
    u8 unk_9820[0x28];
    u8 unk_9848[0x5C];
    void *unk_98A4;
} Obj;

extern u8 D_08A44A4C[];
extern u8 D_08A44A74[];

void func_0885EA04(Obj *);
void func_0885E85C(void *, s32);
void func_0885ED6C(void *);
void func_0885FA00(void *);
void func_08804000(void *, void (*)(void *), s32, s32);
void func_0885BDA0(Obj *, s32);
void func_0880416C(void *);

Obj *func_0885EE18(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_98A4 = D_08A44A4C;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44A74;
            func_0885EA04(arg0);
            func_0885E85C(arg0->unk_9848, -1);
            func_0885E85C(arg0->unk_9820, -1);
            func_08804000(arg0->unk_8820, func_0885ED6C, 0x20, 0x80);
            func_08804000(arg0->unk_20, func_0885FA00, 0x110, 0x80);
            func_0885BDA0(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

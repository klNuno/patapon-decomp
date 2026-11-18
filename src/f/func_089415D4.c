#include "common.h"

typedef struct {
    u8 pad_00[0x380];
    u8 unk_380[0x11C8];
    u8 unk_1548[0x10];
    u8 unk_1558[0x10];
    u8 unk_1568[0x10];
    u8 unk_1578[0x10];
    u8 unk_1588[0x10];
    u8 unk_1598[0x10];
    u8 unk_15A8[0x10];
    u8 unk_15B8[0x10];
    u8 unk_15C8[0x10];
} T089415D4;

void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);

s32 func_089415D4(T089415D4 *arg0) {
    s32 r;
    s32 b;
    s32 e;
    s32 e0;
    s32 e1;
    s32 e2;
    s32 e3;
    s32 e4;
    s32 e5;
    s32 e6;
    s32 e7;
    s32 e8;

    func_08940664(&b, arg0->unk_380);
    func_0894065C(&e, arg0->unk_380);
    func_08940544(&r, arg0->unk_380, b, e);
    func_0894065C(&e0, arg0->unk_380);
    func_08941528(arg0->unk_380, e0, arg0->unk_1548);
    func_0894065C(&e1, arg0->unk_380);
    func_08941528(arg0->unk_380, e1, arg0->unk_1558);
    func_0894065C(&e2, arg0->unk_380);
    func_08941528(arg0->unk_380, e2, arg0->unk_1568);
    func_0894065C(&e3, arg0->unk_380);
    func_08941528(arg0->unk_380, e3, arg0->unk_1578);
    func_0894065C(&e4, arg0->unk_380);
    func_08941528(arg0->unk_380, e4, arg0->unk_1588);
    func_0894065C(&e5, arg0->unk_380);
    func_08941528(arg0->unk_380, e5, arg0->unk_1598);
    func_0894065C(&e6, arg0->unk_380);
    func_08941528(arg0->unk_380, e6, arg0->unk_15A8);
    func_0894065C(&e7, arg0->unk_380);
    func_08941528(arg0->unk_380, e7, arg0->unk_15B8);
    func_0894065C(&e8, arg0->unk_380);
    func_08941528(arg0->unk_380, e8, arg0->unk_15C8);
    return 1;
}

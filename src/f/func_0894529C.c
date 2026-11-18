#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x36C];
    u8 unk_380[0x44];
    u8 unk_3C4[0x10];
} S_0894529C;

typedef struct {
    u8 pad_00[0x10];
} H_0894529C;

void *func_08827A50(s32, s32);
void *func_0888D040(H_0894529C *, s16);
void func_088E5F98(H_0894529C *, void *);
void func_088E5FDC(H_0894529C *, void *, s32);
void *func_088FBCE8(void *);
void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);

s32 func_0894529C(S_0894529C *arg0) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    H_0894529C sp14;
    s32 sp10;
    s32 temp;
    void *p;

    func_08940664(&sp28, arg0->unk_380);
    func_0894065C(&sp24, arg0->unk_380);
    func_08940544(&sp2C, arg0->unk_380, sp28, sp24);
    temp = arg0->unk_10;
    p = func_08827A50(0x10, temp);
    if (p != NULL) {
        p = func_088FBCE8(p);
    }
    func_088E5FDC(&sp14, p, temp);
    func_088E5F98(&sp14, arg0->unk_3C4);
    func_0888D040(&sp14, -1);
    func_0894065C(&sp10, arg0->unk_380);
    func_08941528(arg0->unk_380, sp10, arg0->unk_3C4);
    return 1;
}

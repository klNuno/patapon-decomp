#include "common.h"

typedef struct {
    s32 unk_00;
} I_08944568;

typedef struct {
    u8 pad_00[0x40];
    void *unk_40;
    void *unk_44;
    u8 pad_48[0x18];
    s32 unk_60;
    u8 pad_64[0x31C];
    u8 unk_380[4];
} S_08944568;

void func_08943FD4(I_08944568 *, void *);
void func_08943FCC(I_08944568 *, void *);
s32 func_08943EE8(I_08944568 *, I_08944568 *);
void func_08943FA4(I_08944568 *, I_08944568 *, s32);
void func_08943F3C(I_08944568 *, void *, I_08944568);
void func_08940664(I_08944568 *, void *);
void func_0894065C(I_08944568 *, void *);
void func_08940544(I_08944568 *, void *, I_08944568, I_08944568);

void func_08944568(S_08944568 *arg0) {
    I_08944568 it;
    I_08944568 end;
    I_08944568 r;
    I_08944568 tmp;
    I_08944568 r2;
    I_08944568 b;
    I_08944568 e;

    func_08943FD4(&it, &arg0->unk_40);
    func_08943FCC(&end, &arg0->unk_40);
    while (func_08943EE8(&it, &end) != 0) {
        func_08943FA4(&tmp, &it, 0);
        func_08943F3C(&r, &arg0->unk_40, tmp);
    }
    arg0->unk_60 = 0;
    arg0->unk_44 = &arg0->unk_40;
    arg0->unk_40 = &arg0->unk_40;
    func_08940664(&b, arg0->unk_380);
    func_0894065C(&e, arg0->unk_380);
    func_08940544(&r2, arg0->unk_380, b, e);
}

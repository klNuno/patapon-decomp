#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} R;

typedef struct {
    u8 pad_00[0x1058];
} E_088DEC6C;

typedef struct {
    u8 pad_00[0x9B540];
    E_088DEC6C unk_9B540[6];
    s32 unk_A1750;
} Obj_088DEC6C;

extern u8 D_08AD7F68[];
R *func_0884E644(s32);
s32 func_088A88C0(void);
void func_08926200(E_088DEC6C *, u8 *, s32);

void func_088DEC6C(Obj_088DEC6C *arg0) {
    switch (arg0->unk_A1750) {
    case 0:
        break;
    case 1:
        if (func_0884E644(func_088A88C0())->unk_04[0x73] & 1) {
            func_08926200(&arg0->unk_9B540[1], D_08AD7F68, 0);
        } else {
            func_08926200(&arg0->unk_9B540[0], D_08AD7F68, 0);
        }
        break;
    case 2:
        func_08926200(&arg0->unk_9B540[3], D_08AD7F68, 0);
        break;
    case 3:
        func_08926200(&arg0->unk_9B540[4], D_08AD7F68, 0);
        break;
    case 4:
        func_08926200(&arg0->unk_9B540[2], D_08AD7F68, 0);
        break;
    case 5:
        func_08926200(&arg0->unk_9B540[5], D_08AD7F68, 0);
        break;
    }
}

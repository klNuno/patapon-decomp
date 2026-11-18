#include "common.h"

typedef struct {
    u8 pad_00[0x1A0];
} E_08994704;

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[4];
} R_08994704;

typedef struct {
    u8 pad_00[0x105C];
    s32 unk_105C;
    s32 unk_1060;
    u8 pad_1064[0xC];
    s32 unk_1070;
    s32 unk_1074;
} T_08994704;

extern u8 *D_08AD1F14[];
extern char D_08A068C8[];

s32 func_08998D18(s32);
R_08994704 *func_08947BA8(s32, s32);
s32 func_0887744C(u8 *, char *, s32);
u32 func_0885AB08(s32, s32);
E_08994704 *func_0885AB7C(s32, s32, s32);
s32 func_0893D94C(void *, void *);
void func_089A4DC0(s32, s32, s32, E_08994704 *);

void func_08994704(T_08994704 *arg0, s32 arg1) {
    R_08994704 *e;
    s32 h;
    u32 n;
    E_08994704 *arr;
    E_08994704 *found;
    u32 i;

    e = func_08947BA8(func_08998D18(arg0->unk_1060), arg1);
    h = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A068C8, 0xF);
    n = func_0885AB08(h, 0);
    arr = func_0885AB7C(h, 0, 0);
    found = NULL;
    for (i = 0; i < n; i++) {
        if (func_0893D94C(&arr[i], e->unk_08) == 0) {
            found = &arr[i];
            break;
        }
    }
    func_089A4DC0(arg0->unk_105C, arg0->unk_1074, arg0->unk_1070, found);
}

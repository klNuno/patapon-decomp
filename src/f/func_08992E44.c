#include "common.h"

typedef struct Sub_089794B0 {
    u8 pad_00[0x2460];
    u8 unk_2460[4];
} Sub_089794B0;

typedef struct Obj_089794B0 {
    u8 pad_00[0x42820];
    Sub_089794B0 *unk_42820;
} Obj_089794B0;

extern Obj_089794B0 *D_08AD1E28[];
extern char D_08A067C0[];
extern char D_08A067D4[];

void func_08865FE4(s32 arg0, s32 arg1);
s32 func_08868CAC(Obj_089794B0 *, s32, char *, s32);

void func_08992E44(u8 *arg0) {
    Obj_089794B0 *temp;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4((s32)arg0, func_08868CAC(temp, 0xA, D_08A067C0, 1));
    func_08865FE4((s32)(arg0 + 0x90), func_08868CAC(temp, 0xA, D_08A067D4, 1));
}

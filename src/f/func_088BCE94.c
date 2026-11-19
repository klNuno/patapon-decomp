#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x80E0 - 0xC];
    char unk_80E0[0x11];
} T088BCE94;

void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_0891E000(char *);
void func_0891E048(char *);
s32 func_08814C0C(s32);
void func_08814BB4(s32);
void func_088BB7FC(void *);

void func_088BCE94(T088BCE94 *arg0) {
    L_0893CEA8 temp;

    func_08864A30(&temp);
    func_0891E000(arg0->unk_80E0);
    func_08814C0C(1);
    func_08814BB4(4);
    func_088BB7FC(arg0->unk_0C);
    func_0891E048(arg0->unk_80E0);
    func_08864A68(&temp, -1);
}

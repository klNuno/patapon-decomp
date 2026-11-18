#include "common.h"

typedef struct {
    f32 unk_00[4];
} Unk;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0xE0];
    s32 unk_F0;
} T;

extern Unk D_08A04250[];
extern char D_089E948C[];
extern char D_089E9494[];
extern char D_089E949C[];

extern s32 func_08814C0C(s32);
void func_08814E2C(s32, u32, s32, char *, u8 *);
void func_0886575C(Unk *, s32, s32);
extern s32 func_08865870(void);

void func_0894D588(T *arg0, f32 arg1) {
    Unk a[4];
    volatile Unk b;
    s64 *s = (s64 *)D_08A04250;
    s64 *d = (s64 *)a;
    s32 i = 8;

    do {
        *d++ = *s++;
    } while (--i > 0);

    b = a[arg0->unk_F0 & 3];
    b.unk_00[3] = arg1;
    func_0886575C((Unk *)&b, 1, 1);
    func_08814C0C(9);
    func_08814E2C(2, 0x800980, 5, D_089E9494, arg0->unk_10);
    func_08814E2C(0, 0x800980, 1, D_089E9494, arg0->unk_10);
    func_08865870();
    func_0886575C((Unk *)&b, 1, 1);
    func_08814C0C(9);
    func_08814E2C(2, 0x800980, 5, D_089E949C, arg0->unk_10);
    func_08814E2C(0, 0x800980, 1, D_089E949C, arg0->unk_10);
    func_08865870();
    func_0886575C((Unk *)&b, 1, 1);
    func_08814C0C(9);
    func_08814E2C(2, 0x800980, 5, D_089E948C, arg0->unk_10);
    func_08814E2C(0, 0x800980, 1, D_089E948C, arg0->unk_10);
    func_08865870();
}

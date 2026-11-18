#include "common.h"

typedef struct {
    u8 pad_00[0x24];
} E_089C56F4;

typedef struct {
    E_089C56F4 *unk_00;
    u32 unk_04;
} V_089C56F4;

typedef struct {
    u8 pad_00[0x1214];
    u8 unk_1214[0x324];
    u8 unk_1538[0x134];
    V_089C56F4 unk_166C;
} S_089C56F4;

void func_0885DE4C(void *);
void func_089C50E0(s32 *, void *);
void func_089C50E8(s32 *, void *);
void func_089C5168(s32 *, void *, s32, s32);
void func_089C52E4(s32 *, void *);
void func_089C52EC(s32 *, void *);
void func_089C536C(s32 *, void *, s32, s32);

void func_089C56F4(S_089C56F4 *arg0) {
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    u32 i;
    u32 j;
    V_089C56F4 *v;

    i = 0;
    if (i < arg0->unk_166C.unk_04) {
        j = 0;
        v = &arg0->unk_166C;
        do {
            func_0885DE4C((u8 *)v->unk_00 + j);
            i++;
            j += sizeof(E_089C56F4);
        } while (i < arg0->unk_166C.unk_04);
    }
    func_089C52EC(&sp38, arg0->unk_1214);
    func_089C52E4(&sp34, arg0->unk_1214);
    func_089C536C(&sp3C, arg0->unk_1214, sp38, sp34);
    func_089C50E8(&sp2C, arg0->unk_1538);
    func_089C50E0(&sp28, arg0->unk_1538);
    func_089C5168(&sp30, arg0->unk_1538, sp2C, sp28);
}

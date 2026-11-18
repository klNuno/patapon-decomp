#include "common.h"

typedef struct {
    f32 unk_00[16];
} M;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0xF28];
    u8 unk_F28;
    u8 pad_F29[0x67];
    E *unk_F90;
    u8 pad_F94[4];
    u32 unk_F98;
    u8 pad_F9C[4];
    M unk_FA0;
    u8 pad_FE0[0x48];
    s32 unk_1028;
    u8 pad_102C[0x98];
    u8 unk_10C4;
} S;

typedef struct {
    M unk_00;
    u8 pad_40[8];
    f32 unk_48[6];
} T;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
void func_0899A4E8(S *, f32 *);
void func_0899DC00(s32);
void func_0899E0A0(s32, M *);

void func_0899A3AC(S *arg0) {
    T t;
    u32 i;
    f32 *p;
    s32 j;
    E **q;

    if (arg0->unk_1028 != -1) {
        if (arg0->unk_10C4 == 1) {
            return;
        }
        if (arg0->unk_F28 != 0) {
            func_0899A4E8(arg0, t.unk_48);
            func_08866B54(&t.unk_00, 0, func_08866B80(&arg0->unk_FA0, 0));
            func_08866B54(&t.unk_00, 1, func_08866B80(&arg0->unk_FA0, 1));
            func_08866B54(&t.unk_00, 2, func_08866B80(&arg0->unk_FA0, 2));
            func_08866B54(&t.unk_00, 3, func_08866B80(&arg0->unk_FA0, 3));
            i = 0;
            if (i < arg0->unk_F98) {
                p = t.unk_48;
                j = 0;
                q = &arg0->unk_F90;
                do {
                    t.unk_00.unk_00[12] = *p;
                    func_0899E0A0(((E *)((u8 *)*q + j))->unk_08, &t.unk_00);
                    func_0899DC00(((E *)((u8 *)*q + j))->unk_08);
                    i++;
                    p++;
                    j += sizeof(E);
                } while (i < arg0->unk_F98);
            }
        }
    }
}

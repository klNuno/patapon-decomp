#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
} Cnt_08904F64;

typedef struct {
    u8 pad_00[0x1A0E4];
    Cnt_08904F64 unk_1A0E4;
} Big_08904F64;

typedef struct {
    u8 pad_00[0x1498];
    Big_08904F64 *unk_1498;
} Sub_08904F64;

typedef struct Obj_089794B0 {
    u8 pad_00[0x42820];
    Sub_08904F64 *unk_42820;
} Obj_089794B0;

extern Obj_089794B0 *D_08AD1E28[];

u32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

void func_08904F64(void *arg0, void *arg1) {
    u32 *a;
    u32 *b;
    Obj_089794B0 *temp;
    Cnt_08904F64 *c;
    u32 n;
    u32 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    c = &temp->unk_42820->unk_1498->unk_1A0E4;
    if (*b == 0) {
        n = *a;
        v = c->unk_08;
        if (v < n) {
            c->unk_08 = 0;
        } else {
            c->unk_08 = v - n;
        }
    } else {
        n = *a;
        v = c->unk_08;
        v += n;
        c->unk_08 = v;
        if (v > 99999) {
            c->unk_08 = 99999;
        }
    }
    func_08852F00(arg1, 0);
}

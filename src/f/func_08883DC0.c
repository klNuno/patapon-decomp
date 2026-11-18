#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
    s32 unk_10;
} B_08883DC0;

typedef struct {
    u8 pad_00[0x108];
    B_08883DC0 unk_108;
} R_08883DC0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x100];
    s32 unk_104;
    s32 unk_108;
} A_08883DC0;

void func_0881F120(void *, void *, s32);
void func_0885DD94(B_08883DC0 *, s32, char *, s32);
void func_0885DE4C(B_08883DC0 *);
void func_08869030(void *, s32, s32, R_08883DC0 *, s32, s32);
R_08883DC0 *func_0896CFE0(s32, s32, s32);
extern char D_089DDF1C[];
extern void *D_08AD1E28[];
extern u8 D_08AD22A1[];

void func_08883DC0(s32 arg0, void *arg1, s32 arg2, A_08883DC0 *arg3) {
    s32 v;
    R_08883DC0 *r;
    void *g;

    if (D_08AD1E28[0] != NULL) {
        g = D_08AD1E28[0];
    } else {
        g = NULL;
    }
    v = arg3->unk_104;
    r = func_0896CFE0(arg3->unk_108, arg0, arg3->unk_00);
    if (D_08AD22A1[0] == 0) {
        B_08883DC0 *b = &r->unk_108;
        if (v != 0) {
            b->unk_0C = v;
        }
        if (b->unk_00 == NULL) {
            func_0885DD94(b, arg2, D_089DDF1C, 0x81);
        }
        if (arg2 <= b->unk_04) {
            func_0881F120(b->unk_00, arg1, arg2);
        }
    } else {
        B_08883DC0 *b = &r->unk_108;
        func_0885DE4C(b);
        b->unk_00 = arg1;
        b->unk_04 = arg2;
        b->unk_08 = 0;
        b->unk_10 = 0;
    }
    func_08869030(g, 3, arg3->unk_00, r, v, 0);
}

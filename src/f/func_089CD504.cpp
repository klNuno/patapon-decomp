#include "common.h"

extern "C" {

typedef struct Node_089CD504 {
    s32 unk_00;
    struct Node_089CD504 *unk_04;
    s32 unk_08;

    int eq2(struct Node_089CD504 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node_089CD504 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node_089CD504 *o) {
        return !(bool)eq(o);
    }
} Node_089CD504;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_089CD504;

typedef struct {
    E_089CD504 *unk_00;
    u32 unk_04;
} V_089CD504;

typedef struct {
    u8 pad_00[0x6C];
    Node_089CD504 unk_6C;
    u8 pad_78[0x60];
    V_089CD504 unk_D8;

    Node_089CD504 *end() { return &unk_6C; }
} T_089CD504;

void func_089D4364(s32, s32);
void func_089CCB28(s32, s32);

void func_089CD504(T_089CD504 *arg0, s32 arg1) {
    u32 i;
    u32 j;
    V_089CD504 *w;
    struct { Node_089CD504 *unk_00; } e;
    struct { Node_089CD504 *unk_00; } it;

    i = 0;
    if (arg0->unk_D8.unk_04 != 0) {
        j = 0;
        w = &arg0->unk_D8;
        do {
            func_089D4364(((E_089CD504 *)((u8 *)w->unk_00 + j))->unk_08, arg1);
            i++;
            j += sizeof(E_089CD504);
        } while (i < *(u32 *)&arg0->unk_D8.unk_04);
    }
    e.unk_00 = &arg0->unk_6C;
    it.unk_00 = arg0->unk_6C.unk_04;
    while (it.unk_00->ne(e.unk_00)) {
        func_089CCB28(*(s32 *)&it.unk_00->unk_08, arg1);
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
}

}

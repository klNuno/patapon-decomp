#include "common.h"

typedef struct {
    u8 pad_00[0x5E8];
    f32 unk_5E8;
    f32 unk_5EC;
} S;

typedef struct {
    u8 pad_00[8];
    S *unk_08;
    u8 pad_0C[4];
} E08903950;

typedef struct {
    u8 pad_00[0x404];
    E08903950 *unk_404;
    s32 unk_408;
} O08903950;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08903950;

typedef struct {
    u8 pad_00[0x10];
    W08903950 *unk_10;
} T08903950;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08903950 **);

void func_08903D54(T08903950 *arg0, void *arg1) {
    O08903950 *o;
    s32 *a;
    f32 *b;
    f32 *c;
    s32 w;
    E08903950 *p;
    E08903950 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            S *temp = p->unk_08;
            if (temp != NULL) {
                f32 y = *c;
                f32 x = *b;
                temp->unk_5E8 = x;
                temp->unk_5EC = y;
            }
        }
    }
    func_08852F00(arg1, 0);
}

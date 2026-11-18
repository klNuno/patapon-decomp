#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08901D10;

typedef struct {
    u8 pad_00[0x404];
    E08901D10 *unk_404;
    s32 unk_408;
} O08901D10;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08901D10;

typedef struct {
    u8 pad_00[0x10];
    W08901D10 *unk_10;
} T08901D10;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08901D10 **);
void func_088E248C(void *, s32);

void func_08901D10(T08901D10 *arg0, void *arg1) {
    O08901D10 *o;
    s32 *a;
    s32 *b;
    s32 w;
    E08901D10 *p;
    E08901D10 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            if (p->unk_08 != NULL) {
                func_088E248C(p->unk_08, *b >= 0);
            }
        }
    }
    func_08852F00(arg1, 0);
}

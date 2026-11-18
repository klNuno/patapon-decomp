#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08903C54;

typedef struct {
    u8 pad_00[0x404];
    E08903C54 *unk_404;
    s32 unk_408;
} O08903C54;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08903C54;

typedef struct {
    u8 pad_00[0x10];
    W08903C54 *unk_10;
    u8 pad_14[0x34];
    s32 unk_48;
} T08903C54;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08903C54 **);
void func_088F9C70(void *, s32);

void func_08903C54(T08903C54 *arg0, void *arg1) {
    O08903C54 *o;
    s32 *a;
    s32 b;
    s32 x;
    s32 w;
    E08903C54 *p;
    E08903C54 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = *func_0885356C(arg1, 1, 0, 4);
    x = func_089A8D10(arg0->unk_48, *(s32 *)(func_08852BA8(arg1) + b));
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            if (p->unk_08 != NULL) {
                func_088F9C70(p->unk_08, x);
            }
        }
    }
    func_08852F00(arg1, 0);
}

#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08904068;

typedef struct {
    u8 pad_00[0x404];
    E08904068 *unk_404;
    s32 unk_408;
} O08904068;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08904068;

typedef struct {
    u8 pad_00[0x10];
    W08904068 *unk_10;
} T08904068;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08904068 **);
void func_088F9DC8(void *);

void func_08904068(T08904068 *arg0, void *arg1) {
    O08904068 *o;
    s32 *a;
    s32 w;
    E08904068 *p;
    E08904068 *end;

    a = func_0885356C(arg1, 0, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            if (p->unk_08 != NULL) {
                func_088F9DC8(p->unk_08);
            }
        }
    }
    func_08852F00(arg1, 0);
}

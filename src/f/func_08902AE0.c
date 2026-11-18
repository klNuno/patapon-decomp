#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0xDC];
} E_08902AE0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x8];
    E_08902AE0 unk_14[400];
    s32 unk_19654[400];
    u8 unk_19C94[0x40];
} M_08902AE0;

typedef struct {
    u8 pad_00[0xC];
    M_08902AE0 unk_0C;
} S3;

typedef struct S2 {
    u8 pad_00[0x1498];
    S3 *unk_1498;
} S2;

typedef struct S1 {
    u8 pad_00[0x42820];
    S2 *unk_42820;
} S1;

extern S1 *D_08AD1E28[];
void *func_08807190(s32, void *);
void func_088766F0(void *);
void func_0881F5C0(void *, s32, s32);
void func_08877260(M_08902AE0 *);
void func_08852F00(void *, s32);

void func_08902AE0(void *arg0, void *arg1) {
    S1 *p;
    S3 *b;
    M_08902AE0 *m;
    s32 i;
    void *t;

    p = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    b = p->unk_42820->unk_1498;
    m = &b->unk_0C;
    b->unk_0C.unk_00 = 0x7B;
    for (i = 0; i < 400; i++) {
        t = func_08807190(0x104, &m->unk_14[i]);
        if (t != NULL) {
            func_088766F0(t);
        }
        m->unk_19654[i] = -1;
        m->unk_14[i].unk_24 = i;
    }
    func_0881F5C0(m->unk_19C94, 0, 0x40);
    m->unk_08 = 0;
    m->unk_04 = 0;
    func_08877260(m);
    func_08852F00(arg1, 0);
}

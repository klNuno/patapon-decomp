#include "common.h"

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[0xC];
} V;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x28];
    u8 unk_50[0x24];
    V unk_74[3];
} E;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[8];
    E unk_14[400];
    s32 unk_19654[400];
    u8 unk_19C94[0x40];
} S;

typedef union {
    f32 unk_00[2];
    char *unk_00p[2];
} T;

extern char D_089DD510[];
extern f32 D_089F9340[];
void func_0881F5C0(void *, s32, s32);
void func_088761D0(char *, char *);
void func_08876214(E *, s32, s32, s32, s32, s32, char *, char **, u32);
E *func_088762DC(S *);
void func_08876338(void *);
void func_088763E8(void *);
void func_088763F8(void *);

void func_08876058(S *arg0) {
    s32 i;
    E *e;
    V *p;
    T t;
    char *s;
    u32 k;
    E *q;
    u32 j;

    arg0->unk_00 = 0x7B;
    for (i = 0; i < 400; i++) {
        e = &arg0->unk_14[i];
        if (e != NULL) {
            e->unk_24 = -1;
            func_088763F8(e->unk_50);
            p = e->unk_74;
            do {
                func_088763E8(p);
                p++;
            } while (p < e->unk_74 + 3);
            func_08876338(e);
        }
        arg0->unk_19654[i] = -1;
        arg0->unk_14[i].unk_24 = i;
    }
    func_0881F5C0(arg0->unk_19C94, 0, 0x40);
    arg0->unk_08 = 0;
    arg0->unk_04 = 0;
    s = D_089DD510;
    t = *(T *)&D_089F9340[1];
    k = 0;
    do {
        q = func_088762DC(arg0);
        func_08876214(q, q->unk_20, 0, 0, 0, 0, s, NULL, 0);
        j = 0;
        do {
            func_088761D0(q->unk_74[0].unk_00, t.unk_00p[j]);
            j++;
            q = (E *)((u8 *)q + sizeof(V));
        } while (j < 2U);
    } while (++k < 3U);
}

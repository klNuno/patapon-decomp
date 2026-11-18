#include "common.h"

extern "C" {

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[0xC];
} V;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x18];
    char unk_50[0x20];
    s32 unk_70;
    V unk_74[2];
    u8 pad_D4[0x1C];
} E;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    E unk_14;
} S;

union T {
    f32 unk_00[2];
    char *unk_00p[2];
};

extern char D_089DD510[];
extern f32 D_089F9340[];
extern void func_08822B3C(char *, char *);
extern s32 func_0888AFAC(char *);

static inline E *func_08877260_00(S *arg0) {
    s32 i;
    S *p;
    E *q;
    if (arg0->unk_08 == 0x190) {
        return NULL;
    }
    i = 0;
    p = arg0;
    do {
        q = &p->unk_14;
        if (q->unk_20 < 0) {
            q->unk_20 = q->unk_24;
            arg0->unk_08++;
            return q;
        }
        i++;
        p++;
    } while (i < 0x190);
    return NULL;
}

void func_08877260(S *arg0) {
    T t;
    char *s;
    u32 j;
    E *q;
    char *u;
    char **p;
    u32 i;

    s = D_089DD510;
    t = *(T *)&D_089F9340[1];
    i = 0;

    do {
        q = func_08877260_00(arg0);
        q->unk_28 = 0;
        q->unk_2C = 0;
        q->unk_30 = 0;
        q->unk_34 = 0;
        if (s != NULL) {
            q->unk_70 = func_0888AFAC(s);
            func_08822B3C(q->unk_50, s);
        }
        j = 0;
        p = t.unk_00p;
        do {
            u = *p;
            q->unk_74[0].unk_20 = func_0888AFAC(u);
            func_08822B3C(q->unk_74[0].unk_00, u);
            j++;
            p++;
            q = (E *)((u8 *)q + sizeof(V));
        } while (j < 2U);
    } while (++i < 3U);
}

}

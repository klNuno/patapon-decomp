#include "common.h"

typedef struct E1 {
    s16 unk_00;
    u8 pad_02[0x7E];
} E1;

typedef struct E2 {
    s32 unk_00;
    s32 unk_04;
} E2;

typedef struct H {
    s32 unk_00;
    s32 unk_04;
} H;

typedef struct S {
    E1 *unk_00;
    E2 *unk_04;
} S;

extern void *D_08AD1E28[];
extern char D_08A03E68[];
extern s32 D_08AD98DC[];
extern s32 D_08AD98E0[];

s32 *func_08868E8C(void *, s32, char *);

S *func_089457D8(S *arg0) {
    H *h;
    s32 i;

    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    h = *(H **)func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 1, D_08A03E68);
    arg0->unk_00 = (E1 *)((u8 *)h + 0x20);
    arg0->unk_04 = (E2 *)((u8 *)h + h->unk_04);
    if (h->unk_00 == 0) {
        i = D_08AD98DC[0];
        do {
            i++;
            D_08AD98DC[0]++;
        } while (arg0->unk_00[i].unk_00 != -1);
        i = D_08AD98E0[0];
        do {
            i++;
            D_08AD98E0[0]++;
        } while (arg0->unk_04[i].unk_00 != -1);
        h->unk_00 = 1;
    }
    return arg0;
}

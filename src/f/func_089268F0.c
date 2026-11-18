#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} S;

typedef struct {
    u8 pad_00[0xD9C];
    u8 unk_D9C[0xD9C];
    u8 unk_1B38[0xD9C];
    u8 unk_28D4[1];
} T;

extern void *D_08AD1E28[];
extern char D_08A027D8[];
extern char D_08A027E8[];
extern char D_08A027F8[];
extern char D_08A02810[];

s32 *func_08868E8C(void *, s32, char *);
void func_08926A9C(T *);
void func_08926678(void *, S *);

static inline void unk_00(S *arg0) {
    u8 *p = (u8 *)arg0;
    s32 n = 8;

    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
}

static inline S unk_04(char *arg0, char *arg1) {
    void *p = D_08AD1E28[0];
    S s;
    p = p != NULL ? p : NULL;
    unk_00(&s);
    s.unk_00 = *func_08868E8C(p, 2, arg0);
    s.unk_04 = *func_08868E8C(p, 2, arg1);
    return s;
}

void func_089268F0(T *arg0) {
    S a;
    S b;
    S c;

    func_08926A9C(arg0);
    a = unk_04(D_08A027D8, D_08A027E8);
    func_08926678(arg0->unk_D9C, &a);
    b = unk_04(D_08A027F8, D_08A02810);
    func_08926678(arg0->unk_1B38, &b);
    c = unk_04(D_08A027D8, D_08A027E8);
    func_08926678(arg0->unk_28D4, &c);
}

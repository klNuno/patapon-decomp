#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
} T_08876B88;

typedef struct {
    u8 pad_00[0x14A0];
    T_08876B88 *unk_14A0;
} S_08876B88;

void *func_0886095C(void);
void func_08863F00(void *, char *);
void func_08864024(void *, char *);
s32 func_0887744C(void *, char *, s32);
u8 *func_0885AB7C(s32, s32, s32);
void func_088226BC(char *, char *, ...);
extern char D_089F9568[];
extern char D_089F9378[];
extern char D_089F9584[];

inline void h_08876B88(char *const &s) {
    func_08863F00(func_0886095C(), s);
    func_08864024(func_0886095C(), s);
}

void func_08876B88(S_08876B88 *arg0) {
    char buf[0x100];
    char *q;
    s32 n;
    T_08876B88 *t;

    h_08876B88(D_089F9568);
    q = buf;
    n = 0x100;
    if (q != NULL) {
        do {
            *q++ = 0;
        } while (--n);
    }
    t = arg0->unk_14A0;
    if (t->unk_258 != -1) {
        func_088226BC(buf, D_089F9584, func_0885AB7C(func_0887744C(arg0, D_089F9378, 1), 0, *(volatile s32 *)&t->unk_258) + 0x28);
        func_08864024(func_0886095C(), buf);
    }
}

}

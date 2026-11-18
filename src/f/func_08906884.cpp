#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x45A8 - 0x18];
    s32 unk_45A8;
    s32 unk_45AC;
    s32 unk_45B0;
} S_08906884;

typedef struct {
    u8 pad_00[0x14A0];
    S_08906884 *unk_14A0;
} G_08906884;

void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);
void func_08872948(S_08906884 *);
extern G_08906884 * volatile D_08AD1F14[];

inline G_08906884 *get_08906884() {
    G_08906884 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}

inline void set_08906884() {
    get_08906884()->unk_14A0->unk_45A8 = 1;
}

void func_08906884(void *arg0, void *arg1) {
    G_08906884 *p;
    S_08906884 *s;

    set_08906884();
    s = get_08906884()->unk_14A0;
    if (s->unk_45A8 != 0) {
        func_0881F120((u8 *)s + 0x22D4, s, 0x22D4);
        func_08872948(s);
        s->unk_14 = s->unk_45B0;
        s->unk_45A8 = 0;
        s->unk_45AC = 1;
    }
    func_08852F00(arg1, 0);
}

}

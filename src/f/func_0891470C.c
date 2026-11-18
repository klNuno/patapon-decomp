#include "common.h"
typedef struct {
    char unk_00[0x80];
    char unk_80[0x80];
    char unk_100[0x400];
    u8 unk_500;
} S;
typedef struct {
    char *unk_00;
    char *unk_04;
    char *unk_08;
} N;
typedef struct {
    u8 pad_00[0x9C];
    S unk_9C;
    u8 pad_59D[0x824 - 0x59D];
    N *unk_824;
} T;
extern void func_0881F120(void *, void *, s32);
extern u32 func_08822BC4(char *);
void func_0891470C(T *arg0) {
    N *n;
    S *s;
    u32 len;
    n = arg0->unk_824;
    s = &arg0->unk_9C;
    len = func_08822BC4(n->unk_00);
    func_0881F120(s->unk_00, n->unk_00, len);
    s->unk_00[len] = 0;
    len = func_08822BC4(n->unk_04);
    func_0881F120(s->unk_80, n->unk_04, len);
    s->unk_80[len] = 0;
    len = func_08822BC4(n->unk_08);
    func_0881F120(s->unk_100, n->unk_08, len);
    s->unk_100[len] = 0;
    s->unk_500 = 3;
}

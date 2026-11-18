#include "common.h"

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[4];
} N;

typedef struct {
    N *unk_00;
} It;

typedef struct {
    u8 pad_00[0x8];
    N *unk_08;
    s32 unk_0C;
} L;

void func_088DF57C(void *);

It func_08907AA0(L *arg1, It arg2) {
    struct { It unk_00; u8 unk_04; } ret;
    N *f;
    N *n;
    N *p;

    ret.unk_00.unk_00 = arg2.unk_00->unk_00;
    arg1->unk_0C--;
    func_088DF57C(arg2.unk_00->unk_08);
    f = arg1->unk_08;
    n = arg2.unk_00->unk_00;
    arg2.unk_00->unk_04->unk_00 = n;
    p = n->unk_04;
    n->unk_04 = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = f->unk_04;
    f->unk_04->unk_00 = arg2.unk_00;
    f->unk_04 = p;
    p->unk_00 = f;
    return ret.unk_00;
}

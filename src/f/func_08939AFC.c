#include "common.h"

typedef struct N08939AFC {
    struct N08939AFC *unk_00;
    struct N08939AFC *unk_04;
    u8 unk_08[4];
} N08939AFC;

typedef struct {
    N08939AFC *unk_00;
} I08939AFC;

typedef struct {
    u8 pad_00[0x8];
    N08939AFC *unk_08;
    s32 unk_0C;
} L08939AFC;

void func_0893A800(void *);

void func_08939AFC(I08939AFC *arg0, L08939AFC *arg1, I08939AFC pos) {
    struct {
        I08939AFC unk_00;
        u8 pad_04[4];
    } r;
    N08939AFC *f;
    N08939AFC *next;
    N08939AFC *tmp;

    r.unk_00.unk_00 = pos.unk_00->unk_00;
    arg1->unk_0C--;
    func_0893A800(pos.unk_00->unk_08);
    f = arg1->unk_08;
    next = pos.unk_00->unk_00;
    pos.unk_00->unk_04->unk_00 = next;
    tmp = next->unk_04;
    next->unk_04 = pos.unk_00->unk_04;
    pos.unk_00->unk_04 = f->unk_04;
    f->unk_04->unk_00 = pos.unk_00;
    f->unk_04 = tmp;
    tmp->unk_00 = f;
    *arg0 = r.unk_00;
}

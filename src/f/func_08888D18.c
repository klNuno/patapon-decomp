#include "common.h"

typedef struct N08888D18 {
    struct N08888D18 *unk_00;
    struct N08888D18 *unk_04;
    u8 unk_08[4];
} N08888D18;

typedef struct {
    N08888D18 *unk_00;
} I08888D18;

typedef struct {
    u8 pad_00[0x8];
    N08888D18 *unk_08;
    s32 unk_0C;
} L08888D18;

void func_0886499C(void *);

void func_08888D18(I08888D18 *arg0, L08888D18 *arg1, I08888D18 pos) {
    struct {
        I08888D18 unk_00;
        u8 pad_04[4];
    } r;
    N08888D18 *f;
    N08888D18 *next;
    N08888D18 *tmp;

    r.unk_00.unk_00 = pos.unk_00->unk_00;
    arg1->unk_0C--;
    func_0886499C(pos.unk_00->unk_08);
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

#include "common.h"

typedef struct {
    u8 pad_00[0x34];
    u8 unk_34[0x2AC - 0x34];
    s32 unk_2AC;
    s32 unk_2B0;
    u8 pad_2B4[0x2CC - 0x2B4];
    s32 unk_2CC;
    u8 unk_2D0[0x3D0 - 0x2D0];
    void *unk_3D0;
} Obj_088E4BBC;

typedef struct {
    u8 pad_00[0xD8];
    u8 *unk_D8;
} Obj2_088E4BBC;

void func_088D8DE0(s32 *, u8 *);
void func_088D8DD8(s32 *, u8 *);
s32 func_088DDB30(s32 *, s32 *);
void **func_088DDC80(s32 *);
void func_088DDBD8(s32 *);
s32 func_088E63DC(s32);
void func_088DDBEC(u8 *, void *, s32);
void func_088DDB48(s32 *, u8 *, s32);
void func_08923C88(void *);
void func_089302A4(void *);

void func_088E4BBC(Obj_088E4BBC *arg0) {
    s32 it;
    s32 end;
    s32 tmp;
    void *h;
    u8 *base;

    h = arg0->unk_3D0;
    if (h != NULL) {
        base = ((Obj2_088E4BBC *)arg0)->unk_D8 + 0x1DE0;
        func_088D8DE0(&it, base + 0x26710);
        func_088D8DD8(&end, base + 0x26710);
        for (; func_088DDB30(&it, &end) != 0; func_088DDBD8(&it)) {
            if (*func_088DDC80(&it) == h) {
                func_088E63DC((s32)*func_088DDC80(&it));
                func_088DDBEC(base, *func_088DDC80(&it), 0);
                func_088DDB48(&tmp, base + 0x26710, it);
                break;
            }
        }
        arg0->unk_3D0 = NULL;
    }
    func_08923C88(arg0->unk_34);
    func_089302A4(arg0->unk_2D0);
    arg0->unk_2CC = 3;
    arg0->unk_2AC = -1;
    arg0->unk_2B0 = -1;
}

#include "common.h"

typedef struct T088682E8 {
    struct T088682E8 *unk_00;
    struct T088682E8 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T088682E8;

extern u8 D_08A44BE0[];
extern u8 D_08A44BF0[];

void func_08867A94(s32 *, T088682E8 *);
void func_08867A8C(s32 *, T088682E8 *);
s32 func_0886785C(s32 *, s32 *);
void func_08867A64(s32 *, s32 *, s32);
void func_088678B0(s32 *, T088682E8 *, s32);

T088682E8 *func_088682E8(T088682E8 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    arg0->unk_24 = D_08A44BF0;
    arg0->unk_1C = D_08A44BE0;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08867A94(&it, arg0);
    func_08867A8C(&end, arg0);
    while (func_0886785C(&it, &end)) {
        func_08867A64(&tmp, &it, 0);
        func_088678B0(&r, arg0, tmp);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}

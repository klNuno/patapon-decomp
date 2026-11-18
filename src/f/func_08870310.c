#include "common.h"

typedef struct T08870CFC {
    struct T08870CFC *unk_00;
    struct T08870CFC *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08870CFC;

typedef struct {
    s32 unk_00;
} I08870CFC;

extern u8 D_08A45088[];
extern u8 D_08A45078[];

void func_0880416C(void *);
void func_0886FE44(T08870CFC *);
void func_088704AC(I08870CFC *, T08870CFC *);
void func_088704A4(I08870CFC *, T08870CFC *);
s32 func_088703E8(I08870CFC *, I08870CFC *);
void func_088702D0(I08870CFC *, I08870CFC *, s32);
void func_0887043C(I08870CFC *, T08870CFC *, s32);

T08870CFC *func_08870310(T08870CFC *arg0, s16 arg1) {
    I08870CFC it;
    I08870CFC end;
    I08870CFC tmp;
    I08870CFC cur;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45088;
        func_088704AC(&it, arg0);
        func_088704A4(&end, arg0);
        while (func_088703E8(&it, &end) != 0) {
            func_088702D0(&cur, &it, 0);
            func_0887043C(&tmp, arg0, cur.unk_00);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A45078;
            func_0886FE44(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

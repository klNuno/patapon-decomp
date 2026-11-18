#include "common.h"

typedef struct T08867784 {
    struct T08867784 *unk_00;
    struct T08867784 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08867784;

extern u8 D_08A44BE0[];
extern u8 D_08A44BF0[];

void func_0880416C(void *);
void func_08867A94(s32 *, T08867784 *);
void func_08867A8C(s32 *, T08867784 *);
s32 func_0886785C(s32 *, s32 *);
void func_08867A64(s32 *, s32 *, s32);
void func_088678B0(s32 *, T08867784 *, s32);
void func_08867CBC(void *);

T08867784 *func_08867784(T08867784 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A44BF0;
        func_08867A94(&it, arg0);
        func_08867A8C(&end, arg0);
        while (func_0886785C(&it, &end)) {
            func_08867A64(&tmp, &it, 0);
            func_088678B0(&r, arg0, tmp);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A44BE0;
            func_08867CBC(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

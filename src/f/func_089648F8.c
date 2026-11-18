#include "common.h"

typedef struct T089648F8 {
    struct T089648F8 *unk_00;
    struct T089648F8 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T089648F8;

extern u8 D_08A47BB8[];
extern u8 D_08A47BC8[];

void func_08964284(s32 *, T089648F8 *);
void func_0896427C(s32 *, T089648F8 *);
s32 func_089641C0(s32 *, s32 *);
void func_089640A8(s32 *, s32 *, s32);
void func_08964214(s32 *, T089648F8 *, s32);

T089648F8 *func_089648F8(T089648F8 *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    arg0->unk_24 = D_08A47BC8;
    arg0->unk_1C = D_08A47BB8;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08964284(&it, arg0);
    func_0896427C(&end, arg0);
    while (func_089641C0(&it, &end)) {
        func_089640A8(&tmp, &it, 0);
        func_08964214(&r, arg0, tmp);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}

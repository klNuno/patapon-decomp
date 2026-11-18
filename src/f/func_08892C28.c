#include "common.h"

typedef struct T0 {
    struct T0 *unk_00;
    struct T0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0;

extern u8 D_08A45684[];
extern u8 D_08A45674[];

void func_088921D0(s32 *, T0 *);
void func_088921C8(s32 *, T0 *);
s32 func_0889210C(s32 *, s32 *);
void func_08891FF4(s32 *, s32 *, s32);
void func_08892160(s32 *, T0 *, s32);

T0 *func_08892C28(T0 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 cur;

    arg0->unk_24 = D_08A45684;
    arg0->unk_1C = D_08A45674;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_088921D0(&it, arg0);
    func_088921C8(&end, arg0);
    while (func_0889210C(&it, &end) != 0) {
        func_08891FF4(&cur, &it, 0);
        func_08892160(&ret, arg0, cur);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}

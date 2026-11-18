#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} E_088611E4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 *unk_20;

    E_088611E4 *get(s32 i) {
        if (i < 0 || unk_18 <= i) {
            return NULL;
        }
        return (E_088611E4 *)(unk_20 + unk_1C * i);
    }
} T_088611E4;

void func_0881F5C0(void *, s32, s32);

s32 func_088611E4(T_088611E4 *arg0) {
    s32 i;
    E_088611E4 *e;

    arg0->unk_00 = -1;
    arg0->unk_04 = 0;
    arg0->unk_08 = -1;
    arg0->unk_0C = arg0->unk_18 - 1;
    arg0->unk_10 = 0;
    arg0->unk_14 = arg0->unk_18;
    func_0881F5C0(arg0->unk_20, 0, arg0->unk_1C * arg0->unk_18);
    for (i = 0; i < arg0->unk_18; i++) {
        e = arg0->get(i);
        e->unk_00 = i;
        e->unk_04 = i == 0 ? -1 : i - 1;
        e->unk_08 = i + 1 == arg0->unk_18 ? -1 : i + 1;
        e->unk_0C = 0;
    }
    return 1;
}

}

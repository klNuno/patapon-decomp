#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
    u8 pad_1064[0x418];
    s32 *unk_147C;
    s32 unk_1480;
} O_08994A7C;

typedef struct {
    u8 pad_00[0x2];
    s16 unk_02;
    s16 unk_04;
    u8 pad_06[0x70];
    s16 unk_76;
} E_08994A7C;

s32 func_08998D18(s32);
E_08994A7C *func_08947BA8(s32, s32);

s32 func_08994A7C(O_08994A7C *arg0) {
    s32 ret;
    s32 best;
    s32 *p;
    s32 i;
    s32 id;
    s32 *end;
    E_08994A7C *e;

    if (arg0->unk_1480 == 0) {
        return 0;
    }
    p = arg0->unk_147C;
    best = -1;
    end = p + arg0->unk_1480;
    ret = 0;
    i = 0;
    for (; p != end; p++, i++) {
        id = *p;
        if (id < 0x100) {
            e = func_08947BA8(func_08998D18(arg0->unk_1060), id);
            if (e->unk_04 == 2 && e->unk_76 != -1) {
                if (best <= e->unk_02) {
                    best = e->unk_02;
                    ret = i;
                }
            }
        }
    }
    return ret;
}

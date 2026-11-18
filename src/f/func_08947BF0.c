#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s16 unk_04;
    u8 pad_06[0x2];
    char unk_08[1];
} E;

extern s32 func_08822AD0(char *, char *);
extern s32 func_08945908(s32, s32);
u32 func_08945918(s32);

s32 func_08947BF0(s32 arg0, char *arg1) {
    u32 i;
    E *e;

    for (i = 0; i < func_08945918(arg0 + 4); i++) {
        e = (E *)func_08945908(arg0 + 4, i);
        if (e->unk_04 == 2 && func_08822AD0(e->unk_08, arg1) == 0) {
            return i;
        }
    }
    return -1;
}

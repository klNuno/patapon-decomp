#include "common.h"

typedef struct {
    u8 pad_00[0xD7C];
    u32 unk_D7C;
    s32 unk_D80;
    char *unk_D84;
} Obj_0888A728;

extern s32 func_08822AD0(char *, char *);

char *func_0888A728(Obj_0888A728 *arg0, char *arg1) {
    char *p;
    u32 i;

    p = NULL;
    for (i = 0; i < arg0->unk_D7C; i++) {
        p = arg0->unk_D84 + arg0->unk_D80 * i;
        if (func_08822AD0(p, arg1) == 0) {
            break;
        }
        p = NULL;
    }
    return p;
}

#include "common.h"

typedef struct {
    char *unk_00;
    s32 unk_04;
} Unk;

s32 func_08814D18(void);
extern char D_08A44B24[];

Unk *func_08864A30(Unk *arg0) {
    arg0->unk_00 = D_08A44B24;
    arg0->unk_04 = func_08814D18();
    return arg0;
}

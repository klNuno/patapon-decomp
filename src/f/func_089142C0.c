#include "common.h"

typedef struct {
    u8 unk_00[1];
} Elem;

extern const Elem D_089E5118[];

void func_089142C0(void *arg0, Elem *arg1)
{
    s32 i;
    for (i = 0; i < 16; i++) {
        arg1[i] = D_089E5118[i];
    }
}

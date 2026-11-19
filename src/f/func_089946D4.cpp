#include "common.h"

extern "C" {
void func_089BC22C(void *, char *);
extern char D_089EEAB0[];

typedef struct {
    u8 pad_00[0x1064];
    void *unk_1064;
    u8 unk_1068;
} S;

void func_089946D4(S *arg0)
{
    if (arg0->unk_1068 != 0) {
        func_089BC22C(arg0->unk_1064, D_089EEAB0);
    }
}
}

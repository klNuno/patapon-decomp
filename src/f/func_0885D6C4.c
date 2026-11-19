#include "common.h"

void func_08822B3C(void *, char *);
extern char D_089F8A54[];
extern u8 D_08A44A30[];

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    void *unk_4C;
} T;

T *func_0885D6C4(T *arg0) {
    arg0->unk_4C = D_08A44A30;
    func_08822B3C(arg0, D_089F8A54);
    arg0->unk_40 = 0;
    arg0->unk_44 = 0;
    arg0->unk_48 = 0;
    return arg0;
}

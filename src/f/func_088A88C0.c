#include "common.h"

typedef struct {
    void *unk_00;
} S088A88C0;

void func_08804690(S088A88C0 *, void (*)(void), u8 *);
void func_0884E32C(S088A88C0 *, s32, s32, s32);
s32 func_08858B9C(void);
void func_088A8864(void);
void func_088A8A68(S088A88C0 *);
extern u8 D_08A45AF8[];
extern s8 D_08AD28D4[];
extern u8 D_08AD28D8[];
extern S088A88C0 D_08AD28E4[];

S088A88C0 *func_088A88C0(void) {
    if (D_08AD28D4[0] == 0) {
        func_0884E32C(D_08AD28E4, 0x100, 0x100, func_08858B9C());
        D_08AD28E4[0].unk_00 = D_08A45AF8;
        func_088A8A68(D_08AD28E4);
        func_08804690(D_08AD28E4, func_088A8864, D_08AD28D8);
        D_08AD28D4[0] = 1;
    }
    return D_08AD28E4;
}

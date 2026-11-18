#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S088EF498;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, u8 *);
void func_088EF528(void *, void *);
void *func_088EF608(u8 *, u8 *, char *, s32 *, u8 *);
extern char D_089FDBD8[];
extern u8 D_08AD815C[];

void func_088EF498(S088EF498 *arg0, void *arg1) {
    u8 sp440[0x100];
    s32 sp43C;
    u8 sp18[0x424];
    void *temp;

    func_08853894(arg1, sp440);
    sp43C = *func_0885356C(arg1, 0, 0, 4);
    temp = arg0->unk_10;
    func_088EF528(temp, func_088EF608(sp18, sp440, D_089FDBD8, &sp43C, D_08AD815C));
    func_08852F00(arg1, 0);
}

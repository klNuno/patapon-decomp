#include "common.h"

typedef struct {
    u8 pad_00[0x45BC];
    s32 unk_45BC;
} T0;

typedef struct {
    u8 pad_00[0x14A0];
    T0 *unk_14A0;
} T1;

typedef struct {
    u8 pad_00[0x42820];
    T1 *unk_42820;
} T2;

extern void *D_08AD1E28[];
extern void func_08852F00(void *, s32);

void func_088EDE44(void *arg0, void *arg1) {
    T2 *temp = D_08AD1E28[0] != NULL ? (T2 *)D_08AD1E28[0] : NULL;
    temp->unk_42820->unk_14A0->unk_45BC = 1;
    func_08852F00(arg1, 0);
}

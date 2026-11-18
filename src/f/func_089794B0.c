#include "common.h"

typedef struct Sub_089794B0 {
    u8 pad_00[0x2460];
    u8 unk_2460[4];
} Sub_089794B0;

typedef struct Obj_089794B0 {
    u8 pad_00[0x42820];
    Sub_089794B0 *unk_42820;
} Obj_089794B0;

void func_088226BC(void *, void *, s32);
s32 func_089A8B20(void *, s32);
extern Obj_089794B0 *D_08AD1E28[];

void func_089794B0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    Obj_089794B0 *temp;

    if (arg1 == NULL || arg2 == NULL) {
        return;
    }
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_088226BC(arg2, arg1, func_089A8B20(temp->unk_42820->unk_2460, arg3));
}

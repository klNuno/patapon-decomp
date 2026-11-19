#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} S088CE0C0;

typedef struct {
    u8 pad_00[4];
    S088CE0C0 unk_04;
    u8 pad_24[4];
    u8 *unk_28;
} Unk;

extern u8 D_08A4535C[];
extern u8 D_08A46054[];
void func_0880416C(void *);
void func_08880160(S088CE0C0 *);

void *func_088CE530(Unk *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46054;
        if (&arg0->unk_04 != NULL) {
            arg0->unk_04.unk_1C = D_08A4535C;
            func_08880160(&arg0->unk_04);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

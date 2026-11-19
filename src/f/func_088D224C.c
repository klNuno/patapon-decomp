#include "common.h"

typedef struct Unk_088D21E8 Unk_088D21E8;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x194];
    u8 unk_198[4];
} T;

void func_0880416C(void *);
void func_088D205C(void *, s16);
Unk_088D21E8 *func_088D21E8(Unk_088D21E8 *arg0, s16 arg1);
void func_088D22C0(T *);

T *func_088D224C(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_088D22C0(arg0);
        if (arg0->unk_04 != NULL) {
            func_088D205C(arg0->unk_198, 0);
            func_088D21E8((Unk_088D21E8 *)arg0->unk_04, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

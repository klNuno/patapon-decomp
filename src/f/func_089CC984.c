#include "common.h"

typedef struct Unk_089CC984 {
    u8 pad_00[0x28];
    void *unk_28;
    u8 unk_2C[0x1C];
    void *unk_48;
    u8 pad_4C[0x4];
    u8 unk_50[4];
} Unk_089CC984;

void func_0880416C(void *);
extern int func_08865F78(s32, s32);
void func_088CE530(void *, s32);
void func_089CC868(void *);
extern u8 D_08A48E44[];
extern u8 D_08A48E5C[];

Unk_089CC984 *func_089CC984(Unk_089CC984 *arg0, s16 arg1) {
    void *temp;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A48E44;
        func_08865F78((s32)arg0->unk_50, -1);
        temp = arg0->unk_2C;
        if (temp != NULL) {
            arg0->unk_48 = D_08A48E5C;
            func_089CC868(temp);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

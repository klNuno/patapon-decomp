#include "common.h"

typedef struct Unk_089797A4 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x804];
    u8 unk_810[4];
} Unk_089797A4;

void func_0880416C(void *);
void func_0897982C(void *);
extern u8 D_08A47FE4[];
extern u8 D_08A47FF4[];

Unk_089797A4 *func_089797A4(Unk_089797A4 *arg0, s16 arg1) {
    void *temp;

    if (arg0 != NULL) {
        temp = arg0->unk_810;
        if (temp != NULL) {
            func_0897982C(temp);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47FE4;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A47FF4;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

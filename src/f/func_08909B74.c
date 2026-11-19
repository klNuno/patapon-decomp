#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    u8 pad_18[0x10];
    u8 *unk_28;
} T;

extern void func_0880416C(void *);
void func_088D4DA4(void *);
void func_08909818(T *, s16);
extern u8 D_08A468C8[];

T *func_08909B74(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        void *temp;
        arg0->unk_28 = D_08A468C8;
        temp = arg0->unk_14;
        if (temp != NULL) {
            func_088D4DA4(temp);
            arg0->unk_14 = NULL;
        }
        func_08909818(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

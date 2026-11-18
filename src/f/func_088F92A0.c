#include "common.h"
typedef struct {
    u8 pad_00[0x24];
    u8 unk_24[0x20];
    char unk_44[0x44];
    s32 unk_88;
} E;
typedef struct {
    u8 pad_00[0x220];
    u8 unk_220[4];
} T;
extern s32 func_08822AD0(char *, char *);
extern E *func_088E5E44(void *, u32);
extern u32 func_088E5E88(void *);
void *func_088F92A0(T *arg0, char *arg1) {
    u32 i;
    E *e;
    for (i = 0; i < func_088E5E88(arg0->unk_220); i++) {
        e = func_088E5E44(arg0->unk_220, i);
        if (e->unk_88 != 0 && func_08822AD0(e->unk_44, arg1) == 0) {
            return e->unk_24;
        }
    }
    return NULL;
}

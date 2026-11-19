#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    char unk_0C[0x18];
    u8 unk_24[0xA4];
    void *unk_C8;
    u8 pad_CC[0x20];
    s32 unk_EC;
    s32 unk_F0;
    s32 unk_F4;
} T0894C824;

void func_0889B278(void *, void *);
extern void func_0894C8E4(char *);
char *func_0888AA58(char *);

T0894C824 *func_0894C824(T0894C824 *arg0, void *arg1, void *arg2) {
    arg0->unk_00 = arg2;
    arg0->unk_08 = 0;
    func_0888AA58(arg0->unk_0C);
    func_0889B278(arg0->unk_24, arg1);
    arg0->unk_C8 = arg1;
    arg0->unk_EC = 0;
    arg0->unk_F0 = 0;
    arg0->unk_F4 = 0;
    func_0894C8E4((char *)arg0);
    return arg0;
}

#include "common.h"

typedef struct {
    u8 pad_00[0x1070];
    char unk_1070[1];
    u8 pad_1071[0x46180 - 0x1071];
    char unk_46180[1];
} T;

void func_08995398(T *, s32);
void func_089967FC(char *);
void func_08996808(char *, s8);
s32 func_08996818(char *);
void func_089968C8(char *, s8);
void func_089B88B4(char *);

void func_08995090(T *arg0) {
    func_08996808(arg0->unk_46180, 1);
    func_089968C8(arg0->unk_46180, 1);
    func_089967FC(arg0->unk_46180);
    func_089B88B4(arg0->unk_1070);
    func_08995398(arg0, func_08996818(arg0->unk_46180));
}

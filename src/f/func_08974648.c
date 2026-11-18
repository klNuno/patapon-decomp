#include "common.h"

typedef struct {
    u8 pad_00[0x128];
    char unk_128[0x10];
    f32 unk_138;
    f32 unk_13C;
    s32 unk_140;
} T;

extern char D_08A05474[];
extern void func_08974068(char *, f32);
f32 func_0897412C(char *);
f32 func_0890CF44(s32, char *, f32);

void func_08974648(T *arg0, f32 arg1, f32 arg2) {
    f32 temp;
    f32 temp1;
    f32 temp2;

    if (arg2 == 0.0f) {
        arg0->unk_13C = arg1;
        arg0->unk_138 = arg1;
        func_08974068(arg0->unk_128, arg2);
        return;
    }
    if (arg0->unk_140 == 0) {
        temp1 = arg0->unk_13C;
        temp2 = func_0897412C(arg0->unk_128);
        temp = arg0->unk_138 - temp1;
        temp *= temp2;
        temp1 += temp;
        temp = temp1;
    } else {
        temp2 = func_0897412C(arg0->unk_128);
        temp = func_0890CF44(arg0->unk_140, D_08A05474, temp2);
    }
    arg0->unk_13C = temp;
    arg0->unk_138 = arg1;
    func_08974068(arg0->unk_128, arg2);
}

#include "common.h"

extern "C" {

struct Tag_08886960 {};

typedef struct {
    u32 unk_00;
    u32 unk_04;
    char *unk_08;
} S08886960;

u32 func_08822BC4(char *);
void func_0880FFF4(S08886960 *, u32);
S08886960 *func_0880F6B4(S08886960 *, u32, u32, char *, char *, Tag_08886960);

s32 func_08886960(S08886960 *arg0, S08886960 *arg1, char *arg2) {
    u32 len;
    char *data;
    u32 size;
    Tag_08886960 t2;
    Tag_08886960 t1;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    len = func_08822BC4(arg2);
    if (!(arg1->unk_00 & 1)) {
        data = (char *)arg1 + 1;
        size = ((u32)(*(u8 *)arg1 << 24)) >> 25;
    } else {
        data = arg1->unk_08;
        size = arg1->unk_04;
    }
    func_0880FFF4(arg0, size + len);
    func_0880F6B4(func_0880F6B4(arg0, 0, 0, data, data + size, t1), size, 0, arg2, arg2 + len, t2);
    return 0;
}

}

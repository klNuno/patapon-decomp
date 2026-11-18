#include "common.h"

typedef struct {
    u8 pad_00[0x33F0];
    u8 unk_33F0[0x17890];
    s32 unk_1AC80;
} T08948428;

void func_089484F4(T08948428 *, s32);
void func_08948548(T08948428 *, s32);
void func_089488F8(T08948428 *, s32);
void func_08948970(T08948428 *, s32);
void func_089489FC(T08948428 *, s32);
void func_0894A8B8(u8 *, s32);

s32 func_08948428(T08948428 *arg0, s32 arg1) {
    switch (arg0->unk_1AC80) {
    case 0:
        func_089484F4(arg0, arg1);
        break;
    case 1:
        func_08948548(arg0, arg1);
        break;
    case 2:
        func_089488F8(arg0, arg1);
        break;
    case 3:
        func_08948970(arg0, arg1);
        break;
    case 4:
        func_089489FC(arg0, arg1);
        break;
    }
    func_0894A8B8(arg0->unk_33F0, arg1);
    return 0x10000;
}

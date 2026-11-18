#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct {
    s8 unk_00[0x200];
} E_0897F5E4;

typedef struct {
    u8 pad_00[0x10010];
    E_0897F5E4 *unk_10010;
    s32 unk_10014;
} S_0897F5E4;

S_0897F5E4 *func_0897F5E4(S_0897F5E4 *arg0, s32 arg1, E_0897F5E4 *arg2) {
    E_0897F5E4 *p;
    E_0897F5E4 **data;
    s32 *size;

    arg0->unk_10010 = (E_0897F5E4 *)((u32)arg0 + ((u32)arg0 & 0xF));
    arg0->unk_10014 = arg1;
    p = arg0->unk_10010;
    data = &arg0->unk_10010;
    if ((u32)p != (u32)(*data + arg1)) {
        size = &arg0->unk_10014;
        do {
            new (p) E_0897F5E4(*arg2);
            p++;
        } while (p != *data + *size);
    }
    return arg0;
}

}

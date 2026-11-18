#include "common.h"

typedef struct E_0888ABB0 {
    u32 unk_00;
    u8 pad_04[0xC];
} E_0888ABB0;

typedef struct S_0888ABB0 {
    u8 pad_00[0x24];
    s32 unk_24;
    E_0888ABB0 unk_28[1];
} S_0888ABB0;

extern u32 D_089DE0F0[];

void func_0888AAE8(void *, u8 *);

E_0888ABB0 *func_0888ABB0(void *arg0, S_0888ABB0 *arg1, s32 *arg2) {
    u8 buf[0x40];
    u8 *s;
    E_0888ABB0 *arr;
    s32 n;
    u32 crc;
    u32 key;
    s32 lo;
    s32 hi;
    s32 mid;
    u32 i;
    E_0888ABB0 *e;

    func_0888AAE8(arg0, buf);
    s = buf;
    crc = 0xFFFFFFFF;
    while (*s != 0) {
        crc = (crc >> 8) ^ D_089DE0F0[(u8)(crc ^ *s)];
        s++;
    }
    key = ~crc;
    n = arg1->unk_24;
    arr = arg1->unk_28;
    lo = 0;
    hi = n;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (arr[mid].unk_00 < key) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    i = 0;
    if (n != 0) {
        do {
            if (key == arr[i].unk_00) {
                lo = i;
                break;
            }
            i++;
        } while (i < *(volatile s32 *)&arg1->unk_24);
    }
    e = &arr[lo];
    if (key != e->unk_00) {
        return NULL;
    }
    if (arg2 != NULL) {
        *arg2 = lo;
    }
    return e;
}

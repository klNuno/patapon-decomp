#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} E_08805B40;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    E_08805B40 *unk_0C;
    E_08805B40 *unk_10;
} T_08805B40;

s32 func_08805E10(T_08805B40 *arg0, u32 arg1);
u8 *func_08805DC0(u32);
u8 *func_08804778(u8 *arg0, u32 *arg1);

inline E_08805B40 *find_08805B40(E_08805B40 *base, s32 n, u32 pc) {
    s32 lo;
    s32 hi;
    s32 mid;
    E_08805B40 *e;

    hi = n - 1;
    lo = 0;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        e = &base[mid];
        if (pc < e->unk_00) {
            hi = mid - 1;
        } else if (e->unk_00 + (e->unk_04 & ~1) < pc) {
            lo = mid + 1;
        } else {
            return e;
        }
    }
    return NULL;
}

void func_08805B40(u32 arg0, T_08805B40 *arg1) {
    u32 a;
    u32 b;
    u32 c;
    E_08805B40 *e;
    u32 pc;
    u32 off;
    u32 total;
    u8 *p;

    arg1->unk_04 = 0;
    arg1->unk_08 = 0;
    if (func_08805E10(arg1, arg0) == 0) {
        return;
    }
    pc = arg0 & ~1;
    e = find_08805B40(arg1->unk_0C, arg1->unk_10 - arg1->unk_0C, pc);
    if (e == NULL) {
        return;
    }
    if (e->unk_04 & 1) {
        arg1->unk_04 = (u32)&e->unk_08;
    } else {
        arg1->unk_04 = e->unk_08;
    }
    arg1->unk_00 = e->unk_00;
    off = pc - e->unk_00;
    p = func_08805DC0(arg1->unk_04);
    total = 0;
    do {
        p = func_08804778(p, &a);
        if (a == 0) {
            return;
        }
        p = func_08804778(p, &b);
        p = func_08804778(p, &c);
        total += a;
        if (off < total) {
            return;
        }
        total += b;
    } while (off > total);
    arg1->unk_08 = arg1->unk_04 + c;
}

}

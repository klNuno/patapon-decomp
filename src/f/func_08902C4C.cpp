#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    u8 pad_04[0x20];
    s32 unk_24;
} E_08902C4C;

struct V_08902C4C {
    u8 pad_00[0xFB0];
    E_08902C4C *unk_FB0;
    u32 unk_FB4;
    E_08902C4C *find(u32 key) {
        s32 lo;
        s32 hi;
        if (unk_FB4 == 0) {
            return unk_FB0 + unk_FB4;
        }
        lo = 0;
        hi = unk_FB4;
        while (lo <= hi) {
            E_08902C4C *&data = unk_FB0;
            s32 mid = lo + (hi - lo) / 2;
            E_08902C4C *e;
            if ((u32)mid >= unk_FB4) {
                break;
            }
            e = data + mid;
            if (key < e->unk_00) {
                hi = mid - 1;
            } else if (e->unk_00 < key) {
                lo = mid + 1;
            } else {
                return e;
            }
        }
        return unk_FB0 + *(volatile u32 *)&unk_FB4;
    }
    E_08902C4C *end() { return unk_FB0 + unk_FB4; }
};

typedef struct {
    V_08902C4C *map() { return &unk_14A8; }
    u8 pad_00[0x14A8];
    V_08902C4C unk_14A8;
} M_08902C4C;

typedef struct {
    u8 pad_00[0x42820];
    M_08902C4C *unk_42820;
} G_08902C4C;

extern G_08902C4C *D_08AD1E28[];

s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
u32 func_0888AFAC(u8 *);
void func_08852F00(void *, s32);

void func_08902C4C(void *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 0, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    u32 key = func_0888AFAC(func_08852BA8(arg1) + *a);
    M_08902C4C *m;
    E_08902C4C *e;

    *b = 0;
    m = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    e = m->map()->find(key);
    if (e != m->unk_14A8.end()) {
        *b = e->unk_24;
    }
    func_08852F00(arg1, 0);
}

}

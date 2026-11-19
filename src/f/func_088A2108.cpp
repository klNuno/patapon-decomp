#include "common.h"

extern "C" {

struct T0 {
    virtual void *unk_08(u32, s32);
};
struct T1 {
    u16 unk_00, unk_02;
    s32 unk_04[1];
};
struct T2 {
    u8 **unk_00;
    u8 *unk_04;
    void *unk_08;
    T1 *unk_0C;
    u8 pad_10[4];
    void *unk_14;
    u8 pad_18[8];
    u32 unk_20[16];
    u8 pad_60[0x10];
    u32 unk_70, unk_74, unk_78, unk_7C, unk_80;
    void *unk_84, *unk_88, *unk_8C, *unk_90, *unk_94;
    s32 unk_98;
    void *unk_9C;
};

void func_0881F120(void *, void *, s32);
void func_0881F5C0(void *, s32, s32);
void func_088576F8(void);
void func_088A17E8(void *);
extern u32 D_089FAA74[];
extern u32 D_089FAA78[];
extern u32 D_089FAA7C[];
extern u32 D_089FAA80[];
extern u32 D_089FAA84[];

static inline const u32 &func_088A2108_00(const u32 &a, const u32 &b) {
    return a < b ? b : a;
}

s32 func_088A2108(T2 *arg0, u8 **arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, T1 *arg6, void *arg7, void *arg8, T0 *arg9) {
    u32 *m;
    void *p;
    s32 n, size;

    arg0->unk_00 = arg1;
    arg0->unk_04 = *arg1 + 0x20;
    m = (u32 *)((u32)arg0 + 0x20);
    arg0->unk_98 = 0;
    if (m != NULL) {
        arg0->unk_20[0] = 0x3F800000;
        arg0->unk_20[1] = 0;
        arg0->unk_20[2] = 0;
        arg0->unk_20[3] = 0;
        arg0->unk_20[4] = 0;
        arg0->unk_20[5] = 0x3F800000;
        arg0->unk_20[6] = 0;
        arg0->unk_20[7] = 0;
        arg0->unk_20[8] = 0;
        arg0->unk_20[9] = 0;
        arg0->unk_20[10] = 0x3F800000;
        arg0->unk_20[11] = 0;
        arg0->unk_20[12] = 0;
        arg0->unk_20[13] = 0;
        arg0->unk_20[14] = 0;
        arg0->unk_20[15] = 0x3F800000;
    } else {
        func_088576F8();
    }
    arg0->unk_70 = func_088A2108_00(arg2, D_089FAA74[0]);
    arg0->unk_74 = func_088A2108_00(arg3, D_089FAA78[0]);
    arg0->unk_78 = func_088A2108_00(arg4, D_089FAA7C[0]);
    arg0->unk_80 = func_088A2108_00(arg5, D_089FAA80[0]);
    arg0->unk_7C = func_088A2108_00(arg4, D_089FAA84[0]);
    arg0->unk_84 = arg2 != 0 ? arg9->unk_08(arg2 * 0x50, 0x20) : NULL;
    arg0->unk_88 = arg3 != 0 ? arg9->unk_08(arg3 * 0x50, 0x20) : NULL;
    arg0->unk_8C = arg4 != 0 ? arg9->unk_08(arg4 * 4, 0x20) : NULL;
    arg0->unk_90 = arg4 != 0 ? arg9->unk_08(arg4 * 4, 0x20) : NULL;
    arg0->unk_94 = arg4 != 0 ? arg9->unk_08(arg4 * 4, 0x20) : NULL;
    if (arg5 != 0) {
        p = arg9->unk_08(arg5 * 4, 0x20);
        arg0->unk_9C = p;
        func_0881F5C0(p, 0, arg5 * 4);
    } else {
        arg0->unk_9C = NULL;
    }
    if (arg7 != NULL) {
        n = arg6->unk_02 * 0xC + 0x10;
        size = n * 4;
        p = arg9->unk_08(size, 0x20);
        arg0->unk_0C = (T1 *)p;
        func_0881F120(p, arg7, n);
        p = arg9->unk_08(size, 0x20);
        func_0881F120(p, arg0->unk_0C, n);
        arg0->unk_08 = p;
    } else if (arg6 != NULL) {
        s32 n;
        s32 size;
        n = arg6->unk_02 * 0xC + 0x10;
        size = n * 4;
        p = arg9->unk_08(size, 0x20);
        arg0->unk_0C = (T1 *)p;
        func_0881F5C0(p, 0, n);
        arg0->unk_0C->unk_02 = arg6->unk_02;
        s32 i = 0;
        if (arg6->unk_02 > 0) {
            const T1 *q = arg6;
            s32 off = 0;
            do {
                *(s32 *)((u8 *)arg0->unk_0C + off + 4) = q->unk_04[0];
                ++i;
                q = (const T1 *)((const u8 *)q + 4);
                off += 0xC;
            } while (i < arg6->unk_02);
        }
        p = arg9->unk_08(size, 0x20);
        func_0881F120(p, arg0->unk_0C, n);
        arg0->unk_08 = p;
    } else {
        arg0->unk_0C = NULL;
        arg0->unk_08 = NULL;
    }
    arg0->unk_14 = arg8;
    func_088A17E8(arg0);
    return 1;
}

}

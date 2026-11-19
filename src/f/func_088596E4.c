#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0A[6];
} T0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T1;

typedef struct {
    T0 unk_00;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
    s32 unk_20[12];
    s32 unk_50[12];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    f32 unk_8C;
    u32 unk_90;
    u8 unk_94;
} T2;

extern T1 D_089F8980[];
extern T1 D_089F8988[];
extern T1 D_089F8990[];
extern T1 D_089F8998[];
extern T1 D_089F89A0[];
extern T1 D_089F89A8[];
f32 func_0885625C(f32);
s32 sceCtrlReadBufferPositive(T0 *, s32);
s32 sceKernelPowerTick(s32);
f32 fabsf(f32);

void func_088596E4(T2 *arg0) {
    T1 temp[6];
    f32 x;
    f32 y;

    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;

    {
        s32 result = sceCtrlReadBufferPositive(&arg0->unk_00, 1);
        arg0->unk_94 = (arg0->unk_00.unk_04 & 0x20000) != 0;
        if (result <= 0) {
            return;
        }
    }

    arg0->unk_10 = arg0->unk_00.unk_04;

    if (arg0->unk_94 == 0) {
        f32 t0;
        f32 t1;
        f32 tempX;
        f32 tempY;
        f32 scale;
        f32 length;
        f32 offset = 128.0f;
        u32 flags;

        x = (f32)(u32)arg0->unk_00.unk_08;
        t1 = (f32)(u32)arg0->unk_00.unk_09;
        flags = arg0->unk_90;
        y = t1 - offset;
        x -= offset;

        if (flags & 2) {
            x = 0.0f;
        }
        if (flags & 4) {
            y = 0.0f;
        }

        t0 = x * x;
        t1 = y * y;
        length = t0 + t1;
        tempX = x;
        tempY = y;

        if (length < 4096.0f) {
            tempY = 0.0f;
            tempX = tempY;
        } else if (length > 16384.0f) {
            scale = 128.0f / func_0885625C(length);
            tempX = x * scale;
            tempY = y * scale;
            x = tempX;
            y = tempY;
        }

        arg0->unk_80 = x / 128.0f;
        arg0->unk_84 = tempX / 128.0f;
        t1 = y / 128.0f;
        t0 = tempY / 128.0f;
        arg0->unk_88 = t1;
        arg0->unk_8C = t0;

        if (arg0->unk_90 & 1) {
            if (arg0->unk_8C > 0.75f) {
                arg0->unk_10 |= 0x10;
            }
            if (arg0->unk_8C < -0.75f) {
                arg0->unk_10 |= 0x40;
            }
            if (arg0->unk_84 < -0.75f) {
                arg0->unk_10 |= 0x80;
            }
            if (arg0->unk_84 > 0.75f) {
                arg0->unk_10 |= 0x20;
            }
        }
        if (fabsf(arg0->unk_8C) > 0.75f || fabsf(arg0->unk_84) > 0.75f) {
            sceKernelPowerTick(6);
        }
    }

    {
        s32 mask;
        s32 n;
        const s32 *p;
        T2 *q;
        s32 value;

        temp[0] = D_089F8980[0];
        p = (const s32 *)temp;
        n = 0;
        temp[1] = D_089F8988[0];
        q = arg0;
        temp[2] = D_089F8990[0];
        temp[3] = D_089F8998[0];
        temp[4] = D_089F89A0[0];
        temp[5] = D_089F89A8[0];

        do {
            mask = *p;
            if ((mask & arg0->unk_10) != 0) {
                value = q->unk_20[0];
                if (value >= 0) {
                    value++;
                    if ((q->unk_20[0] = value) > 1000000000) {
                        q->unk_20[0] = 1000000000;
                    }
                    value = q->unk_50[0] - 1;
                    if ((q->unk_50[0] = value) <= 0) {
                        q->unk_50[0] = 6;
                        arg0->unk_18 |= *p;
                    }
                } else {
                    q->unk_20[0] = 0;
                    q->unk_50[0] = 20;
                    arg0->unk_1C |= mask;
                    arg0->unk_18 |= mask;
                }
            } else {
                value = q->unk_20[0];
                if (value <= 0) {
                    value--;
                    if ((q->unk_20[0] = value) < -1000000000) {
                        q->unk_20[0] = -1000000000;
                    }
                } else {
                    q->unk_20[0] = 0;
                    arg0->unk_14 |= mask;
                }
            }
            n++;
            p++;
            q = (T2 *)((u8 *)q + 4);
        } while (n < 12);
    }
}

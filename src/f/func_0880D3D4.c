#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
    u8 unk_28[0x4];
    void *unk_2C;
    s32 unk_30;
    u8 pad_34[0x4];
    u8 unk_38;
} S_0880D3D4;

extern s32 D_089F60A0[];

s32 *func_0880ABF0(s32 *, s32 *);
s32 func_0880D5C8(S_0880D3D4 *);
s32 func_08808980(void);
s32 func_0880D0CC(void *, void *, s8 *, s8 *, s8 **, u16 *, u16 *, u16 **);
s32 func_08824524(s32, void *);
s32 func_08808B04(u16 *);

s32 func_0880D3D4(S_0880D3D4 *arg0, s32 arg1) {
    s8 buf[0xC];
    u16 wc[2];
    s8 *from_next;
    u16 *to_next;
    s32 n;
    s32 i;
    s32 c;
    s32 r;
    s32 off;
    s8 *end;

    n = *func_0880ABF0(D_089F60A0, &arg0->unk_30);
    for (i = 0; i < n; i++) {
        c = func_0880D5C8(arg0);
        if (c == -1) {
            return func_08808980();
        }
        buf[i] = c;
    }
    if (arg0->unk_38) {
        wc[0] = *(u16 *)buf;
    } else {
        off = 0;
        end = buf + n;
        do {
            r = func_0880D0CC(arg0->unk_2C, arg0->unk_28, buf + off, end, &from_next, wc, wc + 2, &to_next);
            switch (r) {
            case 2:
                return func_08808980();
            case 1:
                off = from_next - buf;
                if (n == 0xC) {
                    return func_08808980();
                }
                c = func_0880D5C8(arg0);
                if (c == -1) {
                    return func_08808980();
                }
                buf[n] = c;
                end++;
                n++;
                break;
            case 0:
                break;
            case 3:
                wc[0] = *(u16 *)buf;
                break;
            }
        } while (r == 1);
    }
    if (!arg1) {
        while (n > 0) {
            if (func_08824524(buf[--n], arg0->unk_24) == -1) {
                return func_08808980();
            }
        }
    }
    return func_08808B04(wc);
}

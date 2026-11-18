#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34;
    u8 unk_35;
} S_0880A97C;

extern s32 D_089F5FE8[];

s32 *func_0880ABF0(s32 *, s32 *);
s32 func_0880ABA4(S_0880A97C *);
s32 func_0880AB70(s32, s32 *, char *, char *, char **, char *, char *, char **);
s32 func_0880ADB8(void);
s32 func_0880ADC0(char *);
s32 func_08824524(s32, s32);

s32 func_0880A97C(S_0880A97C *arg0, s32 arg1) {
    char c;
    char buf[0xC];
    char *from_next;
    char *to_next;
    s32 n;
    s32 i;
    s32 r;
    s32 off;
    char *end;

    n = *func_0880ABF0(D_089F5FE8, &arg0->unk_30);
    for (i = 0; i < n; i++) {
        r = func_0880ABA4(arg0);
        if (r == -1) {
            return func_0880ADB8();
        }
        buf[i] = r;
    }
    if (arg0->unk_35 != 0) {
        c = buf[0];
    } else {
        end = buf + n;
        off = 0;
        do {
            r = func_0880AB70(arg0->unk_2C, &arg0->unk_28, buf + off, end, &from_next, &c, &c + 1, &to_next);
            switch (r) {
            case 2:
                return func_0880ADB8();
            case 1:
                off = from_next - buf;
                if (n == 0xC) {
                    return func_0880ADB8();
                }
                i = func_0880ABA4(arg0);
                if (i == -1) {
                    return func_0880ADB8();
                }
                buf[n] = i;
                end++;
                n++;
                break;
            case 0:
                break;
            case 3:
                c = buf[0];
                break;
            }
        } while (r == 1);
    }
    if (arg1 == 0) {
        while (n > 0) {
            if (func_08824524(buf[--n], arg0->unk_24) == -1) {
                return func_0880ADB8();
            }
        }
    }
    return func_0880ADC0(&c);
}

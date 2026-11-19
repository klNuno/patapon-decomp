#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[8];
    char unk_08[0x10A44 - 8];
    char unk_10A44[0x11540 - 0x10A44];
    u8 *unk_11540;
    s32 unk_11544;
    u8 unk_11548;
    u8 pad_11549[3];
    f32 unk_1154C;
    u8 unk_11550;
    u8 unk_11551;
    u8 pad_11552[0xE];
    u32 unk_11560;
    u32 unk_11564;
    s32 unk_11568;
    u8 unk_1156C;
    u8 pad_1156D[3];
    s32 unk_11570;
    u8 pad_11574[8];
    s32 unk_1157C;
    s32 unk_11580;
    u8 unk_11584;
    u8 unk_11585;
} S;

typedef struct S_089CE450 S_089CE450;
s32 func_089B57E4(char *arg0);
s32 func_089CE450(S_089CE450 *arg0, s32 arg1);
s32 func_089CF208(S *);
s32 func_089CF31C(S *);
s32 func_089CF4BC(S *);
s32 func_089CF654(S *);
s32 func_089CF854(S *, s32);
void func_089CFED4(S *, s32, s32);
void func_089D0470(S *, s32);
s32 func_089D04A8(S *);
extern void func_089D1904(char *, s32, s32);
extern s32 func_089D1AD8(s32);
s32 func_089D1AEC(u8 *);

void func_089CE5A0(S *arg0, u32 arg1) {
    f32 temp_f1;
    s32 temp_a0;
    bool var_s1 = true;
    u32 temp_a0_2;
    u32 temp_s0;

    if ((arg0->unk_11548 != 0) && (func_089B57E4(arg0->unk_10A44) != 1)) {
        if (arg0->unk_11551 != 0) {
            arg0->unk_11551 = 0;
        } else {
            temp_s0 = arg0->unk_11560;
            switch (temp_s0) {
            case 0:
                func_089D0470(arg0, 1);
                break;
            case 1:
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_11584 = 0U;
                    arg0->unk_11585 = 1U;
                    arg0->unk_11548 = 1U;
                    func_089D1904(arg0->unk_08, 0, -1);
                    arg0->unk_1156C = 0;
                    arg0->unk_11570 = 0;
                }
                if (func_089CF31C(arg0) != 0) {
                    func_089D0470(arg0, arg0->unk_11568);
                }
                break;
            case 2:
                func_089D0470(arg0, 4);
                break;
            case 3:
                break;
            case 4:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 0);
                }
                break;
            case 5:
                if (func_089D04A8(arg0) != 0) {
                    func_089D0470(arg0, 6);
                }
                break;
            case 6:
                if (func_089D04A8(arg0) != 0) {
                    if ((arg0->unk_11584 == 0) && (*arg0->unk_11540 != 0)) {
                        func_089D0470(arg0, 0x1F);
                        break;
                    } else {
                        *arg0->unk_11540 = 0;
                        func_089CFED4(arg0, 0xC, 0);
                    }
                }
                if (arg0->unk_11550 == 0) {
                    arg0->unk_11550 = func_089CF4BC(arg0);
                }
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_1154C = 9600.0f;
                }
                if (arg0->unk_11550 != 0 && arg0->unk_1154C <= 0.0f) {
                    func_089D0470(arg0, 0xB);
                }
                break;
            case 7:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 8, 0);
                }
                break;
            case 8:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 9, 0);
                }
                break;
            case 9:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 1);
                }
                break;
            case 10:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xD, 1);
                }
                break;
            case 12:
                if (func_089D04A8(arg0) != 0) {
                    temp_a0 = arg0->unk_11544;
                    switch (temp_a0) {
                    case 1:
                        func_089CFED4(arg0, 0x1F, 5);
                        break;
                    case 2:
                        func_089CFED4(arg0, 0x1F, 6);
                        break;
                    case 3:
                        func_089CFED4(arg0, 0x1F, 0xD);
                        break;
                    case 4:
                        func_089CFED4(arg0, 0x1F, 6);
                        break;
                    case 5:
                        func_089CFED4(arg0, 0x1F, 0xD);
                        break;
                    }
                }
                break;
            case 11:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xC, 0);
                }
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_1154C = 9600.0f;
                }
                if (arg0->unk_1154C <= 0.0f) {
                    func_089D0470(arg0, 0x1F);
                    *arg0->unk_11540 = 0;
                }
                break;
            case 13:
                if (func_089D04A8(arg0) != 0) {
                    if (arg0->unk_11584 == 0 && *arg0->unk_11540 != 0) {
                        func_089D0470(arg0, 0x1F);
                        break;
                    }
                    *arg0->unk_11540 = 0;
                    if (arg0->unk_11584 == 0) {
                        func_089D0470(arg0, 0x19);
                        break;
                    }
                    if (arg0->unk_11585 != 0) {
                        func_089D0470(arg0, 0x14);
                        break;
                    }
                }
            case 14:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0, 0);
                }
                if (arg0->unk_11550 == 0) {
                    arg0->unk_11550 = func_089CF854(arg0, 0);
                }
                if (arg0->unk_11550 != 0) {
                    func_089D0470(arg0, 0x13);
                }
                break;
            case 15:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0, 0);
                }
                if (arg0->unk_11550 == 0) {
                    arg0->unk_11550 = func_089CF854(arg0, 1);
                }
                if (arg0->unk_11550 != 0) {
                    func_089D0470(arg0, 0x13);
                }
                break;
            case 16:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xF, 0x12);
                }
                break;
            case 17:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xF, 0x12);
                }
                break;
            case 18:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 1);
                }
                break;
            case 19:
                if (func_089D04A8(arg0) != 0) {
                    if ((arg0->unk_11584 == 0) && (*arg0->unk_11540 != 0)) {
                        func_089D0470(arg0, 0x1F);
                        break;
                    } else {
                        func_089CFED4(arg0, 0xC, 0);
                    }
                }
                if (arg0->unk_11550 == 0) {
                    arg0->unk_11550 = func_089CF654(arg0);
                }
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_1154C = 9600.0f;
                }
                if (arg0->unk_11550 != 0 && arg0->unk_1154C <= 0.0f) {
                    func_089D0470(arg0, 0x1C);
                }
                break;
            case 20:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xE, 0x15);
                }
                break;
            case 21:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 1);
                }
                break;
            case 22:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x17, 0);
                }
                break;
            case 23:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1D, 0x18);
                }
                break;
            case 24:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 1);
                }
                break;
            case 25:
                if (func_089D04A8(arg0) != 0) {
                    if (*arg0->unk_11540 == 0) {
                        func_089CFED4(arg0, 0x1A, 0);
                    } else {
                        func_089D0470(arg0, 0x1F);
                    }
                }
                break;
            case 26:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1B, 0);
                }
                break;
            case 27:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0x1F, 1);
                }
                break;
            case 28:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0xC, 0);
                }
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_1154C = 9600.0f;
                }
                if (arg0->unk_1154C <= 0.0f) {
                    func_089D0470(arg0, 0x1F);
                }
                break;
            case 29:
                if (func_089D04A8(arg0) != 0) {
                    func_089CFED4(arg0, 0, 0);
                }
                if (func_089CF208(arg0) != 0) {
                    func_089D0470(arg0, 1);
                }
                break;
            case 30:
                arg0->unk_11548 = 0U;
                func_089CE450((S_089CE450 *)arg0, arg0->unk_11544);
                break;
            case 31: default:
                var_s1 = false;
                if (func_089D04A8(arg0) != 0) {
                    arg0->unk_1154C = 24000.0f;
                    temp_a0_2 = arg0->unk_11564;
                    if (temp_a0_2 == 9) {
                        *arg0->unk_11540 = 1;
                    } else if (temp_a0_2 == 27) {
                        *arg0->unk_11540 = 1;
                    }
                }
                arg0->unk_11548 = 0U;
                break;
            }
            temp_f1 = arg0->unk_1154C;
            if (0.0f < temp_f1) {
                f32 temp_f1_2 = temp_f1 - (f32)arg1;
                arg0->unk_1154C = temp_f1_2;
                if (temp_f1_2 <= 0.0f) {
                    arg0->unk_1154C = 0.0f;
                }
            }
            if ((var_s1) && (arg0->unk_11570 != 0) && (func_089D1AD8((s32)arg0->unk_08) != 0)) {
                if (func_089D1AEC((u8 *)arg0->unk_08) == 0) {
                    func_089D0470(arg0, arg0->unk_1157C);
                } else if (func_089D1AEC((u8 *)arg0->unk_08) == 1) {
                    func_089D0470(arg0, arg0->unk_11580);
                }
            }
            arg0->unk_11564 = temp_s0;
        }
    }
}

}

#include "common.h"

typedef struct {
    u8 pad_00[0x38];
} Psmf_0895E580;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Info_0895E580;

typedef struct {
    u8 pad_00[0x16C];
    u8 unk_16C;
    u8 pad_16D[0x17C - 0x16D];
    s32 unk_17C;
    s32 unk_180;
} T_0895E580;

s32 scePsmfSetPsmf(Psmf_0895E580 *, void *);
s32 scePsmfGetPsmfVersion(Psmf_0895E580 *);
s32 scePsmfGetNumberOfSpecificStreams(Psmf_0895E580 *, s32);
s32 scePsmfGetNumberOfStreams(Psmf_0895E580 *);
s32 scePsmfSpecifyStream(Psmf_0895E580 *, s32);
s32 scePsmfGetCurrentStreamType(Psmf_0895E580 *, s32 *, s32 *);
s32 scePsmfGetVideoInfo(Psmf_0895E580 *, Info_0895E580 *);

s32 func_0895E580(T_0895E580 *arg0, void *arg1) {
    Psmf_0895E580 psmf;
    s32 type;
    s32 ch;
    Info_0895E580 info;
    s32 n;
    s32 i;

    if (scePsmfSetPsmf(&psmf, arg1) != 0) {
        return 0;
    }
    if (scePsmfGetPsmfVersion(&psmf) < 0) {
        return 0;
    }
    n = scePsmfGetNumberOfSpecificStreams(&psmf, 0);
    if (n < 0) {
        return 0;
    }
    if (n <= 0) {
        return 0;
    }
    n = scePsmfGetNumberOfSpecificStreams(&psmf, 1);
    if (n < 0) {
        return 0;
    }
    arg0->unk_16C = 0;
    if (n > 0) {
        arg0->unk_16C = 1;
    }
    if (scePsmfGetNumberOfSpecificStreams(&psmf, 2) < 0) {
        return 0;
    }
    if (scePsmfGetNumberOfSpecificStreams(&psmf, 3) < 0) {
        return 0;
    }
    for (i = 0; i < scePsmfGetNumberOfStreams(&psmf); i++) {
        if (scePsmfSpecifyStream(&psmf, i) != 0) {
            return 0;
        }
        type = -1;
        ch = -1;
        if (scePsmfGetCurrentStreamType(&psmf, &type, &ch) != 0) {
            return 0;
        }
        switch (type) {
        case 0:
            if (scePsmfGetVideoInfo(&psmf, &info) != 0) {
                return 0;
            }
            arg0->unk_17C = info.unk_00;
            arg0->unk_180 = info.unk_04;
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            return 0;
        }
    }
    return 1;
}

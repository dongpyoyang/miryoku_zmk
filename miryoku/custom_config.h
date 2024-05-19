// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
                 XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
&u_to_U_change_rBASE  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &u_to_U_change_BASE \
&u_to_U_change_rEXTRA K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &u_to_U_change_EXTRA \
                                K32  K33  K34       K35  K36  K37


#define MIRYOKU_ALTERNATIVES_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&bt BT_DISC 0,     &bt BT_DISC 1,     &bt BT_DISC 2,     &bt BT_DISC 3,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

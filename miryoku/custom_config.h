// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_GAV, SPACE),U_MT(LSHFT, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_GAV \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp LALT,          &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_NA,              U_NA,              U_NA,              U_NA,              &kp LCTRL,         &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MABI \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_MSK, SPACE),U_MT(U_MSK2, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_MSK \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp LALT,          &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_NA,              U_NA,              U_NA,              U_NA,              &kp LCTRL,         &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MSK2 \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp LALT,          &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_NA,              U_NA,              U_NA,              U_NA,              &kp LCTRL,         &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

// Change
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&bt BT_DISC 0,     &bt BT_DISC 1,     &bt BT_DISC 2,     &bt BT_DISC 3,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
&kp LCTRL  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &u_to_U_change_BASE \
&kp LSHIFT K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &u_to_U_change_EXTRA \
                 K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAV,    "Gav") \
MIRYOKU_X(MABI,   "Mabi") \
MIRYOKU_X(MSK,    "Msk") \
MIRYOKU_X(MSK2,   "Msk2")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAV  MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MABI MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MSK  MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MSK2 MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
#define U_GAV    11
#define U_MABI   12
#define U_MSK    13
#define U_MSK2   14

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define U_MOUSE_MOVE_TIME 3000

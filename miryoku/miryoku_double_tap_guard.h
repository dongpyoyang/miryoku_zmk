// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_KLUDGE_DOUBLETAPBOOT)
  #if defined (MIRYOKU_KLUDGE_SOFT_OFF)
    #define U_BOOT &u_soft_off
  #else
    #define U_BOOT &u_bootloader
  #endif
#else
  #if defined (MIRYOKU_KLUDGE_SOFT_OFF)
    #define U_BOOT &soft_off
  #else
    #define U_BOOT &bootloader
  #endif
#endif

#define MIRYOKU_CHANGE_LAYOUT_WITH_LANGUAGE(CODE) \
U_MACRO(u_chage_##CODE, bindings = <&to ##CODE>, <&macro_press &kp LSHFT>, <&macro_tap &kp SPACE>, <&macro_release &kp LSHFT>;)
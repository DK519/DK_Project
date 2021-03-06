//------------------------------------------------------------------------------
//
// Copyright (c) 2015, Linaro Limited. All rights reserved.
//
// SPDX-License-Identifier: BSD-2-Clause-Patent
//
//------------------------------------------------------------------------------

    EXPORT      __aeabi_cdrcmple
    EXPORT      __aeabi_cdcmpeq
    EXPORT      __aeabi_cdcmple
    IMPORT      _softfloat_float64_eq
    IMPORT      _softfloat_float64_lt

    AREA        __aeabi_cdcmp, CODE, READONLY
    PRESERVE8

__aeabi_cdrcmple
    MOV         IP, R0
    MOV         R0, R2
    MOV         R2, IP

    MOV         IP, R1
    MOV         R1, R3
    MOV         R3, IP

__aeabi_cdcmpeq
__aeabi_cdcmple
    PUSH        {R0 - R3, IP, LR}
    BL          _softfloat_float64_eq
    SUB         IP, R0, #1
    CMP         IP, #0                  // sets C and Z if R0 == 1
    POPEQ       {R0 - R3, IP, PC}

    LDM         SP, {R0 - R3}
    BL          _softfloat_float64_lt
    SUB         IP, R0, #1
    CMP         IP, #1                  // sets C if R0 == 0
    POP         {R0 - R3, IP, PC}

    END

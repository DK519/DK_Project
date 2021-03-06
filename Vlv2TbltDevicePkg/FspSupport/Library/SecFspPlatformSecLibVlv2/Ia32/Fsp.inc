;------------------------------------------------------------------------------
;
; Copyright (c) 2014, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   Fsp.inc
;
; Abstract:
;
;   Fsp related definitions
;
;------------------------------------------------------------------------------


;
; Fv Header
;
FVH_SIGINATURE_OFFSET       EQU  028h
FVH_SIGINATURE_VALID_VALUE  EQU  04856465Fh    ; valid signature:_FVH
FVH_HEADER_LENGTH_OFFSET    EQU  030h
FVH_EXTHEADER_OFFSET_OFFSET EQU  034h
FVH_EXTHEADER_SIZE_OFFSET   EQU  010h

;
; Ffs Header
;
FSP_HEADER_GUID_DWORD1      EQU  0912740BEh
FSP_HEADER_GUID_DWORD2      EQU  047342284h
FSP_HEADER_GUID_DWORD3      EQU  0B08471B9h
FSP_HEADER_GUID_DWORD4      EQU  00C3F3527h
FFS_HEADER_SIZE_VALUE       EQU  018h

;
; Section Header
;
SECTION_HEADER_TYPE_OFFSET  EQU  03h
RAW_SECTION_HEADER_SIZE_VALUE  EQU  04h

;
; Fsp Header
;
FSP_HEADER_IMAGEBASE_OFFSET   EQU  01Ch
FSP_HEADER_TEMPRAMINIT_OFFSET EQU  030h

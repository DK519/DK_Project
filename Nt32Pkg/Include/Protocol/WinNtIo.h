/**@file

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  WinNtIo.h

Abstract:

**/

#ifndef __WIN_NT_IO_H__
#define __WIN_NT_IO_H__

#include <Protocol/WinNtThunk.h>

#define EFI_WIN_NT_IO_PROTOCOL_GUID \
  { 0x96eb4ad6, 0xa32a, 0x11d4, { 0xbc, 0xfd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }

extern EFI_GUID gEfiWinNtIoProtocolGuid;

typedef struct {
  EFI_WIN_NT_THUNK_PROTOCOL *WinNtThunk;
  EFI_GUID                  *TypeGuid;
  CHAR16                    *EnvString;
  UINT16                    InstanceNumber;
} EFI_WIN_NT_IO_PROTOCOL;

//
// The following GUIDs are used in EFI_WIN_NT_IO_PROTOCOL_GUID
// Device paths. They map 1:1 with NT envirnment variables. The variables
// define what virtual hardware the emulator/WinNtBusDriver will produce.
//
//
// EFI_WIN_NT_VIRTUAL_DISKS
//
#define EFI_WIN_NT_VIRTUAL_DISKS_GUID \
  { \
    0xc95a928, 0xa006, 0x11d4, {0xbc, 0xfa, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtVirtualDisksGuid;

//
// EFI_WIN_NT_PHYSICAL_DISKS
//
#define EFI_WIN_NT_PHYSICAL_DISKS_GUID \
  { \
    0xc95a92f, 0xa006, 0x11d4, {0xbc, 0xfa, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtPhysicalDisksGuid;

//
// EFI_WIN_NT_FILE_SYSTEM
//
#define EFI_WIN_NT_FILE_SYSTEM_GUID \
  { \
    0xc95a935, 0xa006, 0x11d4, {0xbc, 0xfa, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtFileSystemGuid;

//
// EFI_WIN_NT_SERIAL_PORT
//
#define EFI_WIN_NT_SERIAL_PORT_GUID \
  { \
    0xc95a93d, 0xa006, 0x11d4, {0xbc, 0xfa, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtSerialPortGuid;

//
// EFI_WIN_NT_UGA
//
#define EFI_WIN_NT_UGA_GUID \
  { \
    0xab248e99, 0xabe1, 0x11d4, {0xbd, 0xd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtUgaGuid;

//
// EFI_WIN_NT_GOP
//
#define EFI_WIN_NT_GOP_GUID \
  { \
    0x4e11e955, 0xccca, 0x11d4, 0xbd, 0xd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 \
  }

extern EFI_GUID gEfiWinNtGopGuid;

//
// EFI_WIN_NT_CONSOLE
//
#define EFI_WIN_NT_CONSOLE_GUID \
  { \
    0xba73672c, 0xa5d3, 0x11d4, {0xbd, 0x0, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtConsoleGuid;

//
// EFI_WIN_NT_MEMORY
//
#define EFI_WIN_NT_MEMORY_GUID \
  { \
    0x99042912, 0x122a, 0x11d4, {0xbd, 0xd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtMemoryGuid;

//
// EFI_WIN_NT_CPU_MODEL
//
#define EFI_WIN_NT_CPU_MODEL_GUID \
  { \
    0xbee9b6ce, 0x2f8a, 0x11d4, {0xbd, 0xd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtCPUModelGuid;

//
// EFI_WIN_NT_CPU_SPEED
//
#define EFI_WIN_NT_CPU_SPEED_GUID \
  { \
    0xd4f29055, 0xe1fb, 0x11d4, {0xbd, 0xd, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81 } \
  }

extern EFI_GUID gEfiWinNtCPUSpeedGuid;

//
// EFI_WIN_NT_PASS_THROUGH
//
#define EFI_WIN_NT_PASS_THROUGH_GUID \
  { \
    0xcc664eb8, 0x3c24, 0x4086, {0xb6, 0xf6, 0x34, 0xe8, 0x56, 0xbc, 0xe3, 0x6e } \
  }

extern EFI_GUID gEfiWinNtPassThroughGuid;

#endif

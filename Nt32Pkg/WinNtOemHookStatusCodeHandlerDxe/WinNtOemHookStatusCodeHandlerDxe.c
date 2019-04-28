/** @file
  OEM hook status code handler driver which produces general handler and hook it
  onto the DXE status code router.

  Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

//
// The package level header files this module uses
//
#include <WinNtDxe.h>

//
// The protocols, PPI and GUID defintions for this module
//
#include <Protocol/ReportStatusCodeHandler.h>

//
// The Library classes this module consumes
//
#include <Library/DebugLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/OemHookStatusCodeLib.h>

/**
  Entry point of OEM hook status code handler driver.

  This function is the entry point of this OEM hook status code handler driver.
  It initializes registers OEM status code handler.

  @param  ImageHandle       The firmware allocated handle for the EFI image.
  @param  SystemTable       A pointer to the EFI System Table.
  
  @retval EFI_SUCCESS       The entry point is executed successfully.

**/
EFI_STATUS
EFIAPI
WinNtOemHookStatusCodeHandlerDxeEntry (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  )
{
  EFI_STATUS                Status;
  EFI_RSC_HANDLER_PROTOCOL  *RscHandlerProtocol;

  Status = gBS->LocateProtocol (
                  &gEfiRscHandlerProtocolGuid,
                  NULL,
                  (VOID **) &RscHandlerProtocol
                  );
  ASSERT_EFI_ERROR (Status);

  OemHookStatusCodeInitialize ();

  RscHandlerProtocol->Register (OemHookStatusCodeReport, TPL_HIGH_LEVEL);

  return EFI_SUCCESS;
}

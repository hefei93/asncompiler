/*
* Copyright (c) 2003-2014 Objective Systems, Inc.
*
* This software is furnished under a license and may be used and copied
* only in accordance with the terms of such license and with the
* inclusion of the above copyright notice. This software or any other
* copies thereof may not be provided or otherwise made available to any
* other person. No title to and ownership of the software is hereby
* transferred.
*
* The information in this software is subject to change without notice
* and should not be construed as a commitment by Objective Systems, Inc.
*
* PROPRIETARY NOTICE
*
* This software is an unpublished work subject to a confidentiality agreement
* and is protected by copyright and trade secret law.  Unauthorized copying,
* redistribution or other use of this work is prohibited.
*
* The above notice of copyright on this source code product does not indicate
* any actual or intended publication of such source code.
*
*****************************************************************************/
/*
* @file rtxStreamBase64Text.h
*/
#ifndef _RTXSTREAMBASE64TEXT_H_
#define _RTXSTREAMBASE64TEXT_H_

#ifndef _NO_STREAM

#include "rtxsrc/osSysTypes.h"
#include "rtxsrc/rtxExternDefs.h"
#include "rtxsrc/rtxStream.h"

#ifdef __cplusplus
extern "C" {
#endif


   typedef struct Base64TextStrmDesc {
      OSCTXT* pctxt;
      OSRTSTREAM* pUnderStream; /* underlying stream object */
      OSBOOL mbCertificate;
   } Base64TextStrmDesc;

   /*
   * This function initializes a Base64Text stream and attaches it to the
   * existing stream defined within the context.  This type of stream object
   * can only be used with an existing stream.  It acts as a filter to perform
   * conversion to/from Base64 characters to binary data.
   *
   * @param pctxt        Pointer to context structure variable.
   * @param flags        Specifies the access mode for the stream:
   *                       - OSRTSTRMF_INPUT = input (reading) stream;
   *                       - OSRTSTRMF_OUTPUT = output (writing) stream.
   * @return             Completion status of operation: 0 (0) = success,
   *                       negative return value is error.
   */
   EXTERNRT int rtxStreamBase64TextAttach (OSCTXT* pctxt, OSUINT16 flags);

#ifdef __cplusplus
}
#endif

#endif /* _NO_STREAM */
#endif /* _RTXSTREAMBASE64TEXT_H_ */

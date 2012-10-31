//
//  hide_symbols_cocGCOA_GCOAuth.h
//  SocializeAPIClient
//
//  Created by Nathaniel Griswold on 10/30/12.
//  Copyright (c) 2012 Socialize. All rights reserved.
//

#ifndef GCOAPREFIX
#define GCOAPREFIX GCOA_HIDDEN_
#endif

#define GCOAPASTER(x,y) x ## y
#define GCOAEVALUATOR(x,y)  GCOAPASTER(x,y)
#define GCOAP(sym) GCOAEVALUATOR(GCOAPREFIX, sym)

#define GCOAuth GCOAP(GCOAuth)
#define pcen GCOAP(pcen)
#define hostAndPort GCOAP(hostAndPort)

#define NewBase64Decode GCOAP(NewBase64Decode)
#define NewBase64Encode GCOAP(NewBase64Encode)
#define dataFromBase64String GCOAP(dataFromBase64String)
#define base64EncodedString GCOAP(base64EncodedString)

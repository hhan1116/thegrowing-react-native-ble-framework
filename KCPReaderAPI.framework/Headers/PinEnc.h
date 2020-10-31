
#pragma once

//#define TRUE     0
//#define FALSE    -1


//typedef int                  BOOL;
typedef unsigned char    BYTE;
typedef unsigned short   WORD;
typedef int                 INT;
typedef unsigned int        UINT;
typedef unsigned int       DWORD;

BYTE sub1(BYTE c);
WORD sub2(BYTE c);

int PinEncCrypt_KCP(int nInCdLen, BYTE * strInCdData, int nInPwdLn, BYTE * strInPwd, BYTE * strOutPinLn, BYTE * strOutPin);



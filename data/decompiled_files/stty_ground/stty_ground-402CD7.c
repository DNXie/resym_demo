#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402CD7(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int *v20; // [rsp+28h] [rbp-8h]

  if ( a2 && (*(_BYTE *)(a1 + 12) & 4) == 0 )
    return 0LL;
  v20 = (unsigned int *)sub_40374F(*(unsigned int *)(a1 + 8), a3);
  if ( v20 )
  {
    if ( a2 )
      v18 = ~(unsigned int)*(_QWORD *)(a1 + 16) & ~(unsigned int)*(_QWORD *)(a1 + 24) & *v20;
    else
      v18 = *(_QWORD *)(a1 + 16) | ~(unsigned int)*(_QWORD *)(a1 + 24) & *v20;
    *v20 = v18;
  }
  else if ( !strcmp(*(const char **)a1, "evenp") || !strcmp(*(const char **)a1, "parity") )
  {
    if ( a2 )
      v4 = a3[2] & 0xFFFFFECF | 0x30;
    else
      v4 = a3[2] & 0xFFFFFCCF | 0x120;
    a3[2] = v4;
  }
  else if ( !strcmp(*(const char **)a1, "oddp") )
  {
    if ( a2 )
      v5 = a3[2] & 0xFFFFFECF | 0x30;
    else
      v5 = a3[2] & 0xFFFFFCCF | 0x320;
    a3[2] = v5;
  }
  else if ( !strcmp(*(const char **)a1, "nl") )
  {
    if ( a2 )
    {
      v6 = *a3 & 0xFFFFFE3F;
      BYTE1(v6) |= 1u;
      *a3 = v6;
      v7 = a3[1] & 0xFFFFFFD3 | 4;
    }
    else
    {
      v8 = *a3;
      BYTE1(v8) = BYTE1(*a3) & 0xFE;
      *a3 = v8;
      v7 = a3[1] & 0xFFFFFFFB;
    }
    a3[1] = v7;
  }
  else if ( !strcmp(*(const char **)a1, "ek") )
  {
    *((_BYTE *)a3 + 19) = 127;
    *((_BYTE *)a3 + 20) = 21;
  }
  else if ( !strcmp(*(const char **)a1, "sane") )
  {
    sub_404322(a3);
  }
  else if ( !strcmp(*(const char **)a1, "cbreak") )
  {
    if ( a2 )
      v9 = a3[3] | 2;
    else
      v9 = a3[3] & 0xFFFFFFFD;
    a3[3] = v9;
  }
  else if ( !strcmp(*(const char **)a1, "pass8") )
  {
    if ( a2 )
    {
      a3[2] = a3[2] & 0xFFFFFECF | 0x120;
      v10 = *a3 | 0x20;
    }
    else
    {
      a3[2] = a3[2] & 0xFFFFFECF | 0x30;
      v10 = *a3 & 0xFFFFFFDF;
    }
    *a3 = v10;
  }
  else if ( !strcmp(*(const char **)a1, "litout") )
  {
    if ( a2 )
    {
      a3[2] = a3[2] & 0xFFFFFECF | 0x120;
      *a3 |= 0x20u;
      v11 = a3[1] | 1;
    }
    else
    {
      a3[2] = a3[2] & 0xFFFFFECF | 0x30;
      *a3 &= 0xFFFFFFDF;
      v11 = a3[1] & 0xFFFFFFFE;
    }
    a3[1] = v11;
  }
  else if ( !strcmp(*(const char **)a1, "raw") || !strcmp(*(const char **)a1, "cooked") )
  {
    if ( **(_BYTE **)a1 == 114 && a2 || **(_BYTE **)a1 == 99 && a2 != 1 )
    {
      *a3 |= 0x526u;
      a3[1] |= 1u;
      a3[3] |= 3u;
    }
    else
    {
      *a3 = 0;
      a3[1] &= 0xFFFFFFFE;
      a3[3] &= 0xFFFFFFF8;
      *((_BYTE *)a3 + 23) = 1;
      *((_BYTE *)a3 + 22) = 0;
    }
  }
  else if ( !strcmp(*(const char **)a1, "decctlq") )
  {
    v12 = *a3;
    if ( a2 )
      BYTE1(v12) = BYTE1(*a3) | 8;
    else
      BYTE1(v12) = BYTE1(*a3) & 0xF7;
    *a3 = v12;
  }
  else if ( !strcmp(*(const char **)a1, "tabs") )
  {
    v13 = a3[1];
    if ( a2 )
      BYTE1(v13) |= 0x18u;
    else
      BYTE1(v13) &= 0xE7u;
    a3[1] = v13;
  }
  else if ( !strcmp(*(const char **)a1, "lcase") || !strcmp(*(const char **)a1, "LCASE") )
  {
    if ( a2 )
    {
      a3[3] &= 0xFFFFFFFB;
      v14 = *a3;
      BYTE1(v14) = BYTE1(*a3) & 0xFD;
      *a3 = v14;
      v15 = a3[1] & 0xFFFFFFFD;
    }
    else
    {
      a3[3] |= 4u;
      v16 = *a3;
      BYTE1(v16) = BYTE1(*a3) | 2;
      *a3 = v16;
      v15 = a3[1] | 2;
    }
    a3[1] = v15;
  }
  else if ( !strcmp(*(const char **)a1, "crt") )
  {
    a3[3] |= 0xA10u;
  }
  else if ( !strcmp(*(const char **)a1, "dec") )
  {
    *((_BYTE *)a3 + 17) = 3;
    *((_BYTE *)a3 + 19) = 127;
    *((_BYTE *)a3 + 20) = 21;
    a3[3] |= 0xA10u;
    v17 = *a3;
    BYTE1(v17) = BYTE1(*a3) & 0xF7;
    *a3 = v17;
  }
  return 1LL;
}

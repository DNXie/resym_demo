#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_409F4B(__int64 a1)
{
  unsigned int v2; // [rsp+10h] [rbp-1050h]
  unsigned int i; // [rsp+14h] [rbp-104Ch]
  __int64 v4; // [rsp+18h] [rbp-1048h]
  __int64 v5; // [rsp+20h] [rbp-1040h]
  unsigned __int64 v6; // [rsp+38h] [rbp-1028h]
  _QWORD s[2]; // [rsp+40h] [rbp-1020h] BYREF
  int v8; // [rsp+50h] [rbp-1010h]
  unsigned int v9; // [rsp+54h] [rbp-100Ch]
  int v10; // [rsp+58h] [rbp-1008h]
  _QWORD v11[512]; // [rsp+60h] [rbp-1000h] BYREF

  v11[509] = __readfsqword(0x28u);
  v2 = 0;
  while ( 1 )
  {
    memset(s, 0, 0x1000uLL);
    s[0] = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 16);
    v10 = 72;
    s[1] = ~*(_QWORD *)(a1 + 8);
    if ( ioctl(*(_DWORD *)a1, 0xC020660BuLL, s) < 0 )
      break;
    if ( !v9 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return *(_QWORD *)(a1 + 8) != 0LL;
    }
    if ( *(unsigned int *)(a1 + 20) > ~(unsigned __int64)v9 )
      __assert_fail(
        "scan->ei_count <= (18446744073709551615UL) - fiemap->fm_mapped_extents",
        "../../src/src/extent-scan.c",
        0x80u,
        "extent_scan_read");
    *(_DWORD *)(a1 + 20) += v9;
    *(_QWORD *)(a1 + 32) = sub_4125D2(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 20), 24LL);
    for ( i = 0; v9 > i; ++i )
    {
      if ( v11[7 * i] > (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v11[7 * i + 2]) )
        __assert_fail(
          "fm_extents[i].fe_logical <= ((off_t) (! (! ((off_t) 0 < (off_t) -1)) ? (off_t) -1 : ((((off_t) 1 << (sizeof (o"
          "ff_t) * 8 - 2)) - 1) * 2 + 1))) - fm_extents[i].fe_length",
          "../../src/src/extent-scan.c",
          0x89u,
          "extent_scan_read");
      if ( v2
        && *(_DWORD *)(v4 + 16) == (v11[7 * i + 5] & 0xFFFFFFFE)
        && *(_QWORD *)v4 + *(_QWORD *)(v4 + 8) == v11[7 * i] )
      {
        *(_QWORD *)(v4 + 8) += v11[7 * i + 2];
        *(_DWORD *)(v4 + 16) = v11[7 * i + 5];
      }
      else if ( (v2 || *(_QWORD *)(a1 + 8) <= v11[7 * i]) && (!v2 || *(_QWORD *)v4 + *(_QWORD *)(v4 + 8) <= v11[7 * i]) )
      {
        v4 = *(_QWORD *)(a1 + 32) + 24LL * v2;
        *(_QWORD *)v4 = v11[7 * i];
        *(_QWORD *)(v4 + 8) = v11[7 * i + 2];
        *(_DWORD *)(v4 + 16) = v11[7 * i + 5];
        ++v2;
      }
      else
      {
        if ( v2 )
          v5 = *(_QWORD *)v4 + *(_QWORD *)(v4 + 8);
        else
          v5 = *(_QWORD *)(a1 + 8);
        v6 = v5 - v11[7 * i];
        if ( v11[7 * i + 2] > v6 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
            *(_BYTE *)(a1 + 24) = 1;
          return 0;
        }
        v11[7 * i] = v5;
        v11[7 * i-- + 2] -= v6;
      }
    }
    if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      *(_BYTE *)(a1 + 25) = 1;
    if ( v2 > 0x48 && *(_BYTE *)(a1 + 25) != 1 )
      v4 = *(_QWORD *)(a1 + 32) + 24LL * --v2 - 24;
    *(_DWORD *)(a1 + 20) = v2;
    if ( !*(_BYTE *)(a1 + 25) )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)v4 + *(_QWORD *)(v4 + 8);
      if ( v2 <= 0x47 )
        continue;
    }
    return 1;
  }
  if ( !*(_QWORD *)(a1 + 8) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}

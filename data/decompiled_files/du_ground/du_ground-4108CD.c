#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall fts_read(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int16 v3; // r13
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  int v8; // eax
  _QWORD *i; // rbx
  _QWORD *v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // er8
  int v17; // er9
  __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  bool v22; // al
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  int v26; // [rsp+4h] [rbp-2Ch]
  __int64 v27; // [rsp+8h] [rbp-28h]

  if ( !*(_QWORD *)a1 || (*(_DWORD *)(a1 + 72) & 0x2000) != 0 )
    return 0LL;
  v2 = *(_QWORD *)a1;
  v3 = *(_WORD *)(*(_QWORD *)a1 + 116LL);
  *(_WORD *)(*(_QWORD *)a1 + 116LL) = 3;
  if ( v3 == 1 )
  {
    *(_WORD *)(v2 + 112) = sub_411DD6(a1, v2, 0LL);
    return v2;
  }
  if ( v3 == 2 && (*(_WORD *)(v2 + 112) == 12 || *(_WORD *)(v2 + 112) == 13) )
  {
    *(_WORD *)(v2 + 112) = sub_411DD6(a1, v2, 1LL);
    if ( *(_WORD *)(v2 + 112) == 1 && (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      *(_DWORD *)(v2 + 68) = sub_41003F(a1, (int)".", v4, v5, v6, v7);
      if ( *(int *)(v2 + 68) >= 0 )
      {
        *(_WORD *)(v2 + 114) |= 2u;
      }
      else
      {
        *(_DWORD *)(v2 + 64) = *__errno_location();
        *(_WORD *)(v2 + 112) = 7;
      }
    }
    goto LABEL_71;
  }
  if ( *(_WORD *)(v2 + 112) == 1 )
  {
    if ( v3 == 4 || (*(_DWORD *)(a1 + 72) & 0x40) != 0 && *(_QWORD *)(v2 + 120) != *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_WORD *)(v2 + 114) & 2) != 0 )
        close(*(_DWORD *)(v2 + 68));
      if ( *(_QWORD *)(a1 + 8) )
      {
        sub_4121CD(*(void **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
      }
      *(_WORD *)(v2 + 112) = 6;
      sub_40FD3A(a1, v2);
      return v2;
    }
    if ( *(_QWORD *)(a1 + 8) && (*(_DWORD *)(a1 + 72) & 0x1000) != 0 )
    {
      v8 = *(_DWORD *)(a1 + 72);
      BYTE1(v8) &= 0xEFu;
      *(_DWORD *)(a1 + 72) = v8;
      sub_4121CD(*(void **)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( (unsigned int)sub_41243E(a1, v2, 0xFFFFFFFFLL, *(_QWORD *)(v2 + 48)) )
      {
        *(_DWORD *)(v2 + 64) = *__errno_location();
        *(_WORD *)(v2 + 114) |= 1u;
        for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)i[2] )
          i[6] = *(_QWORD *)(i[1] + 48LL);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = sub_411394(a1, 3LL);
      if ( !*(_QWORD *)(a1 + 8) )
      {
        if ( (*(_DWORD *)(a1 + 72) & 0x2000) != 0 )
          return 0LL;
        if ( *(_DWORD *)(v2 + 64) && *(_WORD *)(v2 + 112) != 4 )
          *(_WORD *)(v2 + 112) = 7;
        sub_40FD3A(a1, v2);
        return v2;
      }
    }
    v2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
LABEL_67:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 56LL) + *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL) - 1LL) == 47 )
      v18 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL) - 1LL;
    else
      v18 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL);
    v19 = (_BYTE *)(*(_QWORD *)(a1 + 32) + v18);
    *v19 = 47;
    memmove(v19 + 1, (const void *)(v2 + 264), *(_QWORD *)(v2 + 96) + 1LL);
    goto LABEL_71;
  }
  while ( 1 )
  {
    v10 = (_QWORD *)v2;
    if ( !*(_QWORD *)(v2 + 16) && *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL) )
    {
      v11 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)a1 = v11;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v11 + 72)) = 0;
      v2 = sub_411394(a1, 3LL);
      if ( v2 )
      {
        free(v10);
        goto LABEL_67;
      }
      if ( (*(_DWORD *)(a1 + 72) & 0x2000) != 0 )
        return 0LL;
LABEL_91:
      v20 = v10[1];
      *(_QWORD *)a1 = v20;
      free(v10);
      if ( *(_QWORD *)(v20 + 88) == -1LL )
      {
        free((void *)v20);
        *__errno_location() = 0;
        *(_QWORD *)a1 = 0LL;
        return 0LL;
      }
      if ( *(_WORD *)(v20 + 112) == 11 )
        abort();
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(v20 + 72)) = 0;
      if ( *(_QWORD *)(v20 + 88) )
      {
        if ( (*(_WORD *)(v20 + 114) & 2) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
          {
            if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
            {
              sub_40FFB2(a1, *(_DWORD *)(v20 + 68), 1);
              v22 = 0;
            }
            else
            {
              v22 = fchdir(*(_DWORD *)(v20 + 68)) != 0;
            }
            if ( v22 )
            {
              v26 = *__errno_location();
              close(*(_DWORD *)(v20 + 68));
              *__errno_location() = v26;
              *(_DWORD *)(v20 + 64) = *__errno_location();
              v23 = *(_DWORD *)(a1 + 72);
              BYTE1(v23) |= 0x20u;
              *(_DWORD *)(a1 + 72) = v23;
            }
          }
          close(*(_DWORD *)(v20 + 68));
          goto LABEL_115;
        }
        if ( (*(_WORD *)(v20 + 114) & 1) == 0 && (unsigned int)sub_41243E(a1, *(_QWORD *)(v20 + 8), 0xFFFFFFFFLL, "..") )
          goto LABEL_114;
        goto LABEL_115;
      }
      sub_40FE94(a1 + 96);
      if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
        {
          sub_40FFB2(a1, -100, 1);
        }
        else if ( fchdir(*(_DWORD *)(a1 + 40)) )
        {
          v21 = 1;
          goto LABEL_102;
        }
      }
      v21 = 0;
LABEL_102:
      if ( v21 )
      {
LABEL_114:
        *(_DWORD *)(v20 + 64) = *__errno_location();
        v24 = *(_DWORD *)(a1 + 72);
        BYTE1(v24) |= 0x20u;
        *(_DWORD *)(a1 + 72) = v24;
      }
LABEL_115:
      if ( *(_DWORD *)(v20 + 64) )
        v25 = 7;
      else
        v25 = 6;
      *(_WORD *)(v20 + 112) = v25;
      if ( !*(_DWORD *)(v20 + 64) )
        sub_40FD3A(a1, v20);
      if ( (*(_DWORD *)(a1 + 72) & 0x2000) != 0 )
        result = 0LL;
      else
        result = v20;
      return result;
    }
    v2 = *(_QWORD *)(v2 + 16);
    if ( !v2 )
      goto LABEL_91;
    *(_QWORD *)a1 = v2;
    free(v10);
    if ( !*(_QWORD *)(v2 + 88) )
      break;
    if ( *(_WORD *)(v2 + 116) != 4 )
    {
      if ( *(_WORD *)(v2 + 116) == 2 )
      {
        *(_WORD *)(v2 + 112) = sub_411DD6(a1, v2, 1LL);
        if ( *(_WORD *)(v2 + 112) == 1 && (*(_DWORD *)(a1 + 72) & 4) == 0 )
        {
          *(_DWORD *)(v2 + 68) = sub_41003F(a1, (int)".", v14, v15, v16, v17);
          if ( *(int *)(v2 + 68) >= 0 )
          {
            *(_WORD *)(v2 + 114) |= 2u;
          }
          else
          {
            *(_DWORD *)(v2 + 64) = *__errno_location();
            *(_WORD *)(v2 + 112) = 7;
          }
        }
        *(_WORD *)(v2 + 116) = 3;
      }
      goto LABEL_67;
    }
  }
  sub_40FE94(a1 + 96);
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    goto LABEL_55;
  if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
  {
    sub_40FFB2(a1, -100, 1);
    goto LABEL_55;
  }
  if ( fchdir(*(_DWORD *)(a1 + 40)) )
    v12 = 1;
  else
LABEL_55:
    v12 = 0;
  if ( v12 )
  {
    v13 = *(_DWORD *)(a1 + 72);
    BYTE1(v13) |= 0x20u;
    *(_DWORD *)(a1 + 72) = v13;
    return 0LL;
  }
  sub_40FE47(a1);
  sub_410446(a1, (const char *)v2);
  sub_40FB91(a1);
LABEL_71:
  *(_QWORD *)a1 = v2;
  if ( *(_WORD *)(v2 + 112) == 11 )
  {
    if ( *(_QWORD *)(v2 + 168) == 2LL )
    {
      v27 = *(_QWORD *)(v2 + 8);
      if ( *(__int64 *)(v2 + 88) <= 0
        || *(_QWORD *)(v27 + 104)
        || (*(_DWORD *)(a1 + 72) & 8) == 0
        || (*(_DWORD *)(a1 + 72) & 0x10) == 0
        || !(unsigned __int8)sub_410780(v27) )
      {
        *(_WORD *)(v2 + 112) = sub_411DD6(a1, v2, 0LL);
        if ( (*(_DWORD *)(v2 + 144) & 0xF000) == 0x4000 && *(_QWORD *)(v2 + 88) && *(_QWORD *)(v27 + 104) )
          --*(_QWORD *)(v27 + 104);
      }
    }
    else if ( *(_QWORD *)(v2 + 168) != 1LL )
    {
      abort();
    }
  }
  if ( *(_WORD *)(v2 + 112) != 1 )
    return v2;
  if ( !*(_QWORD *)(v2 + 88) )
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v2 + 120);
  if ( (unsigned __int8)sub_40FC2A(a1, v2) == 1 )
    return v2;
  *__errno_location() = 12;
  return 0LL;
}

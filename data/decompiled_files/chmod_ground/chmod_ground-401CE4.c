#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CE4(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rbx
  char *v5; // rax
  const char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // rax
  __int64 v19; // r12
  char *v20; // rbx
  int *v21; // rax
  bool v22; // al
  int v23; // eax
  __int64 v24; // rbx
  char *v25; // rax
  unsigned __int8 v26; // [rsp+1Dh] [rbp-73h]
  char v27; // [rsp+1Eh] [rbp-72h]
  unsigned int v28; // [rsp+20h] [rbp-70h]
  __mode_t v29; // [rsp+24h] [rbp-6Ch]
  unsigned int v30; // [rsp+2Ch] [rbp-64h]
  char *s1; // [rsp+30h] [rbp-60h]
  char *v32; // [rsp+38h] [rbp-58h]
  char v33; // [rsp+50h] [rbp-40h] BYREF
  _BYTE v34[15]; // [rsp+51h] [rbp-3Fh] BYREF
  char v35; // [rsp+60h] [rbp-30h] BYREF
  _BYTE v36[23]; // [rsp+61h] [rbp-2Fh] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-18h]

  v37 = __readfsqword(0x28u);
  s1 = *(char **)(a2 + 56);
  v32 = *(char **)(a2 + 48);
  v26 = 1;
  v27 = 0;
  v2 = *(unsigned __int16 *)(a2 + 112);
  if ( v2 == 6 )
    return 1LL;
  if ( *(unsigned __int16 *)(a2 + 112) > 6u )
  {
    switch ( v2 )
    {
      case 10:
        if ( !*(_QWORD *)(a2 + 88) && !*(_QWORD *)(a2 + 32) )
        {
          *(_QWORD *)(a2 + 32) = 1LL;
          fts_set(a1, a2, 1LL);
          return 1LL;
        }
        if ( byte_60E2ED != 1 )
        {
          v4 = sub_403631(s1);
          v5 = gettext("cannot access %s");
          error(0, *(_DWORD *)(a2 + 64), v5, v4);
        }
        v26 = 0;
        break;
      case 13:
        if ( byte_60E2ED != 1 )
        {
          v9 = sub_403631(s1);
          v10 = gettext("cannot operate on dangling symlink %s");
          error(0, 0, v10, v9);
        }
        v26 = 0;
        break;
      case 7:
        if ( byte_60E2ED != 1 )
        {
          v6 = (const char *)sub_403631(s1);
          error(0, *(_DWORD *)(a2 + 64), "%s", v6);
        }
        v26 = 0;
        break;
    }
  }
  else if ( v2 == 2 )
  {
    if ( (unsigned __int8)sub_4085B4(a1, a2) )
    {
      v11 = sub_403631(s1);
      v12 = gettext(
              "WARNING: Circular directory structure.\n"
              "This almost certainly means that you have a corrupted file system.\n"
              "NOTIFY YOUR SYSTEM MANAGER.\n"
              "The following directory is part of the cycle:\n"
              "  %s\n");
      error(0, 0, v12, v11);
      return 0LL;
    }
  }
  else if ( v2 == 4 )
  {
    if ( byte_60E2ED != 1 )
    {
      v7 = sub_403631(s1);
      v8 = gettext("cannot read directory %s");
      error(0, *(_DWORD *)(a2 + 64), v8, v7);
    }
    v26 = 0;
  }
  if ( v26
    && qword_60E2F0
    && *(_QWORD *)(a2 + 128) == *(_QWORD *)qword_60E2F0
    && *(_QWORD *)(a2 + 120) == *(_QWORD *)(qword_60E2F0 + 8) )
  {
    if ( !strcmp(s1, "/") )
    {
      v13 = sub_403631(s1);
      v14 = gettext("it is dangerous to operate recursively on %s");
      error(0, 0, v14, v13);
    }
    else
    {
      v15 = sub_40360D(1LL, "/");
      v16 = sub_40360D(0LL, s1);
      v17 = gettext("it is dangerous to operate recursively on %s (same as %s)");
      error(0, 0, v17, v16, v15);
    }
    v18 = gettext("use --no-preserve-root to override this failsafe");
    error(0, 0, v18);
    fts_set(a1, a2, 4LL);
    fts_read(a1);
    result = 0LL;
  }
  else
  {
    if ( v26 )
    {
      v28 = *(_DWORD *)(a2 + 144);
      v29 = sub_40338B(v28, (v28 & 0xF000) == 0x4000, (unsigned int)dword_60E2E8, qword_60E2E0, 0LL);
      if ( (v28 & 0xF000) != 40960 )
      {
        if ( sub_40196D(*(_DWORD *)(a1 + 44), v32, v29) )
        {
          if ( byte_60E2ED != 1 )
          {
            v19 = sub_403631(s1);
            v20 = gettext("changing permissions of %s");
            v21 = __errno_location();
            error(0, *v21, v20, v19);
          }
          v26 = 0;
        }
        else
        {
          v27 = 1;
        }
      }
    }
    if ( dword_60E220 != 2 )
    {
      v22 = v27 && sub_401AA1(v32, v28, v29);
      if ( v22 || !dword_60E220 )
      {
        if ( v26 != 1 )
        {
          v23 = 2;
        }
        else if ( v27 != 1 )
        {
          v23 = 0;
        }
        else if ( v22 )
        {
          v23 = 1;
        }
        else
        {
          v23 = 3;
        }
        sub_401B70((__int64)s1, v28, v29, v23);
      }
    }
    if ( v27 )
    {
      if ( byte_60E2EE )
      {
        v30 = sub_40338B(v28, (v28 & 0xF000) == 0x4000, 0LL, qword_60E2E0, 0LL);
        if ( (v29 & ~v30) != 0 )
        {
          sub_402D99(v29, &v33);
          sub_402D99(v30, &v35);
          v36[9] = 0;
          v34[9] = 0;
          v24 = sub_404C4A(s1);
          v25 = gettext("%s: new permissions are %s, not %s");
          error(0, 0, v25, v24, v34, v36);
          v26 = 0;
        }
      }
    }
    if ( byte_60E2EC != 1 )
      fts_set(a1, a2, 4LL);
    result = v26;
  }
  return result;
}

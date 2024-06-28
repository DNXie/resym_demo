#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4021B7(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  unsigned __int8 v25; // [rsp+1Fh] [rbp-31h]
  char *s1; // [rsp+20h] [rbp-30h]
  __int64 v27; // [rsp+28h] [rbp-28h]

  s1 = *(char **)(a2 + 56);
  v27 = *(_QWORD *)(a2 + 48);
  v25 = 1;
  v2 = *(unsigned __int16 *)(a2 + 112);
  if ( v2 == 4 )
  {
    v13 = sub_40315E(s1);
    v14 = gettext("cannot read directory %s");
    error(0, *(_DWORD *)(a2 + 64), v14, v13);
    v25 = 0;
  }
  else if ( *(unsigned __int16 *)(a2 + 112) > 4u )
  {
    if ( v2 == 7 )
    {
      v12 = (const char *)sub_40315E(s1);
      error(0, *(_DWORD *)(a2 + 64), "%s", v12);
      v25 = 0;
    }
    else if ( v2 == 10 )
    {
      if ( !*(_QWORD *)(a2 + 88) && !*(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(a2 + 32) = 1LL;
        fts_set(a1, a2, 1LL);
        return 1LL;
      }
      v10 = sub_40315E(s1);
      v11 = gettext("cannot access %s");
      error(0, *(_DWORD *)(a2 + 64), v11, v10);
      v25 = 0;
    }
    else if ( v2 == 6 && byte_610301 != 1 )
    {
      return 1LL;
    }
  }
  else if ( v2 == 1 )
  {
    if ( byte_610301 )
    {
      if ( !qword_610308
        || *(_QWORD *)(a2 + 128) != *(_QWORD *)qword_610308
        || *(_QWORD *)(a2 + 120) != *(_QWORD *)(qword_610308 + 8) )
      {
        return 1LL;
      }
      if ( !strcmp(s1, "/") )
      {
        v3 = sub_40315E(s1);
        v4 = gettext("it is dangerous to operate recursively on %s");
        error(0, 0, v4, v3);
      }
      else
      {
        v5 = sub_40313A(1LL, "/");
        v6 = sub_40313A(0LL, s1);
        v7 = gettext("it is dangerous to operate recursively on %s (same as %s)");
        error(0, 0, v7, v6, v5);
      }
      v8 = gettext("use --no-preserve-root to override this failsafe");
      error(0, 0, v8);
      fts_set(a1, a2, 4LL);
      fts_read(a1);
      return 0LL;
    }
  }
  else if ( v2 == 2 && (unsigned __int8)sub_408B91(a1, a2) )
  {
    v15 = sub_40315E(s1);
    v16 = gettext(
            "WARNING: Circular directory structure.\n"
            "This almost certainly means that you have a corrupted file system.\n"
            "NOTIFY YOUR SYSTEM MANAGER.\n"
            "The following directory is part of the cycle:\n"
            "  %s\n");
    error(0, 0, v16, v15);
    return 0LL;
  }
  if ( *(_WORD *)(a2 + 112) == 6
    && v25
    && qword_610308
    && *(_QWORD *)(a2 + 128) == *(_QWORD *)qword_610308
    && *(_QWORD *)(a2 + 120) == *(_QWORD *)(qword_610308 + 8) )
  {
    if ( !strcmp(s1, "/") )
    {
      v17 = sub_40315E(s1);
      v18 = gettext("it is dangerous to operate recursively on %s");
      error(0, 0, v18, v17);
    }
    else
    {
      v19 = sub_40313A(1LL, "/");
      v20 = sub_40313A(0LL, s1);
      v21 = gettext("it is dangerous to operate recursively on %s (same as %s)");
      error(0, 0, v21, v20, v19);
    }
    v22 = gettext("use --no-preserve-root to override this failsafe");
    error(0, 0, v22);
    v25 = 0;
  }
  if ( v25 )
  {
    if ( byte_610302 )
    {
      v23 = sub_40315E(s1);
      v24 = gettext("changing security context of %s\n");
      printf(v24, v23);
    }
    if ( (unsigned int)sub_401F7A(*(_DWORD *)(a1 + 44), v27) )
      v25 = 0;
  }
  if ( byte_610301 != 1 )
    fts_set(a1, a2, 4LL);
  return v25;
}

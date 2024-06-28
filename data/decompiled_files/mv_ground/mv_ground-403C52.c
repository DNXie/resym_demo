#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403C52(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 result; // rax
  _BYTE *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  bool v18; // al
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // r12
  unsigned int v24; // ebx
  char *v25; // rax
  char v27; // [rsp+23h] [rbp-1Dh]
  int v28; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v29; // [rsp+28h] [rbp-18h]
  unsigned int v30; // [rsp+2Ch] [rbp-14h]

  v3 = *(unsigned __int16 *)(a2 + 112);
  if ( v3 == 6 )
  {
LABEL_33:
    if ( *(_WORD *)(a2 + 112) == 6
      && *(_BYTE *)(a3 + 8)
      && *(__int64 *)(a2 + 88) > 0
      && *(_QWORD *)(a2 + 120) != *(_QWORD *)(a1 + 24) )
    {
      sub_403A46(a2);
      v16 = sub_40D278(*(_QWORD *)(a2 + 56));
      v17 = gettext("skipping %s, since it's on a different device");
      error(0, 0, v17, v16);
      result = 4LL;
    }
    else
    {
      v18 = *(_WORD *)(a2 + 112) == 6 || *(_WORD *)(a2 + 112) == 4;
      v27 = v18;
      v30 = sub_403537(a1, (_QWORD *)a2, v18, a3, 3, 0LL);
      if ( v30 == 2 )
        result = sub_403A92(a1, a2, (_BYTE *)a3, v27);
      else
        result = v30;
    }
    return result;
  }
  if ( *(unsigned __int16 *)(a2 + 112) > 6u )
  {
    if ( v3 != 8 )
    {
      if ( *(unsigned __int16 *)(a2 + 112) < 8u )
      {
        v21 = sub_40D278(*(_QWORD *)(a2 + 56));
        v22 = gettext("traversal failed: %s");
        error(0, *(_DWORD *)(a2 + 64), v22, v21);
        sub_403A0C(a1, a2);
        return 4LL;
      }
      if ( (unsigned int)(v3 - 10) > 3 )
        goto LABEL_47;
    }
    goto LABEL_33;
  }
  if ( v3 == 2 )
  {
    v19 = sub_40D278(*(_QWORD *)(a2 + 56));
    v20 = gettext(
            "WARNING: Circular directory structure.\n"
            "This almost certainly means that you have a corrupted file system.\n"
            "NOTIFY YOUR SYSTEM MANAGER.\n"
            "The following directory is part of the cycle:\n"
            "  %s\n");
    error(0, 0, v20, v19);
    sub_403A0C(a1, a2);
    return 4LL;
  }
  if ( *(unsigned __int16 *)(a2 + 112) > 2u )
  {
    if ( *(unsigned __int16 *)(a2 + 112) > 4u )
      goto LABEL_47;
    goto LABEL_33;
  }
  if ( v3 != 1 )
  {
LABEL_47:
    v23 = sub_40D278(*(_QWORD *)(a2 + 56));
    v24 = *(unsigned __int16 *)(a2 + 112);
    v25 = gettext("unexpected failure: fts_info=%d: %s\nplease report to %s");
    error(0, 0, v25, v24, v23, "bug-coreutils@gnu.org");
    abort();
  }
  if ( *(_BYTE *)(a3 + 9) != 1 )
  {
    v4 = sub_40D278(*(_QWORD *)(a2 + 56));
    v5 = gettext("cannot remove %s");
    error(0, 21, v5, v4);
    sub_403A46(a2);
    sub_403A0C(a1, a2);
    return 4LL;
  }
  if ( *(_QWORD *)(a2 + 88) )
    goto LABEL_27;
  if ( (unsigned __int8)sub_40AE80(*(_QWORD *)(a2 + 56)) )
    *(_QWORD *)(a2 + 72) = strlen(*(const char **)(a2 + 56));
  v7 = (_BYTE *)sub_40ADC9(*(_QWORD *)(a2 + 48));
  if ( sub_4032AD(v7) )
  {
    v8 = sub_40D278(*(_QWORD *)(a2 + 56));
    v9 = gettext("cannot remove directory: %s");
    error(0, 0, v9, v8);
    sub_403A0C(a1, a2);
    return 4LL;
  }
  if ( *(_QWORD *)(a3 + 16)
    && *(_QWORD *)(a2 + 128) == **(_QWORD **)(a3 + 16)
    && *(_QWORD *)(a2 + 120) == *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) )
  {
    if ( !strcmp(*(const char **)(a2 + 56), "/") )
    {
      v10 = sub_40D278(*(_QWORD *)(a2 + 56));
      v11 = gettext("it is dangerous to operate recursively on %s");
      error(0, 0, v11, v10);
    }
    else
    {
      v12 = sub_40D254(1LL, "/");
      v13 = sub_40D254(0LL, *(_QWORD *)(a2 + 56));
      v14 = gettext("it is dangerous to operate recursively on %s (same as %s)");
      error(0, 0, v14, v13, v12);
    }
    v15 = gettext("use --no-preserve-root to override this failsafe");
    error(0, 0, v15);
    sub_403A0C(a1, a2);
    result = 4LL;
  }
  else
  {
LABEL_27:
    v29 = sub_403537(a1, (_QWORD *)a2, 1, a3, 2, &v28);
    if ( v29 == 2 && v28 == 4 )
    {
      v29 = sub_403A92(a1, a2, (_BYTE *)a3, 1);
      sub_403A0C(a1, a2);
    }
    if ( v29 != 2 )
    {
      sub_403A46(a2);
      sub_403A0C(a1, a2);
    }
    result = v29;
  }
  return result;
}

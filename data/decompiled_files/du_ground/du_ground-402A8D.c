#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402A8D(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  const char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int8 v14; // [rsp+1Ah] [rbp-86h]
  char v15; // [rsp+1Bh] [rbp-85h]
  int v16; // [rsp+1Ch] [rbp-84h]
  unsigned __int64 i; // [rsp+20h] [rbp-80h]
  const char *v18; // [rsp+28h] [rbp-78h]
  __int64 v19; // [rsp+30h] [rbp-70h]
  unsigned __int64 v20; // [rsp+48h] [rbp-58h]
  __int64 v21[4]; // [rsp+50h] [rbp-50h] BYREF
  __int64 v22[6]; // [rsp+70h] [rbp-30h] BYREF

  v14 = 1;
  v18 = *(const char **)(a2 + 56);
  v19 = a2 + 120;
  v16 = *(unsigned __int16 *)(a2 + 112);
  if ( v16 == 4 )
  {
    v2 = sub_40C459(v18);
    v3 = gettext("cannot read directory %s");
    error(0, *(_DWORD *)(a2 + 64), v3, v2);
    v14 = 0;
LABEL_30:
    if ( dword_61B400 )
    {
      if ( dword_61B400 == 2 )
        v10 = sub_40258D(v19);
      else
        v10 = sub_4025A3(v19);
    }
    else
    {
      v10 = sub_4025B9(v19);
    }
    if ( byte_61B3F1 )
      v12 = *(_QWORD *)(a2 + 168);
    else
      v12 = *(_QWORD *)(a2 + 184) << 9;
    sub_402602(v21, v12, v10, v11);
    v20 = *(_QWORD *)(a2 + 88);
    v22[0] = v21[0];
    v22[1] = v21[1];
    v22[2] = v21[2];
    if ( qword_61B448 )
    {
      if ( v20 != qword_61B3E8 )
      {
        if ( v20 <= qword_61B3E8 )
        {
          if ( qword_61B3E8 - 1 != v20 )
            __assert_fail("level == prev_level - 1", "../../src/src/du.c", 0x219u, "process_file");
          sub_402637(v22, (_QWORD *)(qword_61B450 + 48 * qword_61B3E8));
          if ( byte_61B3F6 != 1 )
            sub_402637(v22, (_QWORD *)(qword_61B450 + 48 * qword_61B3E8 + 24));
          sub_402637((_QWORD *)(qword_61B450 + 48 * v20 + 24), (_QWORD *)(qword_61B450 + 48 * qword_61B3E8));
          sub_402637((_QWORD *)(qword_61B450 + 48 * v20 + 24), (_QWORD *)(qword_61B450 + 48 * qword_61B3E8 + 24));
        }
        else
        {
          if ( qword_61B448 <= v20 )
          {
            qword_61B450 = sub_40EA41(qword_61B450, v20, 96LL);
            qword_61B448 = 2 * v20;
          }
          for ( i = qword_61B3E8 + 1; i <= v20; ++i )
          {
            sub_4025CF((_QWORD *)(qword_61B450 + 48 * i));
            sub_4025CF((_QWORD *)(qword_61B450 + 48 * i + 24));
          }
        }
      }
    }
    else
    {
      qword_61B448 = v20 + 10;
      qword_61B450 = sub_40EC37(v20 + 10, 48LL);
    }
    qword_61B3E8 = v20;
    if ( byte_61B3F6 != 1 || v16 != 6 && v16 != 4 )
      sub_402637((_QWORD *)(qword_61B450 + 48 * v20), v21);
    sub_402637(qword_61B430, v21);
    if ( (v16 == 6 || v16 == 4) && v20 <= qword_61B330 || byte_61B3F0 && v20 <= qword_61B330 || !v20 )
      sub_4029F8(v22, v18);
    return v14;
  }
  if ( v16 == 6 )
    goto LABEL_30;
  v15 = sub_405536(qword_61B420, v18);
  if ( v15 != 1 )
  {
    if ( v16 == 11 )
    {
      fts_set(a1, a2, 1LL);
      if ( fts_read(a1) != a2 )
        __assert_fail("e == ent", "../../src/src/du.c", 0x1B5u, "process_file");
      v16 = *(unsigned __int16 *)(a2 + 112);
    }
    if ( v16 == 10 || v16 == 13 )
    {
      v4 = sub_40C459(v18);
      v5 = gettext("cannot access %s");
      error(0, *(_DWORD *)(a2 + 64), v5, v4);
      return 0LL;
    }
  }
  if ( !v15
    && (byte_61B3F2 == 1
     || !byte_61B3F3 && ((*(_DWORD *)(a2 + 144) & 0xF000) == 0x4000 || *(_QWORD *)(a2 + 136) <= 1uLL)
     || sub_402864(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 120))) )
  {
    switch ( v16 )
    {
      case 2:
        if ( !(unsigned __int8)sub_41274F(a1, a2) )
          return 1LL;
        v8 = sub_40C459(v18);
        v9 = gettext(
               "WARNING: Circular directory structure.\n"
               "This almost certainly means that you have a corrupted file system.\n"
               "NOTIFY YOUR SYSTEM MANAGER.\n"
               "The following directory is part of the cycle:\n"
               "  %s\n");
        error(0, 0, v9, v8);
        return 0LL;
      case 7:
        v7 = (const char *)sub_40C459(v18);
        error(0, *(_DWORD *)(a2 + 64), "%s", v7);
        v14 = 0;
        break;
      case 1:
        return 1LL;
    }
    goto LABEL_30;
  }
  if ( v16 == 1 )
  {
    fts_set(a1, a2, 4LL);
    if ( fts_read(a1) != a2 )
      __assert_fail("e == ent", "../../src/src/du.c", 0x1CCu, "process_file");
  }
  return 1LL;
}

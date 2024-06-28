#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4027FF(__int64 *a1, __int64 a2)
{
  char *v2; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  char v7; // [rsp+1Ah] [rbp-56h] BYREF
  char v8; // [rsp+1Bh] [rbp-55h]
  int v9; // [rsp+1Ch] [rbp-54h]
  unsigned __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 i; // [rsp+30h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-38h]
  unsigned __int64 v14; // [rsp+40h] [rbp-30h]
  char *v15; // [rsp+48h] [rbp-28h]
  void *ptr; // [rsp+50h] [rbp-20h]
  void *v17; // [rsp+58h] [rbp-18h]

  v13 = *a1;
  for ( i = 0LL; ; i = v11 + 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( i + 2 >= a1[2] )
        {
          while ( a1[2] > i )
            sub_402119(a2, *(_BYTE *)(v13 + i++));
          return 1LL;
        }
        if ( sub_4016E6(a1, i, 91) )
          break;
LABEL_25:
        if ( sub_4016E6(a1, i + 1, 45) )
        {
          if ( (unsigned __int8)sub_40219D(a2, *(_BYTE *)(v13 + i), *(_BYTE *)(i + 2 + v13)) != 1 )
            return 0LL;
          i += 3LL;
        }
        else
        {
          sub_402119(a2, *(_BYTE *)(v13 + i++));
        }
      }
      v8 = 1;
      if ( sub_4016E6(a1, i + 1, 58) || sub_4016E6(a1, i + 1, 61) )
      {
        if ( (unsigned __int8)sub_402492(a1, i + 2, *(_BYTE *)(i + 1 + v13), (unsigned __int64 *)&v11) )
          break;
      }
LABEL_19:
      v9 = sub_40254A(a1, i + 1, &v7, &v11, &v10);
      if ( v9 )
      {
        if ( v9 != -1 )
          return 0LL;
        v8 = 0;
      }
      else
      {
        sub_40235F(a2, v7, v11);
        i = v10 + 1;
      }
      if ( !v8 )
        goto LABEL_25;
    }
    v14 = v11 - i - 2;
    v15 = (char *)(i + 2 + v13);
    if ( v11 - i == 2 )
      break;
    if ( *(_BYTE *)(i + 1 + v13) == 58 )
    {
      if ( (unsigned __int8)sub_4022AE(a2, v15, v14) != 1 )
      {
        if ( !sub_40274B(a1, i + 2) )
        {
          ptr = (void *)sub_401F92((__int64)v15, v14);
          v4 = sub_404BE5(ptr);
          v5 = gettext("invalid character class %s");
          error(0, 0, v5, v4);
          free(ptr);
          return 0LL;
        }
        goto LABEL_19;
      }
    }
    else if ( (unsigned __int8)sub_4023F3(a2, v15, v14) != 1 )
    {
      if ( !sub_40274B(a1, i + 2) )
      {
        v17 = (void *)sub_401F92((__int64)v15, v14);
        v6 = gettext("%s: equivalence class operand must be a single character");
        error(0, 0, v6, v17);
        free(v17);
        return 0LL;
      }
      goto LABEL_19;
    }
  }
  if ( *(_BYTE *)(i + 1 + v13) == 58 )
    v2 = gettext("missing character class name `[::]'");
  else
    v2 = gettext("missing equivalence class character `[==]'");
  error(0, 0, v2);
  return 0LL;
}

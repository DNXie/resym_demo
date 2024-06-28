#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __int64 v7; // rbx
  const char *v8; // rax
  char v9; // [rsp+32h] [rbp-4Eh]
  char v10; // [rsp+33h] [rbp-4Dh]
  int v11; // [rsp+34h] [rbp-4Ch]
  int v12; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+3Ch] [rbp-44h]
  char **v14; // [rsp+48h] [rbp-38h]
  char v15[4]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+54h] [rbp-2Ch]
  char v17; // [rsp+58h] [rbp-28h]
  char v18; // [rsp+59h] [rbp-27h]
  char v20; // [rsp+68h] [rbp-18h]
  char v21; // [rsp+69h] [rbp-17h]

  v9 = 1;
  v10 = 0;
  sub_403CB2(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40B270(sub_4037F6);
  sub_401E94((__int64)v15);
  sub_401BE7();
  while ( 1 )
  {
    v12 = getopt_long(a1, a2, "firvIR", &longopts, 0LL);
    if ( v12 == -1 )
    {
      if ( a1 <= optind )
      {
        if ( v15[0] )
          exit(0);
        v3 = gettext("missing operand");
        error(0, 0, v3);
        sub_401D12(1);
      }
      if ( v18 )
      {
        if ( v9 )
        {
          if ( !sub_408E6D(&unk_60F300) )
          {
            v4 = sub_403DBD("/");
            v5 = gettext("failed to get attributes of %s");
            v6 = __errno_location();
            error(1, *v6, v5, v4);
          }
        }
      }
      v14 = &a2[optind];
      if ( v10 && (v18 || (unsigned __int64)(a1 - optind) > 3) )
      {
        v7 = qword_60F328;
        v8 = v18 ? gettext("%s: remove all arguments recursively? ") : gettext("%s: remove all arguments? ");
        fprintf(stderr, v8, v7);
        if ( (unsigned __int8)sub_4060E7() != 1 )
          exit(0);
      }
      v13 = sub_403277(v14, v15);
      if ( v13 != 2 && v13 != 3 && v13 != 4 )
        __assert_fail(
          "((status) == RM_OK || (status) == RM_USER_DECLINED || (status) == RM_ERROR)",
          "../../src/src/rm.c",
          0x158u,
          "main");
      exit(v13 == 4);
    }
    if ( v12 == 114 )
      goto LABEL_25;
    if ( v12 > 114 )
    {
      if ( v12 == 129 )
      {
        v17 = 1;
      }
      else if ( v12 > 129 )
      {
        if ( v12 == 131 )
        {
          v9 = 1;
        }
        else if ( v12 < 131 )
        {
          v9 = 0;
        }
        else
        {
          if ( v12 != 132 )
            goto LABEL_42;
          v20 = 1;
        }
      }
      else if ( v12 == 118 )
      {
        v21 = 1;
      }
      else
      {
        if ( v12 != 128 )
          goto LABEL_42;
        if ( optarg )
          v11 = dword_40B6C0[sub_4036CF("--interactive", optarg, off_40B680, dword_40B6C0, 4LL, off_60F248)];
        else
          v11 = 2;
        switch ( v11 )
        {
          case 1:
            v16 = 4;
            v15[0] = 0;
            v10 = 1;
            break;
          case 2:
            v16 = 3;
            v15[0] = 0;
            v10 = 0;
            break;
          case 0:
            v16 = 5;
            v10 = 0;
            break;
        }
      }
    }
    else if ( v12 == 73 )
    {
      v16 = 5;
      v15[0] = 0;
      v10 = 1;
    }
    else
    {
      if ( v12 <= 73 )
      {
        if ( v12 == -131 )
        {
          sub_405C87(
            (_DWORD)stdout,
            (unsigned int)"rm",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60F240,
            (unsigned int)"Paul Rubin",
            (unsigned int)"David MacKenzie",
            "Richard M. Stallman",
            "Jim Meyering",
            0LL);
          exit(0);
        }
        if ( v12 == -130 )
          sub_401D12(0);
LABEL_42:
        sub_401BF2(a1, (__int64 *)a2);
        sub_401D12(1);
      }
      switch ( v12 )
      {
        case 'f':
          v16 = 5;
          v15[0] = 1;
          v10 = 0;
          break;
        case 'i':
          v16 = 3;
          v15[0] = 0;
          v10 = 0;
          break;
        case 'R':
LABEL_25:
          v18 = 1;
          break;
        default:
          goto LABEL_42;
      }
    }
  }
}

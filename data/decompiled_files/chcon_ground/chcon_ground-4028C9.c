#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // rax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rax
  __int64 v16; // r12
  char *v17; // rbx
  int *v18; // rax
  int v19; // eax
  char v20; // [rsp+2Dh] [rbp-33h]
  char v21; // [rsp+2Eh] [rbp-32h]
  int v22; // [rsp+30h] [rbp-30h]
  int v23; // [rsp+34h] [rbp-2Ch]
  int v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h]

  v25 = 0LL;
  v22 = 16;
  v23 = -1;
  v20 = 0;
  v21 = 0;
  v26 = 0LL;
  sub_403053(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40BE40(sub_402EB1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = getopt_long(a1, a2, "HLPRhvu:r:t:l:", &longopts, 0LL);
        if ( v24 == -1 )
        {
          if ( byte_610301 )
          {
            if ( v22 == 16 )
            {
              if ( v23 == 1 )
              {
                v3 = gettext("-R --dereference requires either -H or -L");
                error(1, 0, v3);
              }
              byte_610300 = 0;
            }
            else
            {
              if ( !v23 )
              {
                v4 = gettext("-R -h requires -P");
                error(1, 0, v4);
              }
              byte_610300 = 1;
            }
          }
          else
          {
            v22 = 16;
            byte_610300 = v23 != 0;
          }
          if ( v26 || v21 )
            v5 = 1;
          else
            v5 = 2;
          if ( a1 - optind < v5 )
          {
            if ( a1 > optind )
            {
              v7 = sub_40315E(a2[a1 - 1]);
              v8 = gettext("missing operand after %s");
              error(0, 0, v8, v7);
            }
            else
            {
              v6 = gettext("missing operand");
              error(0, 0, v6);
            }
            sub_402794(1);
          }
          if ( v26 )
          {
            if ( (int)sub_401C31(v26, &v25) < 0 )
            {
              v9 = sub_40315E(v26);
              v10 = gettext("failed to get security context of %s");
              v11 = __errno_location();
              error(1, *v11, v10, v9);
            }
            qword_610310 = v25;
          }
          else if ( v21 )
          {
            qword_610310 = 0LL;
          }
          else
          {
            v12 = optind++;
            qword_610310 = (__int64)a2[v12];
            if ( !(unsigned int)sub_401C53(qword_610310) )
            {
              v13 = sub_404777(qword_610310);
              v14 = gettext("invalid context: %s");
              error(1, 0, v14, v13);
            }
            sub_401C8E();
          }
          if ( v26 && v21 )
          {
            v15 = gettext("conflicting security context specifiers given");
            error(0, 0, v15);
            sub_402794(1);
          }
          if ( byte_610301 && v20 )
          {
            qword_610308 = sub_40801C(&unk_610340);
            if ( !qword_610308 )
            {
              v16 = sub_40315E("/");
              v17 = gettext("failed to get attributes of %s");
              v18 = __errno_location();
              error(1, *v18, v17, v16);
            }
          }
          else
          {
            qword_610308 = 0LL;
          }
          v19 = !sub_4026A7((__int64)&a2[optind], v22 | 8u);
          exit(v19);
        }
        if ( v24 != 108 )
          break;
        qword_610328 = optarg;
        v21 = 1;
      }
      if ( v24 <= 108 )
        break;
      if ( v24 == 118 )
      {
        byte_610302 = 1;
      }
      else if ( v24 > 118 )
      {
        if ( v24 == 129 )
        {
          v20 = 0;
        }
        else if ( v24 > 129 )
        {
          if ( v24 == 130 )
          {
            v20 = 1;
          }
          else
          {
            if ( v24 != 131 )
              goto LABEL_46;
            v26 = optarg;
          }
        }
        else
        {
          if ( v24 != 128 )
            goto LABEL_46;
          v23 = 1;
        }
      }
      else if ( v24 == 116 )
      {
        qword_610330 = optarg;
        v21 = 1;
      }
      else if ( v24 > 116 )
      {
        qword_610318 = optarg;
        v21 = 1;
      }
      else
      {
        if ( v24 != 114 )
          goto LABEL_46;
        qword_610320 = optarg;
        v21 = 1;
      }
    }
    if ( v24 == 76 )
    {
      v22 = 2;
    }
    else if ( v24 > 76 )
    {
      if ( v24 == 82 )
      {
        byte_610301 = 1;
      }
      else if ( v24 > 82 )
      {
        if ( v24 != 102 )
        {
          if ( v24 != 104 )
            goto LABEL_46;
          v23 = 0;
        }
      }
      else
      {
        if ( v24 != 80 )
          goto LABEL_46;
        v22 = 16;
      }
    }
    else
    {
      if ( v24 == -130 )
        sub_402794(0);
      if ( v24 != 72 )
      {
        if ( v24 == -131 )
        {
          sub_405028(
            (_DWORD)stdout,
            (unsigned int)"chcon",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_610250,
            (unsigned int)"Russell Coker",
            (unsigned int)"Jim Meyering",
            0);
          exit(0);
        }
LABEL_46:
        sub_402794(1);
      }
      v22 = 17;
    }
  }
}

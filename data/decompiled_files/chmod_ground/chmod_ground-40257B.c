#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // eax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  int v16; // eax
  char v17; // [rsp+2Ah] [rbp-56h]
  int v18; // [rsp+2Ch] [rbp-54h]
  unsigned __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  char *v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  char *s; // [rsp+50h] [rbp-30h]
  size_t v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v17 = 0;
  v22 = 0LL;
  sub_403526(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40AA30(sub_402B4C);
  byte_60E2EE = 0;
  byte_60E2ED = 0;
  byte_60E2EC = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = getopt_long(a1, a2, "Rcfvr::w::x::X::s::t::u::g::o::a::,::+::=::", &longopts, 0LL);
        if ( v18 == -1 )
        {
          if ( v22 )
          {
            if ( v20 )
            {
              v3 = gettext("cannot combine mode and --reference options");
              error(0, 0, v3);
              sub_402446(1);
            }
          }
          else if ( !v20 )
          {
            v4 = optind++;
            v20 = a2[v4];
          }
          if ( optind >= a1 )
          {
            if ( v20 && a2[optind - 1] == v20 )
            {
              v6 = sub_403631(a2[a1 - 1]);
              v7 = gettext("missing operand after %s");
              error(0, 0, v7, v6);
            }
            else
            {
              v5 = gettext("missing operand");
              error(0, 0, v5);
            }
            sub_402446(1);
          }
          if ( v22 )
          {
            qword_60E2E0 = sub_403344(v22);
            if ( !qword_60E2E0 )
            {
              v8 = sub_403631(v22);
              v9 = gettext("failed to get attributes of %s");
              v10 = __errno_location();
              error(1, *v10, v9, v8);
            }
          }
          else
          {
            qword_60E2E0 = sub_402FEF(v20);
            if ( !qword_60E2E0 )
            {
              v11 = sub_403631(v20);
              v12 = gettext("invalid mode: %s");
              error(0, 0, v12, v11);
              sub_402446(1);
            }
            dword_60E2E8 = umask(0);
          }
          if ( byte_60E2EC && v17 )
          {
            qword_60E2F0 = sub_4084EF(&unk_60E300);
            if ( !qword_60E2F0 )
            {
              v13 = sub_403631("/");
              v14 = gettext("failed to get attributes of %s");
              v15 = __errno_location();
              error(1, *v15, v14, v13);
            }
          }
          else
          {
            qword_60E2F0 = 0LL;
          }
          v16 = !sub_402348((__int64)&a2[optind], 0x411u);
          exit(v16);
        }
        if ( v18 != 102 )
          break;
        byte_60E2ED = 1;
      }
      if ( v18 > 102 )
        break;
      if ( v18 == 61 )
        goto LABEL_34;
      if ( v18 > 61 )
      {
        if ( v18 == 88 )
          goto LABEL_34;
        if ( v18 > 88 )
        {
          if ( v18 == 97 )
            goto LABEL_34;
          if ( v18 != 99 )
            goto LABEL_46;
          dword_60E220 = 1;
        }
        else
        {
          if ( v18 != 82 )
            goto LABEL_46;
          byte_60E2EC = 1;
        }
      }
      else
      {
        if ( v18 == -130 )
          sub_402446(0);
        if ( v18 <= -130 )
        {
          if ( v18 == -131 )
          {
            sub_4054FB(
              (_DWORD)stdout,
              (unsigned int)"chmod",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_60E228,
              (unsigned int)"David MacKenzie",
              (unsigned int)"Jim Meyering",
              0);
            exit(0);
          }
LABEL_46:
          sub_402446(1);
        }
        if ( (unsigned int)(v18 - 43) > 1 )
          goto LABEL_46;
LABEL_34:
        s = a2[optind - 1];
        v24 = strlen(s);
        v25 = (v21 != 0) + v21;
        v26 = v25 + v24;
        if ( v19 <= v25 + v24 )
        {
          v19 = v26 + 1;
          v20 = (char *)sub_4057F9(v20, &v19);
        }
        v20[v21] = 44;
        strcpy(&v20[v25], s);
        v21 = v26;
        byte_60E2EE = 1;
      }
    }
    if ( v18 == 118 )
    {
      dword_60E220 = 0;
    }
    else
    {
      if ( v18 <= 118 )
      {
        if ( v18 != 111 )
        {
          if ( v18 > 111 )
          {
            if ( v18 < 114 )
              goto LABEL_46;
          }
          else if ( v18 != 103 )
          {
            goto LABEL_46;
          }
        }
        goto LABEL_34;
      }
      if ( v18 == 128 )
      {
        v17 = 0;
      }
      else
      {
        if ( v18 <= 128 )
        {
          if ( v18 > 120 )
            goto LABEL_46;
          goto LABEL_34;
        }
        if ( v18 == 129 )
        {
          v17 = 1;
        }
        else
        {
          if ( v18 != 130 )
            goto LABEL_46;
          v22 = optarg;
        }
      }
    }
  }
}

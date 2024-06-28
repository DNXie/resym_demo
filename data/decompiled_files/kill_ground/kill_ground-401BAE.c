#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  const char *v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char **v10; // rax
  char v12; // [rsp+16h] [rbp-3Ah]
  char v13; // [rsp+17h] [rbp-39h]
  int v14; // [rsp+18h] [rbp-38h]
  int v15; // [rsp+1Ch] [rbp-34h]
  char v16[24]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-18h]

  v17 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  v14 = -1;
  sub_402328(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404CF0(sub_402186);
  while ( 1 )
  {
    v15 = getopt_long(
            a1,
            a2,
            "0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::L::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::ln:s:t",
            &longopts,
            0LL);
    if ( v15 == -1 )
      break;
    if ( v15 > 90 )
    {
      if ( v15 == 110 )
        goto LABEL_24;
      if ( v15 > 110 )
      {
        if ( v15 == 115 )
          goto LABEL_24;
        if ( v15 != 116 )
          goto LABEL_35;
        v13 = 1;
      }
      else if ( v15 != 108 )
      {
        goto LABEL_35;
      }
      if ( v12 )
      {
        v7 = gettext("multiple -l or -t options specified");
        error(0, 0, v7);
        sub_4016E7(1);
      }
      v12 = 1;
    }
    else
    {
      if ( v15 < 65 )
      {
        if ( v15 == -130 )
          sub_4016E7(0);
        if ( v15 <= -130 )
        {
          if ( v15 == -131 )
          {
            sub_4042BA(
              (_DWORD)stdout,
              (unsigned int)"kill",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_6071D0,
              (unsigned int)"Paul Eggert",
              0,
              (char)a2);
            exit(0);
          }
LABEL_35:
          sub_4016E7(1);
        }
        if ( (unsigned int)(v15 - 48) > 9 )
          goto LABEL_35;
        if ( optind != 2 )
        {
          --optind;
          break;
        }
      }
      if ( !optarg )
      {
        v3 = a2[optind - 1];
        optarg = (__int64)&v3[strlen(v3)];
      }
      if ( a2[optind - 1] + 2 != (char *)optarg )
      {
        v4 = gettext("invalid option -- %c");
        error(0, 0, v4, (unsigned int)v15);
        sub_4016E7(1);
      }
      --optarg;
LABEL_24:
      if ( v14 >= 0 )
      {
        v5 = optarg;
        v6 = gettext("%s: multiple signals specified");
        error(0, 0, v6, v5);
        sub_4016E7(1);
      }
      v14 = sub_401F93(optarg, v16);
      if ( v14 < 0 )
        sub_4016E7(1);
    }
  }
  if ( v14 >= 0 )
  {
    if ( v12 )
    {
      v8 = gettext("cannot combine signal with -l or -t");
      error(0, 0, v8);
      sub_4016E7(1);
    }
  }
  else
  {
    v14 = 15;
  }
  if ( v12 != 1 && a1 <= optind )
  {
    v9 = gettext("no process ID specified");
    error(0, 0, v9);
    sub_4016E7(1);
  }
  if ( !v12 )
    return sub_401AA4(v14, &a2[optind]);
  if ( optind >= a1 )
    v10 = 0LL;
  else
    v10 = &a2[optind];
  return sub_401891(v13, v10);
}

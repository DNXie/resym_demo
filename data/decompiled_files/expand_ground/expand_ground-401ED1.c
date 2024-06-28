#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char **v3; // rax
  int *v4; // rax
  unsigned __int8 v5[12]; // [rsp+10h] [rbp-10h] BYREF
  int v6; // [rsp+1Ch] [rbp-4h]

  sub_402369(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404A90(sub_40215D);
  byte_607290 = 0;
  status = 0;
  byte_607260 = 1;
  qword_607270 = 0LL;
  qword_607280 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = getopt_long(a1, a2, "it:0::1::2::3::4::5::6::7::8::9::", &longopts, 0LL);
      if ( v6 == -1 )
      {
        sub_401A01(qword_607270, qword_607280);
        if ( qword_607280 )
        {
          if ( qword_607280 == 1 )
            qword_607268 = *(_QWORD *)qword_607270;
          else
            qword_607268 = 0LL;
        }
        else
        {
          qword_607268 = 8LL;
        }
        if ( optind >= a1 )
          v3 = &off_6071B0;
        else
          v3 = &a2[optind];
        qword_607288 = (__int64)v3;
        sub_401C5D();
        if ( byte_607290 )
        {
          if ( (unsigned int)sub_404796(stdin) )
          {
            v4 = __errno_location();
            error(1, *v4, "-");
          }
        }
        exit(status);
      }
      if ( v6 <= 57 )
        break;
      if ( v6 == 105 )
      {
        byte_607260 = 0;
      }
      else
      {
        if ( v6 != 116 )
          goto LABEL_17;
        sub_4017DC((unsigned __int8 *)optarg);
      }
    }
    if ( v6 < 48 )
    {
      if ( v6 == -131 )
      {
        sub_40433E(
          (_DWORD)stdout,
          (unsigned int)"expand",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6071C0,
          (unsigned int)"David MacKenzie",
          0,
          (char)a2);
        exit(0);
      }
      if ( v6 == -130 )
        sub_401656(0);
LABEL_17:
      sub_401656(1);
    }
    if ( optarg )
    {
      sub_4017DC((unsigned __int8 *)(optarg - 1));
    }
    else
    {
      v5[0] = v6;
      v5[1] = 0;
      sub_4017DC(v5);
    }
  }
}

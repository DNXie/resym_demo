#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char *v5; // rax
  char v6; // [rsp+2Bh] [rbp-15h]
  int v7; // [rsp+2Ch] [rbp-14h]

  v6 = 1;
  sub_4038FC(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40BB70(sub_4035CB);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = getopt_long(a1, a2, "abdlmpqrstuwHT", &longopts, 0LL);
        if ( v7 == -1 )
        {
          if ( v6 )
          {
            byte_60F2CD = 1;
            byte_60F2C2 = 1;
          }
          if ( byte_60F2C6 )
            byte_60F2C2 = 0;
          if ( (unsigned __int8)sub_40376D(2LL) )
          {
            qword_60F2D0 = "%Y-%m-%d %H:%M";
            dword_60F2D8 = 16;
          }
          else
          {
            qword_60F2D0 = "%b %e %H:%M";
            dword_60F2D8 = 12;
          }
          v3 = a1 - optind;
          if ( a1 - optind != 1 )
          {
            if ( v3 > 1 )
            {
              if ( v3 == 2 )
              {
                byte_60F2CE = 1;
                goto LABEL_59;
              }
            }
            else if ( v3 >= -1 )
            {
LABEL_59:
              sub_402C30("/var/run/utmp", 1u);
              goto LABEL_62;
            }
            v4 = sub_403A07(a2[optind + 2]);
            v5 = gettext("extra operand %s");
            error(0, 0, v5, v4);
            sub_402CBF(1);
          }
          sub_402C30(a2[optind], 0);
LABEL_62:
          exit(0);
        }
        if ( v7 != 109 )
          break;
        byte_60F2CE = 1;
      }
      if ( v7 <= 109 )
        break;
      if ( v7 == 115 )
      {
        byte_60F2C2 = 1;
      }
      else if ( v7 > 115 )
      {
        if ( v7 == 117 )
        {
          byte_60F2CD = 1;
          byte_60F2C3 = 1;
          v6 = 0;
        }
        else if ( v7 < 117 )
        {
          byte_60F2CB = 1;
          v6 = 0;
        }
        else if ( v7 == 119 )
        {
LABEL_39:
          byte_60F2C5 = 1;
        }
        else
        {
          if ( v7 != 128 )
            goto LABEL_44;
          byte_60F2C0 = 1;
        }
      }
      else if ( v7 == 113 )
      {
        byte_60F2C1 = 1;
      }
      else if ( v7 > 113 )
      {
        byte_60F2CC = 1;
        byte_60F2C3 = 1;
        v6 = 0;
      }
      else
      {
        if ( v7 != 112 )
          goto LABEL_44;
        byte_60F2CA = 1;
        v6 = 0;
      }
    }
    if ( v7 == 84 )
      goto LABEL_39;
    if ( v7 > 84 )
    {
      if ( v7 == 98 )
      {
        byte_60F2C7 = 1;
        v6 = 0;
      }
      else if ( v7 > 98 )
      {
        if ( v7 == 100 )
        {
          byte_60F2C8 = 1;
          byte_60F2C3 = 1;
          byte_60F2C6 = 1;
          v6 = 0;
        }
        else
        {
          if ( v7 != 108 )
            goto LABEL_44;
          byte_60F2C9 = 1;
          byte_60F2C3 = 1;
          v6 = 0;
        }
      }
      else
      {
        if ( v7 != 97 )
          goto LABEL_44;
        byte_60F2C7 = 1;
        byte_60F2C8 = 1;
        byte_60F2C9 = 1;
        byte_60F2CA = 1;
        byte_60F2CC = 1;
        byte_60F2CB = 1;
        byte_60F2CD = 1;
        byte_60F2C5 = 1;
        byte_60F2C3 = 1;
        byte_60F2C6 = 1;
        v6 = 0;
      }
    }
    else
    {
      if ( v7 == -130 )
        sub_402CBF(0);
      if ( v7 != 72 )
      {
        if ( v7 == -131 )
        {
          sub_4058D1(
            (_DWORD)stdout,
            (unsigned int)"who",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60F240,
            (unsigned int)"Joseph Arceneaux",
            (unsigned int)"David MacKenzie",
            "Michael Stone",
            0LL);
          exit(0);
        }
LABEL_44:
        sub_402CBF(1);
      }
      byte_60F2C4 = 1;
    }
  }
}

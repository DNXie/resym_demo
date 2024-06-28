#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4060A8(int a1, char *const *a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  int i; // eax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  unsigned int v20; // [rsp+4Ch] [rbp-24h]
  __int64 v21[3]; // [rsp+58h] [rbp-18h] BYREF

  for ( i = getopt_long(a1, a2, "c:n:fFqs:v0123456789", &longopts, 0LL);
        ;
        i = getopt_long(a1, a2, "c:n:fFqs:v0123456789", &longopts, 0LL) )
  {
    v20 = i;
    if ( i == -1 )
      break;
    if ( i == 113 )
    {
      *a4 = 2;
      continue;
    }
    if ( i > 113 )
    {
      if ( i == 129 )
      {
        if ( (unsigned int)sub_40BA18(optarg, 0LL, 10LL, &qword_610258, &locale) )
        {
          v7 = optarg;
          v8 = gettext("%s: invalid maximum number of unchanged stats between opens");
          error(1, 0, v8, v7);
        }
      }
      else if ( i > 129 )
      {
        if ( i == 131 )
        {
          byte_610329 = 1;
          continue;
        }
        if ( i < 131 )
        {
          if ( (unsigned int)sub_40B50C(optarg, 0LL, 10LL, v21, &locale) || v21[0] > 0x7FFFFFFFuLL )
          {
            v9 = optarg;
            v10 = gettext("%s: invalid PID");
            error(1, 0, v10, v9);
          }
          pid = v21[0];
        }
        else
        {
          if ( i == 132 )
          {
LABEL_38:
            byte_61031E = 1;
            if ( optarg )
              dword_610250 = dword_40C8A8[sub_406E90("--follow", optarg, off_40C890, dword_40C8A8, 4LL, off_610278)];
            else
              dword_610250 = 2;
            continue;
          }
          if ( i != 133 )
            goto LABEL_60;
          byte_61032A = 1;
        }
      }
      else
      {
        switch ( i )
        {
          case 118:
            *a4 = 1;
            break;
          case 128:
            byte_61031C = 1;
            break;
          case 115:
            if ( (unsigned __int8)sub_40B3B9(optarg, 0LL, v21, sub_406FD6) != 1 || *(double *)v21 < 0.0 )
            {
              v11 = optarg;
              v12 = gettext("%s: invalid number of seconds");
              error(1, 0, v12, v11);
            }
            *a5 = v21[0];
            break;
          default:
            goto LABEL_60;
        }
      }
    }
    else
    {
      if ( i <= 57 )
      {
        if ( i >= 48 )
        {
          v13 = gettext("option used in invalid context -- %c");
          error(1, 0, v13, v20);
        }
        else
        {
          if ( i == -131 )
          {
            sub_40AF29(
              (_DWORD)stdout,
              (unsigned int)"tail",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_610270,
              (unsigned int)"Paul Rubin",
              (unsigned int)"David MacKenzie",
              "Ian Lance Taylor",
              "Jim Meyering",
              0LL);
            exit(0);
          }
          if ( i == -130 )
            sub_401C08(0);
        }
LABEL_60:
        sub_401C08(1);
      }
      if ( i == 99 )
        goto LABEL_28;
      if ( i > 99 )
      {
        if ( i == 102 )
          goto LABEL_38;
        if ( i != 110 )
          goto LABEL_60;
LABEL_28:
        byte_61031D = i == 110;
        if ( *(_BYTE *)optarg == 43 )
        {
          byte_61031F = 1;
        }
        else if ( *(_BYTE *)optarg == 45 )
        {
          ++optarg;
        }
        if ( (unsigned int)sub_40BA18(optarg, 0LL, 10LL, a3, "bkKmMGTPEZY0") )
        {
          if ( v20 == 110 )
            v6 = gettext("invalid number of lines");
          else
            v6 = gettext("invalid number of bytes");
          error(1, 0, "%s: %s", (const char *)optarg, v6);
        }
        continue;
      }
      if ( i != 70 )
        goto LABEL_60;
      byte_61031E = 1;
      dword_610250 = 1;
      byte_61031C = 1;
    }
  }
  if ( byte_61031C && dword_610250 != 1 )
  {
    v14 = gettext("warning: --retry is useful mainly when following by name");
    error(0, 0, v14);
  }
  if ( pid && byte_61031E != 1 )
  {
    v15 = gettext("warning: PID ignored; --pid=PID is useful only when following");
    error(0, 0, v15);
  }
  else if ( pid && kill(pid, 0) && *__errno_location() == 38 )
  {
    v16 = gettext("warning: --pid=PID is not supported on this system");
    error(0, 0, v16);
    pid = 0;
  }
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40467E(int a1, __int64 a2, unsigned __int64 a3, double a4)
{
  const char *v4; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  char *v14; // rax
  bool v15; // al
  char *v16; // rbx
  int *v17; // rax
  int v18; // eax
  char *v19; // rbx
  int *v20; // rax
  __int64 v21; // r12
  char *v22; // rbx
  int *v23; // rax
  char *v24; // rax
  char v26; // [rsp+23h] [rbp-11Dh]
  char v27; // [rsp+24h] [rbp-11Ch]
  char v28; // [rsp+25h] [rbp-11Bh]
  bool v29; // [rsp+26h] [rbp-11Ah]
  char v30; // [rsp+27h] [rbp-119h]
  int v31; // [rsp+28h] [rbp-118h] BYREF
  int v32; // [rsp+2Ch] [rbp-114h]
  int v33; // [rsp+30h] [rbp-110h]
  unsigned int v34; // [rsp+34h] [rbp-10Ch]
  int v35; // [rsp+38h] [rbp-108h]
  int v36; // [rsp+3Ch] [rbp-104h]
  unsigned __int64 v37; // [rsp+40h] [rbp-100h]
  __int64 v38; // [rsp+48h] [rbp-F8h]
  unsigned __int64 v39; // [rsp+50h] [rbp-F0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-E8h]
  unsigned __int64 i; // [rsp+60h] [rbp-E0h]
  __int64 v42; // [rsp+68h] [rbp-D8h]
  unsigned __int64 j; // [rsp+70h] [rbp-D0h]
  __int64 v44; // [rsp+78h] [rbp-C8h]
  size_t v45; // [rsp+80h] [rbp-C0h]
  __int64 v46; // [rsp+88h] [rbp-B8h]
  __int64 v47; // [rsp+90h] [rbp-B0h]
  const char **v48; // [rsp+98h] [rbp-A8h]
  struct timeval timeout; // [rsp+A0h] [rbp-A0h] BYREF
  fd_set readfds; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v51; // [rsp+130h] [rbp-10h] BYREF

  v32 = 3;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v37 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v44 = sub_407D52(a3, 0LL, sub_4043C7, sub_4043F2, 0LL);
  if ( !v44 )
    sub_40B313();
  for ( i = 0LL; i < a3; ++i )
  {
    if ( *(_BYTE *)(96 * i + a2 + 52) != 1 )
    {
      v45 = strlen(*(const char **)(96 * i + a2));
      if ( v37 < v45 )
        v37 = v45;
      *(_DWORD *)(96 * i + a2 + 68) = -1;
      if ( dword_610250 == 1 )
      {
        v46 = sub_407157(*(_QWORD *)(96 * i + a2));
        v30 = *(_BYTE *)(*(_QWORD *)(96 * i + a2) + v46);
        *(_QWORD *)(96 * i + a2 + 80) = sub_407277(*(_QWORD *)(96 * i + a2)) - *(_QWORD *)(96 * i + a2);
        *(_BYTE *)(*(_QWORD *)(96 * i + a2) + v46) = 0;
        v4 = v46 ? *(_QWORD *)(96 * i + a2) : ".";
        *(_DWORD *)(96 * i + a2 + 72) = inotify_add_watch(a1, v4, 0x184u);
        *(_BYTE *)(v46 + *(_QWORD *)(96 * i + a2)) = v30;
        if ( *(int *)(96 * i + a2 + 72) < 0 )
        {
          if ( *__errno_location() == 28 )
          {
            v8 = gettext("inotify resources exhausted");
            error(0, 0, v8);
          }
          else
          {
            v5 = sub_408FA1(*(_QWORD *)(96 * i + a2));
            v6 = gettext("cannot watch parent directory of %s");
            v7 = __errno_location();
            error(0, *v7, v6, v5);
          }
          v27 = 1;
          break;
        }
      }
      *(_DWORD *)(96 * i + a2 + 68) = inotify_add_watch(a1, *(const char **)(96 * i + a2), 0xC06u);
      if ( *(int *)(96 * i + a2 + 68) >= 0 )
      {
        if ( !sub_4089E8(v44, a2 + 96 * i) )
          sub_40B313();
        v26 = 1;
      }
      else if ( *__errno_location() == 28 )
      {
        v28 = 1;
        v9 = gettext("inotify resources exhausted");
        error(0, 0, v9);
      }
      else if ( *__errno_location() != *(_DWORD *)(96 * i + a2 + 60) )
      {
        v10 = sub_408FA1(*(_QWORD *)(96 * i + a2));
        v11 = gettext("cannot watch %s");
        v12 = __errno_location();
        error(0, *v12, v11, v10);
      }
    }
  }
  if ( v28 || v27 )
  {
    *__errno_location() = 0;
    return 1LL;
  }
  if ( dword_610250 == 2 && v26 != 1 )
    return 0LL;
  v31 = *(_DWORD *)(96 * a3 - 96 + a2 + 68);
  for ( i = 0LL; i < a3; ++i )
  {
    if ( *(_BYTE *)(96 * i + a2 + 52) != 1 )
      sub_404423(96 * i + a2, *(_DWORD *)(96 * i + a2 + 68), &v31);
  }
  v37 += 17LL;
  v38 = sub_40B191(v37);
  while ( dword_610250 != 1 || byte_61031C == 1 || sub_407480(v44) )
  {
    if ( !pid )
      goto LABEL_56;
    if ( v29 )
      exit(0);
    v15 = kill(pid, 0) && *__errno_location() != 1;
    v29 = v15;
    if ( v15 )
    {
      timeout.tv_usec = 0LL;
      timeout.tv_sec = 0LL;
    }
    else
    {
      timeout.tv_sec = (unsigned int)(int)a4;
      timeout.tv_usec = (unsigned int)(int)((a4 - (double)(int)a4) * 1000000.0);
    }
    memset(&readfds, 0, sizeof(readfds));
    v33 = 0;
    v34 = (unsigned int)&v51;
    readfds.fds_bits[a1 / 64] |= 1LL << (a1 % 64);
    v35 = select(a1 + 1, &readfds, 0LL, 0LL, &timeout);
    if ( v35 )
    {
      if ( v35 == -1 )
      {
        v16 = gettext("error monitoring inotify event");
        v17 = __errno_location();
        error(1, *v17, v16);
      }
LABEL_56:
      if ( v40 > v39 )
        goto LABEL_65;
      v40 = sub_40A739((unsigned int)a1, v38, v37);
      v39 = 0LL;
      if ( (!v40 || v40 == -1LL && *__errno_location() == 22) && (v18 = v32, --v32, v18) )
      {
        v40 = 0LL;
        v37 *= 2LL;
        v38 = sub_40B1C6(v38, v37);
      }
      else
      {
        if ( !v40 || v40 == -1LL )
        {
          v19 = gettext("error reading inotify event");
          v20 = __errno_location();
          error(1, *v20, v19);
        }
LABEL_65:
        v47 = v38 + v39;
        v39 += *(unsigned int *)(v38 + v39 + 12) + 16LL;
        if ( !*(_DWORD *)(v47 + 12) )
        {
          HIDWORD(readfds.fds_bits[8]) = *(_DWORD *)v47;
          v42 = sub_407719(v44, &readfds);
          goto LABEL_85;
        }
        for ( j = 0LL;
              j < a3
           && (*(_DWORD *)(96 * j + a2 + 72) != *(_DWORD *)v47
            || strcmp(
                 (const char *)(v47 + 16),
                 (const char *)(*(_QWORD *)(96 * j + a2) + *(_QWORD *)(96 * j + a2 + 80))));
              ++j )
        {
          ;
        }
        if ( j != a3 )
        {
          v36 = inotify_add_watch(a1, *(const char **)(96 * j + a2), 0xC06u);
          if ( v36 >= 0 )
          {
            v42 = 96 * j + a2;
            sub_408A31(v44, v42);
            *(_DWORD *)(v42 + 68) = v36;
            v48 = (const char **)sub_408A31(v44, v42);
            if ( v48 && v48 != (const char **)v42 )
            {
              if ( dword_610250 == 1 )
                sub_403322((__int64)v48, 0);
              *((_DWORD *)v48 + 17) = -1;
              v24 = sub_401DE6(v48);
              sub_401F23(*((_DWORD *)v48 + 14), (__int64)v24);
            }
            if ( !sub_4089E8(v44, v42) )
              sub_40B313();
            if ( dword_610250 == 1 )
              sub_403322(v42, 0);
LABEL_85:
            if ( v42 )
            {
              if ( (*(_DWORD *)(v47 + 4) & 0xC04) != 0 )
              {
                if ( (*(_DWORD *)(v47 + 4) & 0x400) != 0 || (*(_DWORD *)(v47 + 4) & 0x800) != 0 && dword_610250 == 2 )
                {
                  inotify_rm_watch(a1, *(_DWORD *)(v42 + 68));
                  sub_408A31(v44, v42);
                }
                if ( dword_610250 == 1 )
                  sub_403322(v42, 0);
              }
              else
              {
                sub_404423(v42, *(_DWORD *)v47, &v31);
              }
            }
          }
          else
          {
            v21 = sub_408FA1(*(_QWORD *)(96 * j + a2));
            v22 = gettext("cannot watch %s");
            v23 = __errno_location();
            error(0, *v23, v22, v21);
          }
        }
      }
    }
  }
  v14 = gettext("no files remaining");
  error(0, 0, v14);
  return 0LL;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_40256A()
{
  int v0; // eax
  int v1; // er8
  int v2; // er9
  int v3; // er8
  int v4; // er9
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char v8; // [rsp+0h] [rbp-2F0h]
  bool v9; // [rsp+2h] [rbp-2EEh]
  bool v10; // [rsp+3h] [rbp-2EDh]
  unsigned int v11; // [rsp+4h] [rbp-2ECh]
  char *v12; // [rsp+8h] [rbp-2E8h] BYREF
  unsigned __int64 i; // [rsp+10h] [rbp-2E0h]
  char *s; // [rsp+18h] [rbp-2D8h]
  unsigned __int64 v15; // [rsp+20h] [rbp-2D0h]
  unsigned __int64 v16; // [rsp+28h] [rbp-2C8h]
  __int64 v17; // [rsp+30h] [rbp-2C0h]
  __int64 v18; // [rsp+38h] [rbp-2B8h]
  char v19[664]; // [rsp+40h] [rbp-2B0h] BYREF
  unsigned __int64 v20; // [rsp+2D8h] [rbp-18h]

  v20 = __readfsqword(0x28u);
  sub_4023BF();
  for ( i = 0LL; i <= 6; ++i )
  {
    if ( i == 1 && byte_618550 != 1 )
    {
      *(_QWORD *)(8 * i + *(_QWORD *)(8 * qword_6185A8 - 8 + qword_6185A0)) = 0LL;
    }
    else
    {
      v12 = 0LL;
      s = gettext((&(&off_618340)[4 * i])[dword_618598]);
      if ( !s )
        s = gettext((&off_618340)[4 * i]);
      if ( dword_618598 || i != 2 )
      {
        if ( dword_618598 == 3 && i == 2 )
        {
          v18 = sub_405C59(qword_618528, v19);
          if ( (unsigned int)sub_40A174((unsigned int)&v12, (unsigned int)"%s-%s", v18, (_DWORD)s, v3, v4, v8) == -1 )
            v12 = 0LL;
        }
        else
        {
          v12 = strdup(s);
        }
      }
      else
      {
        v0 = dword_618524 & 0x124;
        LOBYTE(v0) = dword_618524 & 0x24 | 0x98;
        v11 = v0;
        v15 = qword_618528;
        v16 = qword_618528;
        do
        {
          v9 = v15 % 0x3E8 == 0;
          v15 /= 0x3E8uLL;
          v10 = (v16 & 0x3FF) == 0;
          v16 >>= 10;
        }
        while ( v9 && v10 );
        if ( v9 < v10 )
          v11 = v0 | 0x20;
        if ( v10 < v9 )
          v11 &= 0xFFFFFFDF;
        if ( (v11 & 0x20) == 0 )
          v11 |= 0x100u;
        v17 = sub_404FDE(qword_618528, v19, v11, 1LL, 1LL);
        if ( (unsigned int)sub_40A174((unsigned int)&v12, (unsigned int)"%s-%s", v17, (_DWORD)s, v1, v2, v8) == -1 )
          v12 = 0LL;
      }
      if ( !v12 )
        sub_4099EE();
      *(_QWORD *)(*(_QWORD *)(8 * qword_6185A8 - 8 + qword_6185A0) + 8 * i) = v12;
      v5 = qword_618440[i];
      if ( v5 <= (int)sub_40626C(v12, 0LL) )
        v6 = (int)sub_40626C(v12, 0LL);
      else
        v6 = qword_618440[i];
      qword_618440[i] = v6;
    }
  }
  return __readfsqword(0x28u) ^ v20;
}

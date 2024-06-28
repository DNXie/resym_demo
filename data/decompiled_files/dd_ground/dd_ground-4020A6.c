#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_4020A6()
{
  __int64 v0; // r14
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v11; // rax
  unsigned __int64 v12; // rax
  double v13; // xmm0_8
  char *v14; // rax
  double v16; // [rsp+18h] [rbp-2E8h]
  char *v17; // [rsp+20h] [rbp-2E0h]
  __int64 v18; // [rsp+28h] [rbp-2D8h]
  char v19[664]; // [rsp+40h] [rbp-2C0h] BYREF
  unsigned __int64 v20; // [rsp+2D8h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v18 = sub_409515();
  v0 = qword_60E398;
  v1 = qword_60E3A0;
  v2 = qword_60E3A8;
  v3 = qword_60E3B0;
  v4 = gettext("%lu+%lu records in\n%lu+%lu records out\n");
  fprintf(stderr, v4, v3, v2, v1, v0);
  if ( qword_60E3E0 )
  {
    v5 = qword_60E3E0;
    v6 = sub_401C0C(qword_60E3E0);
    v7 = ngettext("%lu truncated record\n", "%lu truncated records\n", v6);
    fprintf(stderr, v7, v5);
  }
  if ( (dword_60E38C & 1) == 0 )
  {
    v8 = sub_405986(qword_60E3B8, v19, 465LL, 1LL, 1LL);
    v9 = qword_60E3B8;
    v10 = sub_401C0C(qword_60E3B8);
    v11 = ngettext("%lu byte (%s) copied", "%lu bytes (%s) copied", v10);
    fprintf(stderr, v11, v9, v8);
    if ( qword_60E3C0 >= v18 )
    {
      v16 = 0.0;
      v17 = gettext("Infinity B");
    }
    else
    {
      v12 = v18 - qword_60E3C0;
      if ( v18 - qword_60E3C0 < 0 )
        v13 = (double)(int)(v12 & 1 | (v12 >> 1)) + (double)(int)(v12 & 1 | (v12 >> 1));
      else
        v13 = (double)(int)v12;
      v16 = v13 / 1000000000.0;
      v17 = (char *)sub_405986(qword_60E3B8, v19, 465LL, 1000000000LL, v18 - qword_60E3C0);
    }
    v14 = gettext(", %g s, %s/s\n");
    fprintf(stderr, v14, v17, v16);
  }
  return __readfsqword(0x28u) ^ v20;
}

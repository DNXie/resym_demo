#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40352D(const char *a1, int a2)
{
  __int64 v2; // rdx
  const char *v3; // rax
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v9; // [rsp+14h] [rbp-CCh]
  char *s; // [rsp+18h] [rbp-C8h]
  struct tm *v11; // [rsp+20h] [rbp-C0h]
  __int64 v12; // [rsp+28h] [rbp-B8h]
  time_t timer; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-A8h]
  struct stat stat_buf; // [rsp+40h] [rbp-A0h] BYREF

  if ( !strcmp(a1, "-") )
    a2 = -1;
  if ( a2 < 0 || (unsigned int)sub_40BA00(a2, &stat_buf) )
  {
    if ( !qword_610430 )
      sub_4056CD(&qword_610430);
    timer = qword_610430;
    v14 = qword_610438;
  }
  else
  {
    timer = sub_401BB4((__int64)&stat_buf);
    v14 = v2;
  }
  v9 = v14;
  v11 = localtime(&timer);
  if ( v11 )
  {
    v12 = sub_409D41(0LL, -1LL, qword_6103F8, v11, 0LL, v9) + 1;
    s = (char *)sub_40A750(v12);
    sub_409D41(s, v12, qword_6103F8, v11, 0LL, v9);
  }
  else
  {
    s = (char *)sub_40A750(33LL);
    sprintf(s, "%ld.%09d", timer, v9);
  }
  free(qword_610400);
  qword_610400 = s;
  if ( qword_6103F0 )
  {
    v3 = (const char *)qword_6103F0;
  }
  else if ( a2 < 0 )
  {
    v3 = &locale;
  }
  else
  {
    v3 = a1;
  }
  qword_610408 = (__int64)v3;
  v4 = dword_610248;
  v5 = v4 - sub_40577E(qword_610400, 0LL);
  v6 = v5 - sub_40577E(qword_610408, 0LL);
  result = v6;
  dword_610410 = v6;
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4038C9()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_608240;
  for ( i = 1; i < dword_608220; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_608300 )
  {
    free(ptr[1]);
    qword_608230 = 256LL;
    off_608238 = &unk_608300;
  }
  if ( ptr != (void **)&qword_608230 )
  {
    free(ptr);
    off_608240 = &qword_608230;
  }
  dword_608220 = 1;
}

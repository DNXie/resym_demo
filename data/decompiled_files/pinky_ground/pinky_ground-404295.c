#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404295()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_608280;
  for ( i = 1; i < dword_608260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_608420 )
  {
    free(ptr[1]);
    qword_608270 = 256LL;
    off_608278 = &unk_608420;
  }
  if ( ptr != (void **)&qword_608270 )
  {
    free(ptr);
    off_608280 = &qword_608270;
  }
  dword_608260 = 1;
}

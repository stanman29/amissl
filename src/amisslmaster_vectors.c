
/* This file was generated by idltool 51.5. Do not edit */

#ifndef EXEC_TYPES_H
#include <exec/types.h>

#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef INTERNAL_AMISSL_COMPILER_H
#include <internal/amissl_compiler.h>
#endif

extern ULONG                _AmiSSLMaster_Obtain(struct AmiSSLMasterIFace *);
extern ULONG                _AmiSSLMaster_Release(struct AmiSSLMasterIFace *);
extern LONG                 InitAmiSSLMaster(struct AmiSSLMasterIFace *, LONG APIVersion, LONG AllowUserStructs);
extern struct Library *     OpenAmiSSL(struct AmiSSLMasterIFace *);
extern void                 CloseAmiSSL(struct AmiSSLMasterIFace *);
extern struct Library *     OpenAmiSSLCipher(struct AmiSSLMasterIFace *, LONG Cipher);
extern void                 CloseAmiSSLCipher(struct AmiSSLMasterIFace *, struct Library * CipherBase);


const static void *const AMISSL_COMMON_DATA main_vectors[] = {
	(void *)_AmiSSLMaster_Obtain,
	(void *)_AmiSSLMaster_Release,
	(void *)NULL,
	(void *)NULL,
	(void *)InitAmiSSLMaster,
	(void *)OpenAmiSSL,
	(void *)CloseAmiSSL,
	(void *)OpenAmiSSLCipher,
	(void *)CloseAmiSSLCipher,
	(void *)-1
};

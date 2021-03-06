/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface SFUCryptoUtils : XXUnknownSuperclass {
}
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x2dca29
+ (unsigned)ivLengthForKey:(id)key;	// 0x2dca6d
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x2dcf11
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x2dca91
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x2dd4c1
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x2dcb6d
+ (id)retainedBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x2dcbb9
+ (id)encodePassphraseHint:(id)hint;	// 0x2dcd15
+ (id)decodePassphraseHint:(id)hint;	// 0x2dcd29
+ (id)sha256HashFromData:(id)data;	// 0x2dcde5
+ (id)sha256HashFromStorage:(id)storage;	// 0x2dce65
+ (id)sha256HashFromString:(id)string;	// 0x2dcdb1
@end

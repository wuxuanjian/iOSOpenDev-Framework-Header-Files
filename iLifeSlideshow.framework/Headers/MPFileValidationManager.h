/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>


@interface MPFileValidationManager : XXUnknownSuperclass {
}
+ (id)sharedManager;	// 0x5481d
+ (void)releaseSharedManager;	// 0x54869
- (BOOL)validateFilesForAudio:(id)audio extensionsOnly:(BOOL)only;	// 0x543e5
- (BOOL)validateFilesForImages:(id)images extensionsOnly:(BOOL)only;	// 0x54411
- (BOOL)validateFilesForMovies:(id)movies extensionsOnly:(BOOL)only;	// 0x54439
- (BOOL)validateFiles:(id)files allowAudio:(BOOL)audio allowImages:(BOOL)images allowMovies:(BOOL)movies extensionsOnly:(BOOL)only;	// 0x54895
- (void)checkFileExtension:(id)extension isAudio:(BOOL *)audio isImage:(BOOL *)image isVideo:(BOOL *)video;	// 0x54461
- (id)resolveAliasPath:(id)path;	// 0x54809
- (id)resolveAliasPath:(id)path isAlias:(BOOL *)alias;	// 0x543e1
@end
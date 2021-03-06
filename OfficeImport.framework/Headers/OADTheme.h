/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class OADDefaultProperties, OADBaseStyles;

__attribute__((visibility("hidden")))
@interface OADTheme : XXUnknownSuperclass {
@private
	OADBaseStyles *mBaseStyles;	// 4 = 0x4
	OADDefaultProperties *mShapeDefaults;	// 8 = 0x8
	OADDefaultProperties *mLineDefaults;	// 12 = 0xc
	OADDefaultProperties *mTextDefaults;	// 16 = 0x10
}
- (id)init;	// 0xbd8a5
- (void)dealloc;	// 0x8d005
- (id)baseStyles;	// 0x55dd
- (void)addDefaults;	// 0x2a9739
- (id)shapeDefaults;	// 0xbeb99
- (id)addShapeDefaults;	// 0xbdb7d
- (id)lineDefaults;	// 0x2a9621
- (id)addLineDefaults;	// 0xbea45
- (id)textDefaults;	// 0x98e1
- (id)addTextDefaults;	// 0xbea91
@end

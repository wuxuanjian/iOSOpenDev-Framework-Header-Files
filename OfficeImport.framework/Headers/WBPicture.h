/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WBPicture.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/WBOfficeArt.h>


__attribute__((visibility("hidden")))
@interface WBPicture : WBOfficeArt {
}
+ (void)readFrom:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run paragraph:(id)paragraph to:(id)to;	// 0x152041
@end

@interface WBPicture (Private)
+ (id)readDrawableFromReader:(id)reader textType:(int)type;	// 0x152e95
@end
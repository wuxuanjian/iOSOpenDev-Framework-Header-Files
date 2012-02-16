/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/CHXDataValue.h>


__attribute__((visibility("hidden")))
@interface CHXDataValue : XXUnknownSuperclass {
}
+ (id)chdStringValueFromXmlDataValueElement:(xmlNode *)xmlDataValueElement state:(id)state;	// 0x1e78f9
+ (id)chdNumberValueFromXmlDataValueElement:(xmlNode *)xmlDataValueElement state:(id)state;	// 0x1e3f35
@end

@interface CHXDataValue (Private)
+ (id)chdDataValueFromXmlDataValueElement:(xmlNode *)xmlDataValueElement state:(id)state;	// 0x1e4075
@end
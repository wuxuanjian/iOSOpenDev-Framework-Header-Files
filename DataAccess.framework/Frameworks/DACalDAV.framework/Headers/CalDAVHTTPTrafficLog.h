/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/XXUnknownSuperclass.h>

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : XXUnknownSuperclass {
	DACoreDAVLogger *_curLogger;	// 4 = 0x4
}
+ (id)instance;	// 0x1557d
- (void)logData:(id)data;	// 0x15781
- (void)logStringWithFormat:(id)format;	// 0x156f1
- (void)finishSnippets;	// 0x156ed
- (void)logString:(id)string;	// 0x156ad
- (BOOL)enabled;	// 0x15689
- (void)dealloc;	// 0x1563d
- (id)init;	// 0x155c5
@end

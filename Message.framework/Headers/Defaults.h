/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>


@interface Defaults : XXUnknownSuperclass {
}
@property(retain) id primaryEmailAddress;	// G=0x21f19; S=0x21bed; converted property
@property(retain) id defaultMailDirectory;	// G=0x21c8d; S=0x21c31; converted property
+ (id)sharedInstance;	// 0x550d
// converted property getter: - (id)primaryEmailAddress;	// 0x21f19
// converted property setter: - (void)setPrimaryEmailAddress:(id)address;	// 0x21bed
- (id)mailAccountDirectory;	// 0x5589
// converted property setter: - (void)setDefaultMailDirectory:(id)directory;	// 0x21c31
// converted property getter: - (id)defaultMailDirectory;	// 0x21c8d
- (id)archiveMailbox;	// 0x21d31
- (id)draftsMailbox;	// 0x21dad
- (id)trashMailboxName;	// 0x12289
- (id)alternateAddressesForSelf;	// 0x21e29
- (BOOL)shouldSendWindowsFriendlyAttachments;	// 0x21eb5
@end
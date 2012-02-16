/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/UIDocumentInteractionControllerDelegate.h>


@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {
	BOOL _didPickApplication;	// 17 = 0x11
	BOOL _isVisible;	// 18 = 0x12
	id _presentationBlock;	// 20 = 0x14
	BOOL _redisplayAfterRotation;	// 24 = 0x18
}
- (BOOL)_isAffectedByWindowNotification:(id)notification;	// 0xd0c15
- (void)_windowWillRotateNotification:(id)_window;	// 0xd0bad
- (void)_windowDidRotateNotification:(id)_window;	// 0xd0b79
- (void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;	// 0xd0b05
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;	// 0xd0aa9
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;	// 0xd0a85
- (void)setupNativeObject;	// 0xd09a9
- (void)destroyNativeObject;	// 0xd08d1
- (void)presentUsingBlock:(id)block;	// 0xd0881
- (void)dealloc;	// 0xd0835
@end
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class Account, AuthScheme, Connection;

@interface MFSASLAuthenticator : XXUnknownSuperclass {
@private
	Connection *_connection;	// 4 = 0x4
	AuthScheme *_authScheme;	// 8 = 0x8
	Account *_account;	// 12 = 0xc
	int _authenticationState;	// 16 = 0x10
}
@property(assign) int authenticationState;	// G=0x41041; S=0x41051; converted property
@property(readonly, retain) AuthScheme *authScheme;	// G=0x4101d; converted property
@property(readonly, retain) Account *account;	// G=0x4102d; converted property
- (id)initWithAuthScheme:(id)authScheme account:(id)account connection:(id)connection;	// 0x41071
- (void)dealloc;	// 0x411f5
// converted property getter: - (id)authScheme;	// 0x4101d
// converted property getter: - (id)account;	// 0x4102d
- (id)saslName;	// 0x411d5
- (BOOL)supportsInitialClientResponse;	// 0x4103d
- (id)responseForServerData:(id)serverData;	// 0x411b9
// converted property getter: - (int)authenticationState;	// 0x41041
// converted property setter: - (void)setAuthenticationState:(int)state;	// 0x41051
- (BOOL)justSentPlainTextPassword;	// 0x41061
- (id)securityLayer;	// 0x41065
- (BOOL)isUsingSSL;	// 0x41165
- (BOOL)base64EncodeResponseData;	// 0x41069
- (BOOL)couldRetry;	// 0x4106d
- (void)setMissingPasswordError;	// 0x41109
@end

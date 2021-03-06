/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACC2SVTransportControllerProtocol <NSObject>
@optional
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelImageFetching;
-(void)verifyRecoveryKeyWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateServiceTicketWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end


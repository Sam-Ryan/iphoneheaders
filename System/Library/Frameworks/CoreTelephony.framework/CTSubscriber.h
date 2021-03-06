/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSData;

@interface CTSubscriber : NSObject {

	_CTServerConnection* _server;
	vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >* _authCallbacks;

}

@property (nonatomic,retain,readonly) NSData * carrierToken; 
-(NSData *)carrierToken;
-(BOOL)refreshCarrierToken;
-(void)handleAuthCallback:(id)arg1 ;
-(void)authenticateWithInfo:(id)arg1 handleResult:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end


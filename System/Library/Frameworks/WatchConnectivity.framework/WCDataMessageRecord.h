/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDataMessageRecord : WCMessageRecord {

	/*^block*/id _responseHandler;

}

@property (copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)description;
-(id)initWithIdentifier:(id)arg1 responseHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)expectsResponse;
-(id)responseHandler;
@end


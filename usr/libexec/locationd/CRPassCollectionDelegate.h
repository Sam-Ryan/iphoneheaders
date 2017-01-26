/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class NSString;

@interface CRPassCollectionDelegate : NSObject <PBRequesterDelegate> {

	CLCollectionRequester* fRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequester:(CLCollectionRequester*)arg1 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 ;
@end


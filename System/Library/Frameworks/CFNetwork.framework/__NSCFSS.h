/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSS : NSObject {

	/*^block*/id _capturedStreams;
	/*function pointer*/void* _trustEval;

}
-(id)initWithTrustChallenge:(/*function pointer*/void*)arg1 capture:(/*^block*/id)arg2 ;
-(BOOL)shouldTrust:(SecTrustRef)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(void)connectionEstablished:(id)arg1 outputStream:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


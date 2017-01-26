/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary;

@interface SagaSetItemPropertyOperation : CloudLibraryOperation {

	unsigned _sagaID;
	NSDictionary* _properties;

}
-(id)initWithSagaID:(unsigned)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPersistent;
-(void)main;
@end


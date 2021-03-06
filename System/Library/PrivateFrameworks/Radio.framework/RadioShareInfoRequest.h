/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSArray;

@interface RadioShareInfoRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	long long _shareType;
	long long _stationID;
	NSString* _stationHash;
	NSArray* _acceptedMIMETypes;

}

@property (nonatomic,copy) NSArray * acceptedMIMETypes;              //@synthesize acceptedMIMETypes=_acceptedMIMETypes - In the implementation block
-(NSArray *)acceptedMIMETypes;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithShareInformationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStation:(id)arg1 shareType:(long long)arg2 ;
-(void)setAcceptedMIMETypes:(NSArray *)arg1 ;
@end


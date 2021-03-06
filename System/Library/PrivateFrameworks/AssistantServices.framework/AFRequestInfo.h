/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData, NSDictionary;

@interface AFRequestInfo : NSObject <NSSecureCoding> {

	NSNumber* _notifyState;
	NSString* _text;
	NSString* _directAction;
	NSData* _handoffRequestData;
	NSString* _handoffURLString;
	NSString* _correctedSpeech;
	NSDictionary* _correctedSpeechContext;

}

@property (nonatomic,copy) NSNumber * notifyState;                             //@synthesize notifyState=_notifyState - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * directAction;                            //@synthesize directAction=_directAction - In the implementation block
@property (nonatomic,copy) NSData * handoffRequestData;                        //@synthesize handoffRequestData=_handoffRequestData - In the implementation block
@property (nonatomic,copy) NSString * handoffURLString;                        //@synthesize handoffURLString=_handoffURLString - In the implementation block
@property (nonatomic,copy) NSString * correctedSpeech;                         //@synthesize correctedSpeech=_correctedSpeech - In the implementation block
@property (nonatomic,copy) NSDictionary * correctedSpeechContext;              //@synthesize correctedSpeechContext=_correctedSpeechContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)directAction;
-(void)setDirectAction:(NSString *)arg1 ;
-(void)setHandoffRequestData:(NSData *)arg1 ;
-(void)setCorrectedSpeech:(NSString *)arg1 ;
-(void)setCorrectedSpeechContext:(NSDictionary *)arg1 ;
-(NSNumber *)notifyState;
-(void)setNotifyState:(NSNumber *)arg1 ;
-(NSData *)handoffRequestData;
-(NSString *)handoffURLString;
-(void)setHandoffURLString:(NSString *)arg1 ;
-(NSString *)correctedSpeech;
-(NSDictionary *)correctedSpeechContext;
@end


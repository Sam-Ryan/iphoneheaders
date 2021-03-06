/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <fmfd/FMFBaseCmd.h>

@class NSString;

@interface FMFImportCommand : FMFBaseCmd {

	NSString* _responseId;
	NSString* _mappingPacketToken;

}

@property (nonatomic,copy) NSString * responseId;                        //@synthesize responseId=_responseId - In the implementation block
@property (nonatomic,retain) NSString * mappingPacketToken;              //@synthesize mappingPacketToken=_mappingPacketToken - In the implementation block
-(id)pathSuffix;
-(void)processCommandResponse:(id)arg1 ;
-(void)setMappingPacketToken:(NSString *)arg1 ;
-(NSString *)mappingPacketToken;
-(void)setResponseId:(NSString *)arg1 ;
-(id)initWithClientSession:(id)arg1 mappingPacketToken:(id)arg2 ;
-(NSString *)responseId;
-(id)jsonBodyDictionary;
@end

